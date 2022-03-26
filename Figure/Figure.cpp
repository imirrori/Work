#include <stdio.h>

#include "Figure.h"

void print_figure(Figure figure, int position)
{
    for(int i = 0; i < position; ++i)
    {
        printf("\n");
    }

    switch(figure.position)
    {
    case TOP:
        for(int i = 0; i < SIZE; ++i)
        {
            for(int j = 0; j < SIZE; ++j)
            {
                printf("%c", figure.data[i][j]);
            }
            printf("\n");
        }
        break;
    case BOTTOM:
        for(int i = SIZE - 1; i >=0; --i)
        {
            for(int j = SIZE - 1; j >=0; --j)
            {
                printf("%c", figure.data[i][j]);
            }
            printf("\n");
        }
        break;
    case RIGHT:
        for(int i = SIZE - 1; i >=0; --i)
        {
            for(int j = SIZE - 1; j >=0; --j)
            {
                printf("%c", figure.data[j][i]);
            }
            printf("\n");
        }
        break;
    case LEFT:
        for(int i = 0; i < SIZE; ++i)
        {
            for(int j = 0; j < SIZE; ++j)
            {
                printf("%c", figure.data[j][i]);
            }
            printf("\n");
        }
        break;
    }
}
