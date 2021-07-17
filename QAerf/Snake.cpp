#include "Snake.h"
#include <string.h>

void init(Snake* snake)
{
    if (snake == nullptr)
    {
        return;
    }

    init_pair(1, COLOR_RED, COLOR_RED);
    init_pair(2, COLOR_GREEN, COLOR_GREEN);

    snake->color_head = ' ' | COLOR_PAIR(1);
    snake->color_body = ' ' | COLOR_PAIR(2);
    snake->size = 5;
    snake->body[0] = {5, 1};
    snake->body[1] = {4, 1};
    snake->body[2] = {3, 1};
    snake->body[3] = {2, 1};
    snake->body[4] = {1, 1};
    snake->direction = RIGHT;
}


void print(Snake* snake)
{
    if (snake == nullptr)
    {
        return;
    }

    for(int i = 0; i < snake->size; ++i)
    {
        move(snake->body[i].y, snake->body[i].x);
        addch(i == 0 ? snake->color_head : snake->color_body);
    }
}

void move(Snake* snake, Direction direction)
{
    if (snake == nullptr)
    {
        return;
    }

    snake->direction = direction;

    Snake copy_snake;
    memcpy(&copy_snake, snake, sizeof(copy_snake));
    for(int i = 1; i < snake->size; ++i)
    {
        copy_snake.body[i] = snake->body[i - 1];
    }

    switch(direction)
    {
    case UP:
        --copy_snake.body[0].y;
        break;
    case DOWN:
        ++copy_snake.body[0].y;
        break;
    case LEFT:
        --copy_snake.body[0].x;
        break;
    case RIGHT:
        ++copy_snake.body[0].x;
        break;
    }

    memcpy(snake, &copy_snake, sizeof(copy_snake));
}

bool is_valid(Snake* snake)
{
    if (snake == nullptr)
    {
        return false;
    }

    for(int i = 1; i < snake->size; ++i)
    {
        if (snake->body[i].x == snake->body[0].x &&
            snake->body[i].y == snake->body[0].y)
        {
            return false;
        }
    }
    return true;
}
