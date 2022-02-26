#include "Menu.h"

#include <stdlib.h>
#include <string.h>
#include <ncurses.h>

void exit_from_game()
{
    exit(0);
}

void none()
{

}

void init_menu(Menu* menu)
{
    strcpy(menu->menu_point[0].name, "Start game");
    strcpy(menu->menu_point[1].name, "Exit");
    menu->menu_point[0].fun = &none;
    menu->menu_point[1].fun = &exit_from_game;
    menu->current_point = 0;
}


void print_menu(Menu menu)
{
    mvprintw(5, 5, menu.menu_point[0].name);
    mvprintw(6, 5, menu.menu_point[1].name);
    mvaddch(5 + menu.current_point, 4, '*');
}

bool move_menu(Menu* menu, int key)
{
    mvaddch(5 + menu->current_point, 4, ' ');
    switch(key)
    {
    case KEY_UP:
    case KEY_DOWN:
        menu->current_point = menu->current_point == 0 ? 1 : 0;
        break;
    case KEY_RIGHT:
        menu->menu_point[menu->current_point].fun();
        break;
    }
}
