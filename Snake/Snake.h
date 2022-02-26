#ifndef SNAKE_H
#define SNAKE_H

#include "Point.h"
#include "Map.h"

struct Snake
{
    Point head;

    int pol_color;
};

void init_snake(Snake* snake);
void print_snake(Snake snake);
bool move_snake(Snake* snake, int key, Map map);

#endif // SNAKE_H
