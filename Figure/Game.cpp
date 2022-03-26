
#include "Game.h"
#include <string.h>

static const Figure AllFugure[2] =
{
    {
            {
             {'#', ' ', ' ', ' '},
             {'#', ' ', ' ', '#'},
             {'#', ' ', '#', ' '},
             {'#', '#', ' ', ' '}
            },
            0,
            0,
            TOP
    },
    {
            {
             {'#', '#', ' ', ' '},
             {'#', ' ', '#', '#'},
             {'#', ' ', '#', ' '},
             {'#', '#', ' ', '#'}
            },
            0,
            0,
            TOP
    }
};

void init_game(Game* game)
{
    memcpy(&game->current_figure, &AllFugure[1], sizeof(game->current_figure));
    memset(&game->graund, 0, sizeof(game->graund));
    memset(&game->graund[Height - 1], '#', sizeof(game->graund[Height - 1]));
    game->position = 0;
}

void step_game(Game* game)
{
    /*
    for(int i = 0; i < SIZE; ++i)
    {
        for(int j = 0; j < Weight; ++j)
        {
            if (game->current_figure[SIZE-1][i] ==
                game->graund[game->position + SIZE])
            {
                // копируем на землю
                // проверяем условия тетриса
                // рандомим новую фигуру
                // меняем позицию на 0
            }
        }
    }
    */
}



