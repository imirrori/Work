#include "Map.h"

void init_map(Map* map)
{
    if (map == nullptr)
    {
        return;
    }

    init_pair(3, COLOR_BLUE, COLOR_BLUE);
    map->ch = ' ' |  COLOR_PAIR(3);
    map->left_top = {0, 0};
    map->right_bot = {50, 20};
}

void print_map(Map* map)
{
    if (map == nullptr)
    {
        return;
    }

    for(int i = map->left_top.x; i < map->right_bot.x; ++i )
    {
        move(map->left_top.y, i);
        addch(map->ch);
        move(map->right_bot.y, i);
        addch(map->ch);
    }

    for(int i = map->left_top.y; i < map->right_bot.y; ++i )
    {
        move(i, map->left_top.x);
        addch(map->ch);
        move(i, map->right_bot.x);
        addch(map->ch);
    }
}
