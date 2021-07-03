#ifndef MENU_H
#define MENU_H

#include "DataBase.h"

enum MenuCode
{
    CreateUser    = 0,
    DeleteUser    = 1,
    PrintDataBase = 2,
    Exit          = 3,

    //------
    Size,
};

struct MenuButton
{
    MenuCode     _code;
    const char * _name;
};

constexpr MenuButton menu[Size] = { { CreateUser,    "Create user" },
                                    { DeleteUser,    "Delete user" },
                                    { PrintDataBase, "Print data base" } ,
                                    { Exit,          "Exit" } };

void print_menu();
// false - for exit
bool do_menu(DataBase* data_base, MenuCode code);

#endif // MENU_H
