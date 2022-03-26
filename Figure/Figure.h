#ifndef FIGURE_H
#define FIGURE_H

constexpr int SIZE = 4;

enum Position
{
    TOP,
    BOTTOM,
    LEFT,
    RIGHT
};

struct Figure
{
    char data[SIZE][SIZE];
    int x;
    int y;
    Position position;
};

void print_figure(Figure figure, int position);

#endif // FIGURE_H
