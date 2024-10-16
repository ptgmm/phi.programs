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


void drawText(float x, float y, const char* text) {
    glRasterPos2f(x, y);
    while (*text) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, *text);
        text++;
    }
}

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

//----------------------------------------
//First Row 7, 8, 9
//----------------------------------------
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

//----------------------------------------
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

//----------------------------------------
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

//----------------------------------------
// Second Row 4, 5, 6
//----------------------------------------
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

//----------------------------------------
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

//----------------------------------------
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

//----------------------------------------
// Third Row 1, 2, 3
//----------------------------------------
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

//----------------------------------------
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

//----------------------------------------
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

//----------------------------------------
// Fourth Row 0
//----------------------------------------
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

//----------------------------------------
    glutSwapBuffers();
}

void mouse(int button, int state, int x, int y){
    int windowHeight = glutGet(GLUT_WINDOW_HEIGHT);
    int UpdatedY = windowHeight - y;
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
        // First Row
        if (x >= 215.0f  && x <= 265.0f  && UpdatedY >= 285.0f && UpdatedY <= 335.0f){
            button7press = !button7press;
            printf("7\n");
        } else if ( x >= 275.0f && x <= 325.0f && UpdatedY >= 285.0f && UpdatedY <= 335.0f){
            button8press = !button8press;
            printf("8\n");
        } else if ( x >= 335.0f && x <= 385.0f && UpdatedY >= 285.0f && UpdatedY <= 335.0f){
            button9press = !button9press;
            printf("9\n");
        //Second Row
        } else if ( x >= 215.0f && x <= 265.0f && UpdatedY >= 225.0f && UpdatedY <= 275.0f){
            button4press = !button4press;
            printf("4\n");
        } else if ( x >= 275.0f && x <= 325.0f && UpdatedY >= 225.0f && UpdatedY <= 275.0f){
            button5press = !button5press;
            printf("5\n");
        } else if ( x >= 335.0f && x <= 385.0f && UpdatedY >= 225.0f && UpdatedY <= 275.0f){
            button6press = !button6press;
            printf("6\n");
        // Third Row
        } else if ( x >= 215.0f && x <= 265.0f && UpdatedY >= 165.0f && UpdatedY <= 215.0f){
            button1press = !button1press;
            printf("1\n");
        } else if ( x >= 275.0f && x <= 325.0f && UpdatedY >= 165.0f && UpdatedY <= 215.0f){
            button2press = !button2press;
            printf("2\n");
        } else if ( x >= 335.0f && x <= 385.0f && UpdatedY >= 165.0f && UpdatedY <= 215.0f){
            button3press = !button3press;
            printf("3\n");
        // Fourth Row
        } else if ( x >= 215.0f && x <= 265.0f && UpdatedY >= 105.0f && UpdatedY <= 155.0f){
            button0press = !button0press;
            printf("0\n");
        }
        glutPostRedisplay();
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
    glutIdleFunc(drawText);
    glutIdleFunc(HandleButtonPress);
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();

    return 0;
}
