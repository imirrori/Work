#include "DataBase.h"

#include <stdio.h>
#include <stdlib.h>

DataBase* create_database(const char* file_name)
{
    DataBase* temp = new DataBase;
    temp->data = nullptr;
    temp->size = 0;
    temp->file = fopen(file_name, "r+");

    if (temp->file != nullptr)
    {
        int size;
        fscanf(temp->file, "%d", &size);
        for(int i = 0; i < size; ++i)
        {
            char name[255];
            char second_name[255];
            fscanf(temp->file, "%s %s", name, second_name);
            add_user(temp, create_user(name, second_name));
        }
    }
    else
    {
        temp->file = fopen(file_name, "w+");
    }

    return temp;
}

void destroy_database(DataBase* data_base)
{
    if (data_base != nullptr)
    {
        if (data_base->file != nullptr)
        {
            fseek(data_base->file, 0, SEEK_SET);
            fprintf(data_base->file, "%d\n", data_base->size);
            for(int i = 0; i < data_base->size; ++i)
            {
                 fprintf(data_base->file, "%s %s\n",
                         data_base->data[i]->_name,
                         data_base->data[i]->_second_name);
            }
            fclose(data_base->file);
        }
        delete[] data_base->data;
        delete data_base;
    }
}

void print_database(DataBase* data_base)
{
    if (data_base == nullptr)
    {
        return;
    }

    printf("Data base:\n");
    for(int i = 0; i < data_base->size; ++i)
    {
        print_user( data_base->data[i] );
    }
    printf("\n");
}

void add_user(DataBase* data_base, User* data)
{
    if (data_base == nullptr || data == nullptr)
    {
        return;
    }

    User** temp = new User*[data_base->size + 1];
    for(int i = 0; i < data_base->size; ++i)
    {
        temp[i] = data_base->data[i];
    }
    temp[data_base->size] = data;

    delete[] data_base->data;
    data_base->data = temp;
    ++data_base->size;
}

void delete_user(DataBase* data_base, User* data)
{
    if (data_base == nullptr || data == nullptr)
    {
        return;
    }

    for(int i = 0; i < data_base->size; ++i)
    {
        if(data_base->data[i] == data)
        {
            destroy_user(data);
            --data_base->size;
            for(int j = i; j < data_base->size; ++j)
            {
                data_base->data[j] = data_base->data[j + 1];
            }
            break;
        }
    }
}

User* find_user(DataBase* data_base, const char* name, const char* second_name)
{
    if (data_base != nullptr)
    {
        for(int i = 0; i < data_base->size; ++i)
        {
            if (is_equal_user(data_base->data[i], name, second_name))
            {
                return data_base->data[i];
            }
        }
    }
    return nullptr;
}
