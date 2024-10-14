#include <stdio.h>
#include <GL/freeglut.h>


int CoolButton = 0;

void display(){ 
    glClear(GL_COLOR_BUFFER_BIT);
    if (CoolButton){
        glColor3f(0.0, 0.3, 0.8);
    } else{
        glColor3f(0.0, 0.6, 0.8);
    }
    glBegin(GL_QUADS);
        glVertex2f(0.0, 0.0);
        glVertex2f(500.0, 0.0);
        glVertex2f(500.0, 500.0);
        glVertex2f(0.0, 500.0);
    glEnd();
    glFlush();
}

void mouse(int button, int state, int x, int y){
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
        int windowHeight = glutGet(GLUT_WINDOW_HEIGHT);
        y = windowHeight - y;
        if (x >= 200 && x <= 600 && y >= 200 && y <= 600){
            CoolButton = !CoolButton;
            glutPostRedisplay();
        }
    }
}

void init(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Calculator");
    init();
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();

    return 0;
}
