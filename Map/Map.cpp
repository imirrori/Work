#include "Map.h"

#include <GL/gl.h>

#include <stdlib.h>
#include <stdio.h>

void init_map(Map* map, const char* path)
{
    FILE* file = fopen(path, "r");
    for (int i = 0; i < Height; ++i)
    {
        fscanf(file, "%s", map->map[i]);
    }
    fclose(file);
}

void print_map(const Map* map)
{
    for (int i = 0; i < Height; ++i)
    {
        for (int j = 0; j < Wigth; ++j)
        {
            glBegin(GL_POLYGON);
            switch (map->map[i][j])
            {
            case BLOCK:
                glColor3f(0.0, 0.0, 0.9);
                break;
            case SPACE:
                glColor3f(0.0, 0.0, 0.0);
                break;
            }
            glVertex2i(j * 40, 440 - i * 40);
            glVertex2i(j * 40 + 40, 440 - i * 40);
            glVertex2i(j * 40 + 40, 440 - i * 40 + 40);
            glVertex2i(j * 40, 440 - i * 40 + 40);
            glEnd ();
        }
    }
}
