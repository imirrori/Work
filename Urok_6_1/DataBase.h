#ifndef DATABASE_H
#define DATABASE_H

#include "Users.h"

#include <stdio.h>

struct DataBase
{
    User** data;
    int    size;
    FILE*  file;
};

DataBase* create_database(const char* file_name);
void destroy_database(DataBase* data_base);
void print_database(DataBase* data_base);

void add_user(DataBase* data_base, User* data);
void delete_user(DataBase* data_base, User* data);
User* find_user(DataBase* data_base, const char* name, const char* second_name);

#endif // DATABASE_H
