#include "Menu.h"

#include "Keys.h"
#include "State.h"

#include <string.h>
#include <ncurses.h>

State exit_from_game()
{
    return EXIT;
}

State start_game()
{
    return GAME;
}

State none()
{
    return state;
}

void init_menu(Menu* menu )
{
    strcpy(menu->menu_point[0].name, "Start game");
    menu->menu_point[0].fun = &start_game;

    strcpy(menu->menu_point[1].name, "Exit");
    menu->menu_point[1].fun = &exit_from_game;
    menu->current_point = 0;
}


void print_menu(Menu menu)
{
    mvprintw(5, 5, menu.menu_point[0].name);
    mvprintw(6, 5, menu.menu_point[1].name);
    mvaddch(5 + menu.current_point, 4, '*');
}

State move_menu(Menu* menu, int key)
{
    mvaddch(5 + menu->current_point, 4, ' ');
    switch(key)
    {
    case MY_KEY_UP:
    case MY_KEY_DOWN:
        menu->current_point = menu->current_point == 0 ? 1 : 0;
        break;
    case MY_KEY_ENTER:
        return menu->menu_point[menu->current_point].fun();
    }
    return none();
}
