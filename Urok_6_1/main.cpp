#include "Menu.h"
#include "DataBase.h"

#include <stdio.h>

int main()
{
    const char* file_name = "/home/evgeniykozev/workspace/Work/Urok_6_1/data_base.txt";
    DataBase* data_base = create_database(file_name);
    int ch;
    do
    {
        print_menu();
        scanf("%d", &ch);
    }while(do_menu(data_base, static_cast<MenuCode>(ch)));

    destroy_database(data_base);
    return 0;
}
