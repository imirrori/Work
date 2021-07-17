#ifndef MAP_H
#define MAP_H

#include "Point.h"
#include <curses.h>

struct Map
{
    Point left_top;
    Point right_bot;
    chtype ch;
};

void init_map(Map* map);
void print_map(Map* map);

#endif // MAP_H
