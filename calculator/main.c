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

//First Row 7, 8, 9
    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.6f, 0.0f);
        glVertex2f(215.0f, 285.0f);
        glVertex2f(265.0f, 285.0f);
        glVertex2f(265.0f, 335.0f);
        glVertex2f(215.0f, 335.0f);
    glEnd();
 
    glBegin(GL_QUADS);
        glVertex2f(275.0f, 285.0f);
        glVertex2f(325.0f, 285.0f); 
        glVertex2f(325.0f, 335.0f);
        glVertex2f(275.0f, 335.0f);   
    glEnd();

    glBegin(GL_QUADS); 
    glColor3f(0.8f, 0.5f, 0.0f); 
        glVertex2f(335.0f, 285.0f);
        glVertex2f(385.0f, 285.0f); 
        glVertex2f(385.0f, 335.0f);
        glVertex2f(335.0f, 335.0f); 
    glEnd(); 

// Second Row 4, 5, 6
    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.6f, 0.0f);
        glVertex2f(215.0f, 225.0f);
        glVertex2f(265.0f, 225.0f);
        glVertex2f(265.0f, 275.0f);
        glVertex2f(215.0f, 275.0f);
    glEnd();
 
    glBegin(GL_QUADS);
        glVertex2f(275.0f, 225.0f);
        glVertex2f(325.0f, 225.0f); 
        glVertex2f(325.0f, 275.0f);
        glVertex2f(275.0f, 275.0f);   
    glEnd();

    glBegin(GL_QUADS); 
    glColor3f(0.8f, 0.5f, 0.0f); 
        glVertex2f(335.0f, 225.0f);
        glVertex2f(385.0f, 225.0f); 
        glVertex2f(385.0f, 275.0f);
        glVertex2f(335.0f, 275.0f); 
    glEnd(); 

// Third Row 1, 2, 3
    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.6f, 0.0f);
        glVertex2f(215.0f, 165.0f);
        glVertex2f(265.0f, 165.0f);
        glVertex2f(265.0f, 215.0f);
        glVertex2f(215.0f, 215.0f);
    glEnd();

    glBegin(GL_QUADS);
        glVertex2f(275.0f, 165.0f);
        glVertex2f(325.0f, 165.0f); 
        glVertex2f(325.0f, 215.0f);
        glVertex2f(275.0f, 215.0f);   
    glEnd();

    glBegin(GL_QUADS); 
    glColor3f(0.8f, 0.5f, 0.0f); 
        glVertex2f(335.0f, 165.0f);
        glVertex2f(385.0f, 165.0f); 
        glVertex2f(385.0f, 215.0f);
        glVertex2f(335.0f, 215.0f); 
    glEnd(); 

// Fourth Row 0
glBegin(GL_QUADS);
    glColor3f(0.9f, 0.6f, 0.0f);
        glVertex2f(215.0f, 105.0f);
        glVertex2f(265.0f, 105.0f);
        glVertex2f(265.0f, 155.0f);
        glVertex2f(215.0f, 155.0f);
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
    gluOrtho2D(0.0, 600.0, 0.0, 500.0);
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Calculator");
    init();
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();

    return 0;
}
