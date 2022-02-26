#ifndef MAP_H
#define MAP_H

#include "Point.h"

struct Map
{
    Point top;
    Point bottom;

    Point exit;
};


void print_map(Map map);

#endif // MAP_H
