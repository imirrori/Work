#include "Map.h"
#include "Snake.h"
#include "Menu.h"

#include <ncurses.h> //подключаем библиотеку ncurses

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

    do
    {
        //print_map(map);
        //print_snake(snake);
        print_menu(menu);
        move_menu(&menu, getch());
        refresh();
        //!move_snake(&snake, getch(), map)
    }while(true);

    endwin();
    return 0;
}
