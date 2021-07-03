#include "Menu.h"
#include "Users.h"

#include <stdio.h>

void print_menu()
{
    printf("Menu:\n");
    for (int i = 0; i < Size; ++i)
    {
        printf("%d - %s\n", menu[i]._code, menu[i]._name);
    }
}

bool do_menu(DataBase* data_base, MenuCode code)
{
    switch(code)
    {
    case CreateUser:
    {
        printf("Please enter name ans second name: ");
        char name[255];
        char second_name[255];
        scanf("%s%s", name, second_name);
        add_user(data_base, create_user( name, second_name ));
        break;
    }
    case DeleteUser:
    {
        printf("Please enter name ans second name: ");
        char name[255];
        char second_name[255];
        scanf("%s%s", name, second_name);
        delete_user(data_base, find_user(data_base, name, second_name));
        break;
    }
    case PrintDataBase:
        print_database(data_base);
        break;
    default:
    case Exit:
        return false;
    }
    return true;
}
