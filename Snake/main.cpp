#include "Map.h"
#include "Menu.h"
#include "Snake.h"
#include "State.h"

#include <stdlib.h>

#include <ncurses.h> //подключаем библиотеку ncurses

State state = MENU;

int main()
{
    initscr();
    curs_set(0);
    start_color();
    noecho();
    keypad(stdscr, TRUE);

    Map map = { {0, 0}, {30, 10}, {28, 9} };
    Snake snake = { {1, 1}, 0 };
    Menu menu;

    init_snake(&snake);
    init_menu(&menu);

    State lastState = state;
    do
    {
        switch(state)
        {
        case MENU:
            print_menu(menu);
            state = move_menu(&menu, getch());
            break;
        case GAME:
            print_map(map);
            print_snake(snake);
            state = move_snake(&snake, getch(), map);
            break;
        case EXIT:
            exit(0);
        }

        if (lastState != state)
        {
            clear();
            lastState = state;
        }


        refresh();
    }while(true);

    endwin();
    return 0;
}
