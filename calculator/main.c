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

int show0 = 0;
int show1 = 0;
int show2 = 0;
int show3 = 0;
int show4 = 0;
int show5 = 0;
int show6 = 0;
int show7 = 0;
int show8 = 0;
int show9 = 0;


void drawText(float x, float y, const char* text) {
    glRasterPos2f(x, y);
    while (*text) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *text);
        text++;
    }
}

/* void HandleButtonPress(int ButtonValue){
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
}*/ 

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

    glColor3f(1.0f, 1.0f, 1.0f);
    drawText(215.0f + 20, 285.0f + 16, "7");
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

    glColor3f(1.0f, 1.0f, 1.0f);
    drawText(275.0f + 20, 285.0f + 16, "8");

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


    glColor3f(1.0f, 1.0f, 1.0f);
    drawText(335.0f + 20, 285.0f + 16, "9");
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

    glColor3f(1.0f, 1.0f, 1.0f);
    drawText(215.0f + 20, 255.0f - 15, "4");

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

    glColor3f(1.0f, 1.0f, 1.0f);
    drawText(275.0f + 20, 255.0f - 15, "5");
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

    glColor3f(1.0f, 1.0f, 1.0f);
    drawText(335.0f + 20, 255.0f - 15, "6");
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

    glColor3f(1.0f, 1.0f, 1.0f);
    drawText(215.0f + 20, 165.0f + 16, "1");

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

    glColor3f(1.0f, 1.0f, 1.0f);
    drawText(275.0f + 20, 165.0f + 16, "2");
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

    glColor3f(1.0f, 1.0f, 1.0f);
    drawText(335.0f + 20, 165.0f + 16, "3");
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

    glColor3f(1.0f, 1.0f, 1.0f);
    drawText(215.0f + 20, 105.0f + 16, "0");
//----------------------------------------
    
    if (show7){
        glColor3f(1.0f, 1.0f, 1.0f);
        drawText(530.0f, 400.0f, "7");
    } else if (show8){
        glColor3f(1.0f, 1.0f, 1.0f);
        drawText(530.0f, 400.0f, "8");
    } else if (show9){
        glColor3f(1.0f, 1.0f, 1.0f);
        drawText(530.0f, 400.0f, "9");
    } else if (show4){
        glColor3f(1.0f, 1.0f, 1.0f);
        drawText(530.0f, 400.0f, "4");
    } else if (show5){
        glColor3f(1.0f, 1.0f, 1.0f);
        drawText(530.0f, 400.0f, "5");
    } else if (show6){
        glColor3f(1.0f, 1.0f, 1.0f);
        drawText(530.0f, 400.0f, "6");
    } else if (show1){
        glColor3f(1.0f, 1.0f, 1.0f);
        drawText(530.0f, 400.0f, "1");
    } else if (show2){
        glColor3f(1.0f, 1.0f, 1.0f);
        drawText(530.0f, 400.0f, "2");
    } else if (show3){
        glColor3f(1.0f, 1.0f, 1.0f);
        drawText(530.0f, 400.0f, "3");
    } else if (show0){
        glColor3f(1.0f, 1.0f, 1.0f);
        drawText(530.0f, 400.0f, "0");
    }

    glutSwapBuffers();
}

void mouse(int button, int state, int x, int y){
    int windowHeight = glutGet(GLUT_WINDOW_HEIGHT);
    int UpdatedY = windowHeight - y;
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
        //Checking if you click in this button
        // First Row
        if (x >= 215.0f  && x <= 265.0f  && UpdatedY >= 285.0f && UpdatedY <= 335.0f){
            button7press = !button7press;
            show7 = !show7;
            printf("7");
        } else if ( x >= 275.0f && x <= 325.0f && UpdatedY >= 285.0f && UpdatedY <= 335.0f){ 
            button8press = !button8press;
            show8 = !show8;
            printf("8");
        } else if ( x >= 335.0f && x <= 385.0f && UpdatedY >= 285.0f && UpdatedY <= 335.0f){
            button9press = !button9press;
            show9 = !show9;
            printf("9");
        //Second Row
        } else if ( x >= 215.0f && x <= 265.0f && UpdatedY >= 225.0f && UpdatedY <= 275.0f){
            button4press = !button4press;
            show4 = !show4;
            printf("4");
        } else if ( x >= 275.0f && x <= 325.0f && UpdatedY >= 225.0f && UpdatedY <= 275.0f){
            button5press = !button5press;
            show5 = !show5;
            printf("5");
        } else if ( x >= 335.0f && x <= 385.0f && UpdatedY >= 225.0f && UpdatedY <= 275.0f){
            button6press = !button6press;
            show6 = !show6;
            printf("6");
        // Third Row
        } else if ( x >= 215.0f && x <= 265.0f && UpdatedY >= 165.0f && UpdatedY <= 215.0f){
            button1press = !button1press;
            show1 = !show1;
            printf("1");
        } else if ( x >= 275.0f && x <= 325.0f && UpdatedY >= 165.0f && UpdatedY <= 215.0f){
            button2press = !button2press;
            show2 = !show2;
            printf("2");
        } else if ( x >= 335.0f && x <= 385.0f && UpdatedY >= 165.0f && UpdatedY <= 215.0f){
            button3press = !button3press;
            show3 = !show3;
            printf("3");
        // Fourth Row
        } else if ( x >= 215.0f && x <= 265.0f && UpdatedY >= 105.0f && UpdatedY <= 155.0f){
            button0press = !button0press;
            show0 = !show0;
            printf("0");
        }
        glutPostRedisplay();
        glutSwapBuffers();
    }
}

void init(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 600.0, 0.0, 500.0); //Scale of cordinets  
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
