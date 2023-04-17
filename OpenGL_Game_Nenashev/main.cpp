#include <GL/glut.h>
#include <cmath>
#include <iostream>

// блок объявлений функций
void renderScene(void);
void koord(void);
void golovapers(float x,float y,float mas);
void pers(float x,float y,float mas);
void telopers(float x,float y,float mas);
void golovagobl(float x,float y,float mas);
void gobl(float x,float y,float mas);
void telogobl(float x,float y,float mas);
void loshadyxo(float x,float y,float mas);
void loshadtelo(float x,float y,float mas);
// блок реализации функций
struct Koord
{
    //точка отсчёта из центраголовы
    float x=-0.6,y=0.4,mas=0.05;
};

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(1000,300);
    glutInitWindowSize(600,600);
    glutCreateWindow("OpenGL Start Application");
    glutDisplayFunc(renderScene);
    glutMainLoop();
    return 0;
}





void koord(void){
    glColor3f(0.9,0.9,0.9);
    glVertex2f(0.0,1);
    glVertex2f(0.0,-1);
    glVertex2f(-1,0.0);
    glVertex2f(1,0.0);
    glColor3f(.9,0,0);
    //По y

    //1 черта по +y
    glVertex2f(-0.05,0.1);
    glVertex2f(0.05,0.1);

    //2 черта по +y
    glVertex2f(-0.05,0.2);
    glVertex2f(0.05,0.2);

    //3 черта по +y
    glVertex2f(-0.05,0.3);
    glVertex2f(0.05,0.3);

    //4 черта по +y
    glVertex2f(-0.05,0.4);
    glVertex2f(0.05,0.4);

    //5 черта по +y
    glVertex2f(-0.05,0.5);
    glVertex2f(0.05,0.5);

    //6 черта по +y
    glVertex2f(-0.05,0.6);
    glVertex2f(0.05,0.6);

    //7 черта по +y
    glVertex2f(-0.05,0.7);
    glVertex2f(0.05,0.7);

    //8 черта по +y
    glVertex2f(-0.05,0.8);
    glVertex2f(0.05,0.8);

    //9 черта по +y
    glVertex2f(-0.05,0.9);
    glVertex2f(0.05,0.9);

    //10 черта по +y
    glVertex2f(-0.05,1);
    glVertex2f(0.05,1);

    //1 черта по -y
    glVertex2f(-0.05,-0.1);
    glVertex2f(0.05,-0.1);

    //2 черта по -y
    glVertex2f(-0.05,-0.2);
    glVertex2f(0.05,-0.2);

    //3 черта по -y
    glVertex2f(-0.05,-0.3);
    glVertex2f(0.05,-0.3);

    //4 черта по -y
    glVertex2f(-0.05,-0.4);
    glVertex2f(0.05,-0.4);

    //5 черта по -y
    glVertex2f(-0.05,-0.5);
    glVertex2f(0.05,-0.5);

    //6 черта по -y
    glVertex2f(-0.05,-0.6);
    glVertex2f(0.05,-0.6);

    //7 черта по -y
    glVertex2f(-0.05,-0.7);
    glVertex2f(0.05,-0.7);

    //8 черта по -y
    glVertex2f(-0.05,-0.8);
    glVertex2f(0.05,-0.8);

    //9 черта по -y
    glVertex2f(-0.05,-0.9);
    glVertex2f(0.05,-0.9);

    //10 черта по -y
    glVertex2f(-0.05,-1);
    glVertex2f(0.05,-1);

    //По x

    //1 черта по +x
    glVertex2f(0.1,0.05);
    glVertex2f(0.1,-0.05);

    //2 черта по +x
    glVertex2f(0.2,0.05);
    glVertex2f(0.2,-0.05);

    //3 черта по +x
    glVertex2f(0.3,0.05);
    glVertex2f(0.3,-0.05);

    //4 черта по +x
    glVertex2f(0.4,0.05);
    glVertex2f(0.4,-0.05);

    //5 черта по +x
    glVertex2f(0.5,0.05);
    glVertex2f(0.5,-0.05);

    //6 черта по +x
    glVertex2f(0.6,0.05);
    glVertex2f(0.6,-0.05);

    //7 черта по +x
    glVertex2f(0.7,0.05);
    glVertex2f(0.7,-0.05);

    //8 черта по +x
    glVertex2f(0.8,0.05);
    glVertex2f(0.8,-0.05);

    //9 черта по +x
    glVertex2f(0.9,0.05);
    glVertex2f(0.9,-0.05);

    //10 черта по +x
    glVertex2f(1,0.05);
    glVertex2f(1,-0.05);

    //1 черта по -x
    glVertex2f(-0.1,0.05);
    glVertex2f(-0.1,-0.05);

    //2 черта по +x
    glVertex2f(-0.2,0.05);
    glVertex2f(-0.2,-0.05);

    //3 черта по -x
    glVertex2f(-0.3,0.05);
    glVertex2f(-0.3,-0.05);

    //4 черта по -x
    glVertex2f(-0.4,0.05);
    glVertex2f(-0.4,-0.05);

    //5 черта по -x
    glVertex2f(-0.5,0.05);
    glVertex2f(-0.5,-0.05);

    //6 черта по -x
    glVertex2f(-0.6,0.05);
    glVertex2f(-0.6,-0.05);

    //7 черта по -x
    glVertex2f(-0.7,0.05);
    glVertex2f(-0.7,-0.05);

    //8 черта по -x
    glVertex2f(-0.8,0.05);
    glVertex2f(-0.8,-0.05);

    //9 черта по -x
    glVertex2f(-0.9,0.05);
    glVertex2f(-0.9,-0.05);

    //10 черта по -x
    glVertex2f(-1,0.05);
    glVertex2f(-1,-0.05);




}

void golovapers(float x,float y,float mas){
    float a=0,b=0;
    glColor3f(.9,0.9,0);
    //координата x
    a=x+mas;
    //координата y
    b=y;
    glVertex2f(a,b);

    //координата x
    a=x;
    //координата y
    b=y+mas;
    glVertex2f(a,b);

    //координата x
    a=x-mas;
    //координата y
    b=y;
    glVertex2f(a,b);

    //координата x
    a=x-mas/2;
    //координата y
    b=y-mas;
    glVertex2f(a,b);

    //координата x
    a=x+mas/2;
    //координата y
    b=y-mas;
    glVertex2f(a,b);
}

void telopers(float x,float y,float mas){

    float a,b;

    glColor3f(.0,0.9,.0);

    //координата x
    a=x;
    //координата y
    b=y-mas;
    glVertex2f(a,b);

    //координата x
    a=x;
    //координата y
    b=y-mas*3;
    glVertex2f(a,b);

    //Правая нога

    //координата x
    a=x;
    //координата y
    b=y-mas*3;
    glVertex2f(a,b);

    //координата x
    a=x-mas/2;
    //координата y
    b=y-mas*5+mas/2;
    glVertex2f(a,b);

    //Левая нога

    //координата x
    a=x;
    //координата y
    b=y-mas*3;
    glVertex2f(a,b);

    //координата x
    a=x+mas/2;
    //координата y
    b=y-mas*5+mas/2;
    glVertex2f(a,b);

    //Левая рука

    //координата x
    a=x;
    //координата y
    b=y-mas*2+mas/2;
    glVertex2f(a,b);

    //координата x
    a=x-mas;
    //координата y
    b=y-mas*3;
    glVertex2f(a,b);

    //Правая рука

    //координата x
    a=x;
    //координата y
    b=y-mas*2+mas/2;
    glVertex2f(a,b);

    //координата x
    a=x+mas;
    //координата y
    b=y-mas*3;
    glVertex2f(a,b);
}

void pers(float x,float y,float mas){

    glBegin(GL_POLYGON);


    golovapers(x,y,mas);

    glEnd();

    glBegin(GL_LINES);

    telopers(x,y,mas);

    glEnd();



}

void golovagobl(float x,float y,float mas){
    float a=0,b=0;

    glColor3f(.9,0.9,0);
    //координата x
    a=-(x-mas);
    //координата y
    b=y+mas;
    glVertex2f(a,b);

    //координата x
    a=-(x+mas);
    //координата y
    b=y+mas;
    glVertex2f(a,b);

    //координата x
    a=-(x-mas);
    //координата y
    b=y-mas;
    glVertex2f(a,b);

    //координата x
    a=-(x+mas);
    //координата y
    b=y-mas;
    glVertex2f(a,b);

    //координата x
    a=-(x+mas);
    //координата y
    b=y+mas;
    glVertex2f(a,b);




}

void telogobl(float x,float y,float mas){

    float a,b;

    glColor3f(.0,0.9,.0);

    //координата x
    a=-x;
    //координата y
    b=y-mas;
    glVertex2f(a,b);

    //координата x
    a=-x;
    //координата y
    b=y-mas*3;
    glVertex2f(a,b);

    //Правая нога

    //координата x
    a=-x;
    //координата y
    b=y-mas*3;
    glVertex2f(a,b);

    //координата x
    a=-(x-mas/2);
    //координата y
    b=y-mas*5+mas/2;
    glVertex2f(a,b);

    //Левая нога

    //координата x
    a=-x;
    //координата y
    b=y-mas*3;
    glVertex2f(a,b);

    //координата x
    a=-(x+mas/2);
    //координата y
    b=y-mas*5+mas/2;
    glVertex2f(a,b);

    //Левая рука

    //координата x
    a=-x;
    //координата y
    b=y-mas*2+mas/2;
    glVertex2f(a,b);

    //координата x
    a=-(x-mas);
    //координата y
    b=y-mas*3;
    glVertex2f(a,b);

    //Правая рука

    //координата x
    a=-x;
    //координата y
    b=y-mas*2+mas/2;
    glVertex2f(a,b);

    //координата x
    a=-(x+mas);
    //координата y
    b=y-mas*3;
    glVertex2f(a,b);
}

void gobl(float x,float y,float mas){

    glBegin(GL_POLYGON);


    golovagobl(x,y,mas);

    glEnd();

    glBegin(GL_LINES);

    telogobl(x,y,mas);

    glEnd();



}

void loshadyxo(float x,float y,float mas){

    glBegin(GL_POLYGON);

    float a=0,b=0;

    glColor3f(.9,0.6,.7);


    //координата x
    a=x;
    //координата y
    b=y+mas;
    glVertex2f(a,b);

    //координата x
    a=x-mas;
    //координата y
    b=y;
    glVertex2f(a,b);

    //координата x
    a=x;
    //координата y
    b=y;
    glVertex2f(a,b);

    glEnd();

}

void loshadtelo(float x,float y,float mas){

    glBegin(GL_POLYGON);

    float a=0,b=0;

    glColor3f(.9,0.9,.9);

    //Шея лошади

    //координата x
    a=x;
    //координата y
    b=y;
    glVertex2f(a,b);

    //координата x
    a=x+mas*2;
    //координата y
    b=y-mas*2;
    glVertex2f(a,b);

    //координата x
    a=x+mas*2;
    //координата y
    b=y-mas*4;
    glVertex2f(a,b);

    //координата x
    a=x-mas/2;
    //координата y
    b=y-mas;
    glVertex2f(a,b);

    //Голова лошади

    //координата x
    a=x-mas;
    //координата y
    b=y;
    glVertex2f(a,b);

    //координата x
    a=x-mas*2;
    //координата y
    b=y-mas*2;
    glVertex2f(a,b);

    //координата x
    a=x-mas*1;
    //координата y
    b=y-mas*3;
    glVertex2f(a,b);

    //координата x
    a=x;
    //координата y
    b=y-mas*1.5;
    glVertex2f(a,b);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f(.9,0.9,.9);

    //Тело лошади

    //координата x
    a=x+mas*2;
    //координата y
    b=y-mas*2;
    glVertex2f(a,b);

    //координата x
    a=x+mas*6;
    //координата y
    b=y-mas*2;
    glVertex2f(a,b);

    //координата x
    a=x+mas*6;
    //координата y
    b=y-mas*4;
    glVertex2f(a,b);

    //координата x
    a=x+mas*2;
    //координата y
    b=y-mas*4;
    glVertex2f(a,b);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f(.9,0.9,.9);

    //1 Нога

    //координата x
    a=x+mas*6;
    //координата y
    b=y-mas*4;
    glVertex2f(a,b);

    //координата x
    a=x+mas*6;
    //координата y
    b=y-mas*7;
    glVertex2f(a,b);

    //координата x
    a=x+mas*5.5;
    //координата y
    b=y-mas*7;
    glVertex2f(a,b);

    //координата x
    a=x+mas*5.5;
    //координата y
    b=y-mas*4;
    glVertex2f(a,b);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f(.9,0.9,.9);

    //2 Нога

    //координата x
    a=x+mas*5;
    //координата y
    b=y-mas*4;
    glVertex2f(a,b);

    //координата x
    a=x+mas*5;
    //координата y
    b=y-mas*7;
    glVertex2f(a,b);

    //координата x
    a=x+mas*4.5;
    //координата y
    b=y-mas*7;
    glVertex2f(a,b);

    //координата x
    a=x+mas*4.5;
    //координата y
    b=y-mas*4;
    glVertex2f(a,b);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f(.9,0.9,.9);

    //3 Нога

    //координата x
    a=x+mas*2.5;
    //координата y
    b=y-mas*4;
    glVertex2f(a,b);

    //координата x
    a=x+mas*2.5;
    //координата y
    b=y-mas*7;
    glVertex2f(a,b);

    //координата x
    a=x+mas*2;
    //координата y
    b=y-mas*7;
    glVertex2f(a,b);

    //координата x
    a=x+mas*2;
    //координата y
    b=y-mas*4;
    glVertex2f(a,b);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f(.9,0.9,.9);

    //4 Нога

    //координата x
    a=x+mas*3.5;
    //координата y
    b=y-mas*4;
    glVertex2f(a,b);

    //координата x
    a=x+mas*3.5;
    //координата y
    b=y-mas*7;
    glVertex2f(a,b);

    //координата x
    a=x+mas*3;
    //координата y
    b=y-mas*7;
    glVertex2f(a,b);

    //координата x
    a=x+mas*3;
    //координата y
    b=y-mas*4;
    glVertex2f(a,b);

    glEnd();
}

void loshad(float x,float y,float mas){

    loshadyxo(x,y,mas);

    loshadtelo(x,y,mas);

}

void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // эта функция должна быть первой в renderScene

    Koord vectr;
    pers(vectr.x,vectr.y,vectr.mas);

    gobl(vectr.x,vectr.y,vectr.mas);

    //точка отсчёта координат лошади
    vectr.x=0.3;
    vectr.y=-0.3;

    loshad(vectr.x,vectr.y,vectr.mas);
    glBegin(GL_LINES);

    koord();

    glEnd();

    glutSwapBuffers();
}
