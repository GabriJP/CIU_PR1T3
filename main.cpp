#include <GL/freeglut.h>

void Init() {
    glClearColor(0.0, 0.0, 0.0, 0.0); //Fondo negro

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0f, -1.0f, -1.0f, -1.0f, -1.0f, 0.0f); //Espacio de trabajo
}

void Display() {
    glClear(GL_COLOR_BUFFER_BIT); // Borra lo existente en el frame buffer

    glBegin(GL_TRIANGLES);
    {
        // Primer triángulo con interpolación de color
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.0f, 0.0f);
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2f(1.0f, 0.0f);
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex2f(0.0f, 1.0f);

        // Segundo triángulo con color uniforme
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(-1.0f, 0.0f);
        glVertex2f(0.0f, -1.0f);
    }

    glEnd();

    glFlush();
}

int main(int argc, char *argv[]) {
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(300, 200);
    glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);
    glutCreateWindow("OpenGL Práctica 1_1, Gabriel Jimenez");
    Init();
    glutDisplayFunc(Display); //Define la función de rendering

    glutMainLoop(); // Bucle principal

    return 0;
}