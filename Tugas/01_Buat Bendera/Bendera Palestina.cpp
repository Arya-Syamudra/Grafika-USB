#include <iostream>
#include <GL/freeglut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(0.0, 200.0);
    glVertex2f(300.0, 200.0);
    glVertex2f(300.0, 130.0);
    glVertex2f(0.0, 130.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(0.0, 130.0);
    glVertex2f(300.0, 130.0);
    glVertex2f(300.0, 65.0);
    glVertex2f(0.0, 65.0);
    glEnd();

    glColor3f(0.0, 0.5, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(0.0, 65.0);
    glVertex2f(300.0, 65.0);
    glVertex2f(300.0, 0.0);
    glVertex2f(0.0, 0.0);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0, 200.0);
    glVertex2f(100.0, 100.0);
    glVertex2f(0.0, 0.0);
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
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Bendera Palestina");
    glutDisplayFunc(display);

    myinit();

    glutMainLoop();

    return 0;
}
