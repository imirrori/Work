#include "Snake.h"

#include "Keys.h"
#include "State.h"

#include <ncurses.h>

void init_snake(Snake* snake)
{
    snake->pol_color = 1;
    init_pair(snake->pol_color, COLOR_GREEN, COLOR_BLACK);
}

void print_snake(Snake snake)
{
    attron(COLOR_PAIR(snake.pol_color));
    mvaddch(snake.head.y, snake.head.x, '0');
    attroff(COLOR_PAIR(snake.pol_color));
}

State move_snake(Snake* snake, int key, Map map)
{
    mvaddch(snake->head.y, snake->head.x, ' ');
    switch(key)
    {
    case MY_KEY_LEFT:
        --snake->head.x;
        break;
    case MY_KEY_RIGHT:
        ++snake->head.x;
        break;
    case MY_KEY_UP:
        --snake->head.y;
        break;
    case MY_KEY_DOWN:
        ++snake->head.y;
        break;
    case MY_KEY_ESC:
        return MENU;
    }
    if (snake->head.x == map.exit.x &&
        snake->head.y == map.exit.y)
        return EXIT;
    return state;
}
