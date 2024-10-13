#include <stdio.h>
#include <GL/freeglut.h>


void display(){ 
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

void init(){
    glClearColor(0.0, 0.6, 0.8, 0.1);
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Calculator");
    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
