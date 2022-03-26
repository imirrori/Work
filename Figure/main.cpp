#include "Game.h"

#include <stdlib.h>
#include <stdio.h>

int main()
{
    Game game;
    init_game(&game);

    while (true) {
        system("clear");
        print_figure(game.current_figure, game.position);
        ++game.position;
        char ch;
        scanf("%c", &ch);
        switch(ch)
        {
        case 'w':
            game.current_figure.position = TOP;
            break;
        case 'a':
            game.current_figure.position = LEFT;
            break;
        case 's':
            game.current_figure.position = BOTTOM;
            break;
        case 'd':
            game.current_figure.position = RIGHT;
            break;
        case 'q':
            return 0;
        }
    }
    return 0;
}
