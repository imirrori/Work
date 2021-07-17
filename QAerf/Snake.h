#ifndef SNAKE_H
#define SNAKE_H

#include <curses.h>

#include "Point.h"

enum Direction
{
    UP,
    DOWN,
    LEFT,
    RIGHT
};

struct Snake
{
    static constexpr int SIZE = 100;

    Point  body[SIZE];
    int    size;

    Direction direction;

    chtype color_head;
    chtype color_body;
};

void init(Snake* snake);
void print(Snake* snake);
void move(Snake* snake, Direction direction);
bool is_valid(Snake* snake);

#endif // SNAKE_H
