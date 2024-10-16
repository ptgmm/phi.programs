#include <stdio.h>
#include <GL/freeglut.h>



int button0press = 0;
int button1press = 0;
int button2press = 0;
int button3press = 0;
int button4press = 0;
int button5press = 0;
int button6press = 0;
int button7press = 0;
int button8press = 0;
int button9press = 0;


void HandleButtonPress(int ButtonValue){
    if (ButtonValue == 0){
        printf("0\n");
    } else if (ButtonValue == 1){
        printf("1\n");
    } else if (ButtonValue == 2){
        printf("2\n");
    } else if (ButtonValue == 3){
        printf("3\n");
    } else if (ButtonValue == 4){
        printf("4\n");
    } else if (ButtonValue == 5){
        printf("5\n");
    } else if (ButtonValue == 6){
        printf("6\n");
    } else if (ButtonValue == 7){
        printf("7\n");
    } else if (ButtonValue == 8){
        printf("8\n");
    } else if (ButtonValue == 9){
        printf("9\n");
    }
}

void display(){ 
    glClear(GL_COLOR_BUFFER_BIT);

//First Row 7, 8, 9
    if (button7press){
        glColor3f(0.376f, 0.376f, 0.376f);
    } else{
        glColor3f(0.475f, 0.475f, 0.475f);
    }

    glBegin(GL_QUADS);
        glVertex2f(215.0f, 285.0f);
        glVertex2f(265.0f, 285.0f);
        glVertex2f(265.0f, 335.0f);
        glVertex2f(215.0f, 335.0f);
    glEnd();

    if (button8press){
        glColor3f(0.376f, 0.376f, 0.376f);
    } else{
        glColor3f(0.475f, 0.475f, 0.475f);
    }

    glBegin(GL_QUADS);
        glVertex2f(275.0f, 285.0f);
        glVertex2f(325.0f, 285.0f); 
        glVertex2f(325.0f, 335.0f);
        glVertex2f(275.0f, 335.0f);   
    glEnd();

    if (button9press){
        glColor3f(0.376f, 0.376f, 0.376f);
    } else{
        glColor3f(0.475f, 0.475f, 0.475f);
    }

    glBegin(GL_QUADS); 
        glVertex2f(335.0f, 285.0f);
        glVertex2f(385.0f, 285.0f); 
        glVertex2f(385.0f, 335.0f);
        glVertex2f(335.0f, 335.0f); 
    glEnd(); 

// Second Row 4, 5, 6

    if (button4press){
        glColor3f(0.376f, 0.376f, 0.376f);
    } else{
        glColor3f(0.475f, 0.475f, 0.475f);
    }

    glBegin(GL_QUADS);
        glVertex2f(215.0f, 225.0f);
        glVertex2f(265.0f, 225.0f);
        glVertex2f(265.0f, 275.0f);
        glVertex2f(215.0f, 275.0f);
    glEnd();

     if (button5press){
        glColor3f(0.376f, 0.376f, 0.376f);
    } else{
        glColor3f(0.475f, 0.475f, 0.475f);
    }

    glBegin(GL_QUADS);
        glVertex2f(275.0f, 225.0f);
        glVertex2f(325.0f, 225.0f); 
        glVertex2f(325.0f, 275.0f);
        glVertex2f(275.0f, 275.0f);   
    glEnd();

    if (button6press){
        glColor3f(0.376f, 0.376f, 0.376f);
    } else{
        glColor3f(0.475f, 0.475f, 0.475f);
    }

    glBegin(GL_QUADS); 
        glVertex2f(335.0f, 225.0f);
        glVertex2f(385.0f, 225.0f); 
        glVertex2f(385.0f, 275.0f);
        glVertex2f(335.0f, 275.0f); 
    glEnd(); 

// Third Row 1, 2, 3

    if (button1press){
        glColor3f(0.376f, 0.376f, 0.376f);
    } else{
        glColor3f(0.475f, 0.475f, 0.475f);
    }

    glBegin(GL_QUADS);
        glVertex2f(215.0f, 165.0f);
        glVertex2f(265.0f, 165.0f);
        glVertex2f(265.0f, 215.0f);
        glVertex2f(215.0f, 215.0f);
    glEnd();

    if (button2press){
        glColor3f(0.376f, 0.376f, 0.376f);
    } else{
        glColor3f(0.475f, 0.475f, 0.475f);
    }

    glBegin(GL_QUADS);
        glVertex2f(275.0f, 165.0f);
        glVertex2f(325.0f, 165.0f); 
        glVertex2f(325.0f, 215.0f);
        glVertex2f(275.0f, 215.0f);   
    glEnd();

    if (button3press){
        glColor3f(0.376f, 0.376f, 0.376f);
    } else{
        glColor3f(0.475f, 0.475f, 0.475f);
    }

    glBegin(GL_QUADS); 
        glVertex2f(335.0f, 165.0f);
        glVertex2f(385.0f, 165.0f); 
        glVertex2f(385.0f, 215.0f);
        glVertex2f(335.0f, 215.0f); 
    glEnd(); 

// Fourth Row 0

    if (button0press){
        glColor3f(0.376f, 0.376f, 0.376f);
    } else{
        glColor3f(0.475f, 0.475f, 0.475f);
    }

glBegin(GL_QUADS);
        glVertex2f(215.0f, 105.0f);
        glVertex2f(265.0f, 105.0f);
        glVertex2f(265.0f, 155.0f);
        glVertex2f(215.0f, 155.0f);
    glEnd();

    glutSwapBuffers();
}

void mouse(int button, int state, int x, int y){
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
        int windowHeight = glutGet(GLUT_WINDOW_HEIGHT);
        y = windowHeight - y;
        if (x >= 200 && x <= 600 && y >= 200 && y <= 600){
            button0press = !button0press;
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
