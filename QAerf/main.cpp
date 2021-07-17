#include <curses.h>

#include "Snake.h"
#include "Map.h"

bool is_map_valid(Snake* snake, Map* map);

int main()
{
    WINDOW *win = initscr();
    start_color();
    keypad(win, TRUE);
    curs_set(0);

    Snake snake;
    init(&snake);

    Map map;
    init_map(&map);

    int key = '\0';
    do
    {
        clear();
        print_map(&map);
        print(&snake);
        refresh();
        key = getch();
        switch(key)
        {
        case KEY_UP:    move(&snake, UP); break;
        case KEY_DOWN:  move(&snake, DOWN); break;
        case KEY_LEFT:  move(&snake, LEFT); break;
        case KEY_RIGHT: move(&snake, RIGHT); break;
        default:
            key = '\0';
            break;
        }
        if (!is_valid(&snake) || !is_map_valid(&snake, &map))
        {
            key = '\0';
        }
    }while(key != '\0');

    endwin();
}


bool is_map_valid(Snake* snake, Map* map)
{
    if (snake == nullptr || map == nullptr)
    {
        return false;
    }

    for(int i = map->left_top.x; i < map->right_bot.x; ++i )
    {
        if ((snake->body[0].x == i && snake->body[0].y == map->left_top.y) ||
            ((snake->body[0].x == i && snake->body[0].y == map->right_bot.y)))
        {
            return false;
        }
    }

    for(int i = map->left_top.y; i < map->right_bot.y; ++i )
    {
        if ((snake->body[0].y == i && snake->body[0].x == map->left_top.x) ||
            ((snake->body[0].y == i && snake->body[0].x == map->right_bot.x)))
        {
            return false;
        }
    }
    return true;
}
