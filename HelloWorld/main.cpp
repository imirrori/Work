#include "stdio.h"

const int UP = 1;
const int DOWN = 2;
const int LEFT = 3;
const int RIGHT = 4;

int GetKey()
{
    return DOWN;
}

int main()
{
    switch(GetKey())
    {
    case DOWN:
        printf("DOWN\n");
        break;
    case UP:
        printf("UP\n");
        break;
    case LEFT:
        printf("LEFT\n");
        break;
    case RIGHT:
        printf("RIGHT\n");
        break;
    }
    return 0;
}


