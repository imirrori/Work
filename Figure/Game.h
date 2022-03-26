#ifndef GAME_H
#define GAME_H

#include "Figure.h"

constexpr int Weight = 4;
constexpr int Height = 10;

struct Game
{
    Figure current_figure;
    int position;
    int graund[Height][Weight];
};

void init_game(Game* game);
void step_game(Game* game);

#endif // GAME_H
