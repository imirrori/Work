#ifndef MAP_H
#define MAP_H

enum MapType
{
    BLOCK = '#',
    SPACE = '.',
};

constexpr int Wigth = 16;
constexpr int Height = 12;

struct Map
{
    char map[Height][Wigth];
};

void init_map(Map* map, const char* path);
void print_map(const Map* map);

#endif // MAP_H
