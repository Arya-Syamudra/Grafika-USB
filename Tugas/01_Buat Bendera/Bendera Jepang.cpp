#include <iostream>
#include <GL/freeglut.h>
#include <cmath>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    double M_PI = 3.14159;

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    int numSegments = 100;
    for (int i = 0; i < numSegments; ++i) {
        double theta = 2.0 * M_PI * double(i) / double(numSegments);
        double x = 150.0 + 50 * cos(theta); 
        double y = 100.0 + 50 * sin(theta);
        glVertex2f(x, y);
    }
    glEnd();

    glFlush();
}

void myinit() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glColor3f(1.0, 0.0, 0.0);
    glPointSize(2.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 300.0, 0.0, 200.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(900, 600);
    glutCreateWindow("Bendera Jepang");
    glutDisplayFunc(display);

    myinit();
    glutMainLoop();

    return 0;
}
