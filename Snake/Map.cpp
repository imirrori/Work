#include "Map.h"

#include <ncurses.h>

void print_map(Map map)
{
    move(map.top.y, map.top.x);
    addch('+');
    for(int i = map.top.x + 1; i < map.bottom.x - 1; ++i)
        addch('-');
    addch('+');

    move(map.bottom.y, map.top.x);
    addch('+');
    for(int i = map.top.x + 1; i < map.bottom.x - 1; ++i)
        addch('-');
    addch('+');

    for(int i = map.top.y + 1; i < map.bottom.y; ++i)
    {
        mvaddch(i, map.top.x, '|');
        mvaddch(i, map.bottom.x - 1, '|');
    }

    mvaddch(map.exit.y, map.exit.x, '@');
}
