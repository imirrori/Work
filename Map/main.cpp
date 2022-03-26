#include <GL/freeglut.h>

#include "Map.h"

Map map;

void DisplayRender(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    print_map(&map);

    glFlush();
}

void Reshape(int, int)
{
    glOrtho(0, 640, 0, 480, 1, 0);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Wind");

    init_map(&map, "/home/evgeniykozev/workspace/Work/Map/map.txt");

    glutDisplayFunc(&DisplayRender);
    glutReshapeFunc(&Reshape);

    glutMainLoop();

    return 0;
}
