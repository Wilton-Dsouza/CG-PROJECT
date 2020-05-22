#include<stdio.h>
#include<GL/glut.h>
#include<math.h>

float r11,r12,r13,r14,r15,r16,r17,r18=0;
float r21,r22,r23,r24,r25,r26,r27,r28=0;
float r31=1000,r32=1000,r33=1000,r34=1000,r35=1000,r36=1000,r37=1000,r38=1000;
float r41=1000,r42=1000,r43=1000,r44=1000,r45=1000,r46=1000,r47=1000,r48=1000;
float y11,y41=0;
float y2=300,y3=300;
float y21=110,y22=110,y23=110,y24=110,y25=110,y26=110,y27=110,y28=110;
float x1,x2,x3,x4,x5,x6,x7,x8,x9=0.0;
float a11=500,a12=470,a13=510,a14=500;
float b11=800,b12=850,b13=850,b14=880;
float a21=500,a22=470,a23=490;
float b21=500,b22=550,b23=560;
float a31=190,a32=160,a33=180;
float b31=300,b32=350,b33=360;
float c11=300,c12=330,c13=360,d11=360,d12=380,e11=317,e12=325,e13=317,e14=325;
float c21=700,c22=730,c23=760,d21=760,d22=780,e21=717,e22=725,e23=717,e24=725;
float f1=0,f2=800;
float f4=0,f3=800;
float f5=0,f6=800;
float s11=400,s12=400,s13=400,s14=400,s15=400,s16=400;
float s21=700,s22=700,s23=700,s24=700,s25=700,s26=700;
float s31=640,s32=640,s33=640,s34=640,s35=640,s36=640;
float s41=700,s42=700,s43=700,s44=700,s45=700,s46=700;
int state=1;
float w11=260,w12=420;
float w21=200,w22=200;
float w31=480,w32=650;
float w41=200,w42=200;
float o1=325,o2=375,o3=450,o4=550,o5=600,o6=660;
float p1=290,p2=375,p3=465,p4=600,p5=600,p6=690;
int count=0;
void timer1(int);
void timer2(int);
void timer3(int);
void timer4(int);
void timer5(int);
void timer6(int);
void enddisplay();
// function to initialize
void myInit (void)
{
    // making background color black as first
    // 3 arguments all are 0.0
    glClearColor(0.0, 0.8, 0.7, 1.0);

    // making picture color green (in RGB mode), as middle argument is 1.0

    // breadth of picture boundary is 1 pixel
    glPointSize(1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    // setting window dimension in X- and Y- direction
    gluOrtho2D(0, 1000, 0, 1000);
}

void scene1 ()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0, 0.8, 0.7, 1.0);
    glBegin(GL_POLYGON);
    float theta=0;
{  //SKY CLOUDS

    for (int i =0; i < 180;i++)
    {
        theta=i*3.142/180;
        glColor3f(0.1,0.6,0.5);
        glVertex2f(100*cos(theta),850+100*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glVertex2f(145+100*cos(theta),850+100*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glVertex2f(290+100*cos(theta),850+100*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glVertex2f(425+100*cos(theta),850+100*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glVertex2f(545+100*cos(theta),850+100*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glVertex2f(715+100*cos(theta),850+100*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glVertex2f(845+100*cos(theta),850+100*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glVertex2f(945+100*cos(theta),850+100*sin(theta));
    }
    glEnd();
}
{//MOUNTAINS

    glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.5,0.5);
    glVertex2f(0,450);
    glVertex2f(100,450);
    glVertex2f(50,700);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.5,0.5);
    glVertex2f(100,450);
    glVertex2f(150,450);
    glVertex2f(125,550);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.5,0.5);
    glVertex2f(150,450);
    glVertex2f(200,450);
    glVertex2f(175,550);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.5,0.5);
    glVertex2f(200,450);
    glVertex2f(300,450);
    glVertex2f(250,650);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.5,0.5);
    glVertex2f(300,450);
    glVertex2f(400,450);
    glVertex2f(350,700);
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.5,0.5);
    glVertex2f(400,450);
    glVertex2f(500,450);
    glVertex2f(450,550);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.5,0.5);
    glVertex2f(500,450);
    glVertex2f(600,450);
    glVertex2f(550,650);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.5,0.5);
    glVertex2f(600,450);
    glVertex2f(700,450);
    glVertex2f(650,700);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.5,0.5);
    glVertex2f(700,450);
    glVertex2f(850,450);
    glVertex2f(775,650);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.5,0.5);
    glVertex2f(850,450);
    glVertex2f(900,450);
    glVertex2f(875,650);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.5,0.5);
    glVertex2f(900,450);
    glVertex2f(1000,450);
    glVertex2f(950,650);
    glEnd();
}
{//BUSHES


    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(20*cos(theta),300+20*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(35+20*cos(theta),300+20*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(70+20*cos(theta),300+20*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(105+20*cos(theta),300+20*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(220+100*cos(theta),300+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(350+50*cos(theta),300+50*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(445+50*cos(theta),300+50*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(510+20*cos(theta),300+20*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(540+20*cos(theta),300+20*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(570+50*cos(theta),300+50*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(710+100*cos(theta),300+100*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(850+50*cos(theta),300+50*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(950+50*cos(theta),300+50*sin(theta));
    }
    glEnd();
}
{//GRAVES
    glBegin(GL_POLYGON);
    glColor3f(0.2,0.2,0.2);
    glVertex2i(300,30);
    glVertex2i(300,250);
    glVertex2i(385,250);
    glVertex2i(385,30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.2,0.2,0.2);
    glVertex2i(650,210);
    glVertex2i(650,350);
    glVertex2i(725,350);
    glVertex2i(725,210);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.2,0.2,0.2);
    glVertex2i(50,30);
    glVertex2i(50,200);
    glVertex2i(125,200);
    glVertex2i(125,30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.2,0.2,0.2);
    glVertex2i(850,40);
    glVertex2i(850,210);
    glVertex2i(915,210);
    glVertex2i(915,40);
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.2,0.2,0.2);
        glVertex2f(342.5+42.5*cos(theta),248+42.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.2,0.2,0.2);
        glVertex2f(687.5+37.5*cos(theta),350+37.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.2,0.2,0.2);
        glVertex2f(87.5+37.5*cos(theta),198+37.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.2,0.2,0.2);
        glVertex2f(882.5+32.5*cos(theta),208+32.5*sin(theta));
    }
    glEnd();
}

 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(x1,700);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'C');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(x2,700);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'H');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(x3,700);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'E');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(x4,700);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'R');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(x5,700);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'N');
 glRasterPos2i(x6,700);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'O');
 glRasterPos2i(x7,700);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'B');
 glRasterPos2i(x8,700);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'Y');
 glRasterPos2i(x9,700);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'L');
 glColor3f(1.0,0.0,0.0);

 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(55,150);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'V');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(65,150);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'I');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(75,150);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(85,150);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'S');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(95,150);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'T');
 glRasterPos2i(105,150);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'E');
 glRasterPos2i(115,150);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');
 glRasterPos2i(68,120);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'L');
 glRasterPos2i(78,120);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'E');
 glRasterPos2i(88,120);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'O');
 glRasterPos2i(98,120);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');
 glColor3f(1.0,0.0,0.0);

 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(655,300);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'W');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(668,300);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'I');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(675,300);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(685,300);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'S');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(695,300);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'T');
 glRasterPos2i(705,300);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'O');
 glRasterPos2i(715,300);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');
 glRasterPos2i(668,270);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'P');
 glRasterPos2i(678,270);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'A');
 glRasterPos2i(688,270);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'I');
 glRasterPos2i(698,270);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'S');
 glColor3f(1.0,0.0,0.0);

 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(320,190);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'S');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(330,190);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'H');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(340,190);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'A');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(350,190);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(360,190);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'E');
 glRasterPos2i(305,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'M');
 glRasterPos2i(318,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'I');
 glRasterPos2i(325,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'S');
 glRasterPos2i(335,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'Q');
 glRasterPos2i(345,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'U');
 glRasterPos2i(355,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'I');
 glRasterPos2i(365,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'T');
 glRasterPos2i(375,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'H');
 glColor3f(1.0,0.0,0.0);

 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(860,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'H');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(870,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'A');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(880,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'Z');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(890,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'E');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(900,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'L');
 glRasterPos2i(865,130);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'J');
 glRasterPos2i(875,130);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'O');
 glRasterPos2i(885,130);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'H');
 glRasterPos2i(895,130);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');
 glColor3f(1.0,0.0,0.0);
  glutSwapBuffers();
}
void scene2()
{
    glClearColor(1.0, 1.0, 0.79, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor3f(0.95,0.95,0.95);
    glVertex2f(500,100);
    glVertex2f(571,200);
    glVertex2f(571,500);
    glVertex2f(500,400);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(510,400);
    glVertex2f(560,472);
    glVertex2f(560,450);
    glVertex2f(510,380);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6,0.6,0.6);
    glVertex2f(500,400);
    glVertex2f(410,500);
    glVertex2f(486,580);
    glVertex2f(571,500);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.79,0.79,0.79);
    glVertex2f(472,495);
    glVertex2f(472,850);
    glVertex2f(504,850);
    glVertex2f(504,495);
    glEnd();


    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(488+16*cos(theta),849+16*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.27,0.0);
    glVertex2f(472,849);
    glVertex2f(504,849);
    glVertex2f(504,825);
    glVertex2f(472,825);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.27,0.0);
    glVertex2f(472,800);
    glVertex2f(504,800);
    glVertex2f(504,772);
    glVertex2f(472,772);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.27,0.0);
    glVertex2f(472,749);
    glVertex2f(504,749);
    glVertex2f(504,721);
    glVertex2f(472,721);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.27,0.0);
    glVertex2f(472,698);
    glVertex2f(504,698);
    glVertex2f(504,668);
    glVertex2f(472,668);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.27,0.0);
    glVertex2f(472,647);
    glVertex2f(504,647);
    glVertex2f(504,617);
    glVertex2f(472,617);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.27,0.0);
    glVertex2f(472,596);
    glVertex2f(504,596);
    glVertex2f(504,566);
    glVertex2f(472,566);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.64,0.64,0.64);
    glVertex2f(410,500);
    glVertex2f(410,235);
    glVertex2f(500,100);
    glVertex2f(500,400);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(420,480);
    glVertex2f(420,455);
    glVertex2f(490,375);
    glVertex2f(490,400);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.77,0.77,0.77);
    glVertex2f(571,500);
    glVertex2f(571,200);
    glVertex2f(650,200);
    glVertex2f(650,500);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(581,485);
    glVertex2f(581,465);
    glVertex2f(640,465);
    glVertex2f(640,485);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6,0.6,0.6);
    glVertex2f(650,400);
    glVertex2f(750,400);
    glVertex2f(750,450);
    glVertex2f(650,500);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.66,0.66,0.66);
    glVertex2f(750,400);
    glVertex2f(725,375);
    glVertex2f(680,375);
    glVertex2f(650,400);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.66,0.66,0.66);
    glVertex2f(650,400);
    glVertex2f(680,375);
    glVertex2f(665,350);
    glVertex2f(650,400);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.62,0.62,0.62);
    glVertex2f(650,400);
    glVertex2f(665,350);
    glVertex2f(665,260);
    glVertex2f(650,260);
    glVertex2f(650,400);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.62,0.62,0.62);
    glVertex2f(650,260);
    glVertex2f(690,260);
    glVertex2f(690,200);
    glVertex2f(650,200);
    glVertex2f(650,260);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(680,375);
    glVertex2f(680,285);
    glVertex2f(665,260);
    glVertex2f(665,350);
    glVertex2f(680,375);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(680,285);
    glVertex2f(710,285);
    glVertex2f(690,260);
    glVertex2f(665,260);
    glVertex2f(665,350);
    glVertex2f(680,285);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.45,0.45,0.45);
    glVertex2f(710,285);
    glVertex2f(710,235);
    glVertex2f(690,200);
    glVertex2f(690,260);
    glVertex2f(710,285);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.4);
    glVertex2f(725,375);
    glVertex2f(725,285);
    glVertex2f(680,285);
    glVertex2f(680,375);
    glVertex2f(725,375);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(715,365);
    glVertex2f(715,350);
    glVertex2f(690,350);
    glVertex2f(690,365);
    glVertex2f(715,365);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.4);
    glVertex2f(725,285);
    glVertex2f(725,235);
    glVertex2f(710,235);
    glVertex2f(710,285);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.95,0.95,0.95);
    glVertex2f(750,400);
    glVertex2f(750,270);
    glVertex2f(725,235);
    glVertex2f(725,375);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8,0.8,0.8);
    glVertex2f(324,365);
    glVertex2f(334,500);
    glVertex2f(334,600);
    glVertex2f(262,490);
    glVertex2f(262,255);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(334,600);
    glVertex2f(320,618);
    glVertex2f(250,510);
    glVertex2f(262,490);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.59,0.59,0.59);
    glVertex2f(250,510);
    glVertex2f(250,290);
    glVertex2f(262,255);
    glVertex2f(262,490);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(410,425);
    glVertex2f(325,510);
    glVertex2f(315,490);
    glVertex2f(410,395);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.7,0.7,0.7);
    glVertex2f(315,490);
    glVertex2f(315,375);
    glVertex2f(410,272.5);
    glVertex2f(410,395);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(325,470);
    glVertex2f(325,450);
    glVertex2f(400,373);
    glVertex2f(400,393);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.68,0.68,0.68);
    glVertex2f(185,405);
    glVertex2f(215,490);
    glVertex2f(215,655);
    glVertex2f(130,550);
    glVertex2f(130,329);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.45,0.45,0.45);
    glVertex2f(215,655);
    glVertex2f(205,667);
    glVertex2f(120,567);
    glVertex2f(130,550);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(250,450);
    glVertex2f(190,520);
    glVertex2f(179,500);
    glVertex2f(250,417);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.72,0.72,0.72);
    glVertex2f(179,500);
    glVertex2f(179,413);
    glVertex2f(250,325);
    glVertex2f(250,417);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(189,480);
    glVertex2f(189,467);
    glVertex2f(240,405);
    glVertex2f(240,422);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.59,0.59,0.59);
    glVertex2f(120,567);
    glVertex2f(120,350);
    glVertex2f(130,329);
    glVertex2f(130,550);
    glVertex2f(120,567);
    glEnd();



    glBegin(GL_LINE_STRIP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(210,590);
    glVertex2f(225,590);
    glVertex2f(225,750);
    glVertex2f(235,750);
    glEnd();



    glBegin(GL_LINE_STRIP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(375,340);
    glVertex2f(375,200);
    glVertex2f(300,200);
    glEnd();



    glBegin(GL_LINE_STRIP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(535,225);
    glVertex2f(535,100);
    glVertex2f(555,100);
    glEnd();



    glBegin(GL_LINE_STRIP);
    glVertex2f(290,340);
    glVertex2f(290,300);
    glVertex2f(220,300);
    glEnd();

 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r11,750);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'R');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r12,750);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'E');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r13,750);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'A');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r14,750);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'C');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r15,750);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'T');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r16,750);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'O');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r17,750);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'R');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r18,750);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'1');


 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r31,200);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'R');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r32,200);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'E');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r33,200);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'A');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r34,200);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'C');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r35,200);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'T');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r36,200);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'O');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r37,200);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'R');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r38,200);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'3');


 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r41,100);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'R');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r42,100);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'E');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r43,100);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'A');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r44,100);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'C');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r45,100);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'T');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r46,100);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'O');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2f(r47,100);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'R');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r48,100);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'4');


 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r21,300);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'R');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r22,300);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'E');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r23,300);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'A');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r24,300);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'C');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r25,300);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'T');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r26,300);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'O');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r27,300);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'R');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(r28,300);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'2');


 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(388,950);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'C');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(403,950);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'H');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(418,950);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'E');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(430,950);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'R');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(444,950);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'N');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(457,950);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'O');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(471,950);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'B');
 glColor3f(0.0,0.0,0.0);
 glRasterPos2i(485,950);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'Y');
 glRasterPos2i(498,950);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'L');
 glRasterPos2i(516,950);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'F');
 glRasterPos2i(527,950);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'A');
 glRasterPos2i(540,950);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'C');
 glRasterPos2i(553,950);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'T');
 glRasterPos2i(566,950);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'O');
 glRasterPos2i(579,950);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'R');
 glRasterPos2i(592,950);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'Y');

    glPointSize(5);
    glBegin(GL_POINTS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(210,590);
    glEnd();

    glPointSize(5);
    glBegin(GL_POINTS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(375,340);
    glEnd();

    glPointSize(5);
    glBegin(GL_POINTS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(535,225);
    glEnd();

    glPointSize(5);
    glBegin(GL_POINTS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(290,340);
    glEnd();

 glutSwapBuffers();
}
void scene3()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.90, 0.95, 0.97, 1.0);
    {
    //MUSHROOM CLOUD
    glBegin(GL_POLYGON);
    glColor3f(0.98,0.52,0.09);
    glVertex2f(400,y11);
    glVertex2f(400,y2);
    glVertex2f(530,y3);
    glVertex2f(530,y41);
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.81,0.0);
        glVertex2f(380+60*cos(theta),y21+60*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.81,0.0);
        glVertex2f(460+60*cos(theta),y22+60*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.81,0.0);
        glVertex2f(540+60*cos(theta),y23+60*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
     for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.81,0.0);
        glVertex2f(380+60*cos(theta),y24+60*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.81,0.0);
        glVertex2f(460+60*cos(theta),y25+60*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.81,0.0);
        glVertex2f(540+60*cos(theta),y26+60*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.81,0.0);
        glVertex2f(350+60*cos(theta),y27+60*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.81,0.0);
        glVertex2f(570+60*cos(theta),y28+60*sin(theta));
    }
    glEnd();
}
    glBegin(GL_POLYGON); //FIELD LAYER 1
    glColor3f(0.21,0.98,0.11);
    glVertex2f(0,0);
    glVertex2f(0,100);
    glVertex2f(1000,100);
    glVertex2f(1000,0);
    glEnd();

    glBegin(GL_POLYGON); //FIELD LAYER 2
    glColor3f(0.54,1.0,0.29);
    glVertex2f(0,100);
    glVertex2f(0,150);
    glVertex2f(1000,150);
    glVertex2f(1000,100);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.87,0.87,0.87); //BUILDING
    glVertex2f(250,150);
    glVertex2f(250,500);
    glVertex2f(800,500);
    glVertex2f(800,150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.68,0.68,0.68); //ROOF
    glVertex2f(220,500);
    glVertex2f(220,515);
    glVertex2f(830,515);
    glVertex2f(830,500);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0); // LINE DRAWN TO SEPARATE THE WINDOWS
    glVertex2f(610,500);
    glVertex2f(610,150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.78,0.94); //BLUE WINDOW 1
    glVertex2f(630,480);
    glVertex2f(780,480);
    glVertex2f(780,360);
    glVertex2f(630,360);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.78,0.94); //BLUE WINDOW 2
    glVertex2f(630,330);
    glVertex2f(780,330);
    glVertex2f(780,200);
    glVertex2f(630,200);
    glEnd();
{
    //WINDOWS LINES
    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(705,480);
    glVertex2f(705,360);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(705,330);
    glVertex2f(705,200);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(630,275);
    glVertex2f(780,275);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(630,420);
    glVertex2f(780,420);
    glEnd();
}
    glBegin(GL_POLYGON);
    glColor3f(0.34,0.34,0.34); //BLACK WINDOW 1
    glVertex2f(470,480);
    glVertex2f(590,480);
    glVertex2f(590,420);
    glVertex2f(470,420);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.34,0.34,0.34); //BLACK WINDOW  2
    glVertex2f(260,480);
    glVertex2f(385,480);
    glVertex2f(385,420);
    glVertex2f(260,420);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.87,0.87,0.87); //ROOF TOP PLACE
    glVertex2f(265,515);
    glVertex2f(265,575);
    glVertex2f(370,575);
    glVertex2f(370,515);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.68,0.68,0.68); //ROOF OF THE ROOF TOP PLACE
    glVertex2f(250,575);
    glVertex2f(250,590);
    glVertex2f(385,590);
    glVertex2f(385,575);
    glEnd();

    glBegin(GL_POLYGON); //TOWER 2
    glColor3f(0.8,0.8,0.8);
    glVertex2f(550,515);
    glVertex2f(550,775);
    glVertex2f(580,775);
    glVertex2f(580,515);
    glEnd();

    glBegin(GL_POLYGON); //TOWER 3
    glColor3f(0.8,0.8,0.8);
    glVertex2f(470,515);
    glVertex2f(470,675);
    glVertex2f(500,675);
    glVertex2f(500,515);
    glEnd();

    glBegin(GL_LINES); //LINE ON TOWER 1
    glColor3f(0.0,0.0,0.0);
    glVertex2f(470,650);
    glVertex2f(500,650);
    glEnd();

    glBegin(GL_LINES); //LINE ON TOWER 2
    glColor3f(0.0,0.0,0.0);
    glVertex2f(550,750);
    glVertex2f(580,750);
    glEnd();

    glBegin(GL_POLYGON); // TOWER ABOVE THE SEMICIRCLE
    glColor3f(0.8,0.8,0.8);
    glVertex2f(650,750);
    glVertex2f(750,750);
    glVertex2f(800,515);
    glVertex2f(600,515);
    glEnd();

    glBegin(GL_LINES); // LINE OF THE ABOVE TOWER
    glColor3f(0.0,0.0,0.0);
    glVertex2f(644,720);
    glVertex2f(757,720);
    glEnd();

    glBegin(GL_POLYGON); // SEMICIRCLE OF THE BUILDING
    for (int i =0; i < 180;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.87,0.87,0.87);
        glVertex2f(730+100*cos(theta),514+100*sin(theta));
    }
    glEnd();
{//Red tower extreme left to the building
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(10,150);
    glVertex2f(10,350);
    glVertex2f(60,350);
    glVertex2f(60,150);
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.0,0.0);
        glVertex2f(35+25*cos(theta),350+25*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.87,0.87,0.87);
    glVertex2f(10,350);
    glVertex2f(60,350);
    glVertex2f(60,330);
    glVertex2f(10,330);
    glEnd();
}
{//Red tower right to the building
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(850,150);
    glVertex2f(850,350);
    glVertex2f(980,350);
    glVertex2f(980,150);
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.0,0.0);
        glVertex2f(915+65*cos(theta),349+65*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.87,0.87,0.87);
    glVertex2f(850,350);
    glVertex2f(980,350);
    glVertex2f(980,330);
    glVertex2f(850,330);
    glEnd();
}
{
    //Red tower left to the building
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(80,150);
    glVertex2f(80,470);
    glVertex2f(170,470);
    glVertex2f(230,150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.87,0.87,0.87);
    glVertex2f(80,450);
    glVertex2f(80,430);
    glVertex2f(178,430);
    glVertex2f(174,450);
    glEnd();
}
{
    //DANGER SIGN 1(LEFT)
    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,1.0,0.0);
        glVertex2f(134+35*cos(theta),350+35*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.0,0.0);
        glVertex2f(134+31*cos(theta),350+30*sin(theta));
    }
    glEnd();

 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(108,348);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'D');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(118,348);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'A');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(128,348);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'N');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(138,348);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'G');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(148,348);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'E');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(158,348);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'R');
}
{
    //DANGER SIGN 2 (RIGHT)
 glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,1.0,0.0);
        glVertex2f(917+35*cos(theta),275+35*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.0,0.0);
        glVertex2f(917+31*cos(theta),275+30*sin(theta));
    }
    glEnd();

 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(889,273);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'D');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(899,273);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'A');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(909,273);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'N');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(919,273);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'G');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(929,273);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'E');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(939,273);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'R');
}
{
    //CLOUD(RIGHT)
 glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,1.0,1.0);
        glVertex2f(f3+60*cos(theta),900+60*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,1.0,1.0);
        glVertex2f(f3+40*cos(theta),900+80*sin(theta));
    }
    glEnd();
}
{
    //CLOUD(LEFT)
    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,1.0,1.0);
        glVertex2f(f4+60*cos(theta),900+60*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,1.0,1.0);
        glVertex2f(f4+40*cos(theta),900+80*sin(theta));
    }
    glEnd();
}
{//BUSHES
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(875+100*cos(theta),115+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(975+100*cos(theta),115+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glVertex2f(65+100*cos(theta),145+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glVertex2f(125+100*cos(theta),125+100*sin(theta));
    }
    glEnd();
}


glBegin(GL_POLYGON);
    glColor3f(0.8,0.8,0.8); //TOWER 1
    glVertex2f(315,590);
    glVertex2f(315,890);
    glVertex2f(350,890);
    glVertex2f(350,590);
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++) // A Semicircle of the Tower 1
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.8,0.8,0.8);
        glVertex2f(332.6+17.5*cos(theta),890+17.5*sin(theta));
    }
    glEnd();
{//RED STRIPS
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(315,850);
    glVertex2f(315,878);
    glVertex2f(350,878);
    glVertex2f(350,850);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(315,800);
    glVertex2f(315,830);
    glVertex2f(350,830);
    glVertex2f(350,800);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(315,748);
    glVertex2f(315,778);
    glVertex2f(350,778);
    glVertex2f(350,748);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(315,698);
    glVertex2f(315,726);
    glVertex2f(350,726);
    glVertex2f(350,698);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(315,648);
    glVertex2f(315,676);
    glVertex2f(350,676);
    glVertex2f(350,648);
    glEnd();
}
    glutSwapBuffers();
}

void scene4()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.90, 0.95, 0.97, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    {
    //CLOUD(RIGHT)
    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,1.0,1.0);
        glVertex2f(f6+60*cos(theta),900+60*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,1.0,1.0);
        glVertex2f(f6+40*cos(theta),900+80*sin(theta));
    }
    glEnd();
}
{
    //CLOUD(LEFT)
    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,1.0,1.0);
        glVertex2f(f5+60*cos(theta),900+60*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,1.0,1.0);
        glVertex2f(f5+40*cos(theta),900+80*sin(theta));
    }
    glEnd();
}
    {                   //LEFT HAND SMOKE CLOUDS
    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(s11+100*cos(theta),s21+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(s12+100*cos(theta),s22+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(s13+100*cos(theta),s23+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(s14+100*cos(theta),s24+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(s15+100*cos(theta),s25+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(s16+100*cos(theta),s26+100*sin(theta));
    }
    glEnd();

    {                   //RIGHT HAND SMOKE CLOUDS
    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(s31+100*cos(theta),s41+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(s32+100*cos(theta),s42+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(s33+100*cos(theta),s43+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(s34+100*cos(theta),s44+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(s35+100*cos(theta),s45+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(s36+100*cos(theta),s46+100*sin(theta));
    }
    glEnd();
    }



    glBegin(GL_POLYGON); //FIELD LAYER 1
    glColor3f(0.21,0.98,0.11);
    glVertex2f(0,0);
    glVertex2f(0,100);
    glVertex2f(1000,100);
    glVertex2f(1000,0);
    glEnd();

    glBegin(GL_POLYGON); //FIELD LAYER 2
    glColor3f(0.54,1.0,0.29);
    glVertex2f(0,100);
    glVertex2f(0,150);
    glVertex2f(1000,150);
    glVertex2f(1000,100);
    glEnd();



    glBegin(GL_POLYGON); //TOWER 2
    glColor3f(0.8,0.8,0.8);
    glVertex2f(550,515);
    glVertex2f(550,775);
    glVertex2f(580,775);
    glVertex2f(580,515);
    glEnd();


    glBegin(GL_POLYGON); // TOWER ABOVE THE SEMICIRCLE
    glColor3f(0.8,0.8,0.8);
    glVertex2f(650,750);
    glVertex2f(750,750);
    glVertex2f(800,515);
    glVertex2f(600,515);
    glEnd();

}

{
    //orange FIRE
    glBegin(GL_POLYGON);   // 1
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(o1+100*cos(theta),515+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 2
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(o2+100*cos(theta),615+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 3
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(o3+100*cos(theta),515+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);   // 4
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(o4+100*cos(theta),515+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 5
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(o5+100*cos(theta),615+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 6
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(o6+100*cos(theta),515+100*sin(theta));
    }
    glEnd();

    //yellow fire
    glBegin(GL_POLYGON);  // 1
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(p1+60*cos(theta),520+60*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 2
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(p2+96*cos(theta),605+96*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);  // 3
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(p3+65*cos(theta),535+65*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON); // 4
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(p4+96*cos(theta),565+96*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 5
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(p5+96*cos(theta),611+96*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);  // 6
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(p6+65*cos(theta),530+65*sin(theta));
    }
    glEnd();

}
    glBegin(GL_LINES); // LINE OF THE ABOVE TOWER
    glColor3f(0.0,0.0,0.0);
    glVertex2f(644,720);
    glVertex2f(757,720);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.87,0.87,0.87); //BUILDING
    glVertex2f(250,150);
    glVertex2f(250,500);
    glVertex2f(800,500);
    glVertex2f(800,150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.68,0.68,0.68); //ROOF
    glVertex2f(220,500);
    glVertex2f(220,515);
    glVertex2f(830,515);
    glVertex2f(830,500);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0); // LINE DRAWN TO SEPARATE THE WINDOWS
    glVertex2f(610,500);
    glVertex2f(610,150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.78,0.94); //BLUE WINDOW 1
    glVertex2f(630,480);
    glVertex2f(780,480);
    glVertex2f(780,360);
    glVertex2f(630,360);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.78,0.94); //BLUE WINDOW 2
    glVertex2f(630,330);
    glVertex2f(780,330);
    glVertex2f(780,200);
    glVertex2f(630,200);
    glEnd();
{
    //WINDOWS LINES
    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(705,480);
    glVertex2f(705,360);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(705,330);
    glVertex2f(705,200);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(630,275);
    glVertex2f(780,275);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(630,420);
    glVertex2f(780,420);
    glEnd();
}
    glBegin(GL_POLYGON);
    glColor3f(0.34,0.34,0.34); //BLACK WINDOW 1
    glVertex2f(470,480);
    glVertex2f(590,480);
    glVertex2f(590,420);
    glVertex2f(470,420);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.34,0.34,0.34); //BLACK WINDOW  2
    glVertex2f(260,480);
    glVertex2f(385,480);
    glVertex2f(385,420);
    glVertex2f(260,420);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.87,0.87,0.87); //ROOF TOP PLACE
    glVertex2f(265,515);
    glVertex2f(265,575);
    glVertex2f(370,575);
    glVertex2f(370,515);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.68,0.68,0.68); //ROOF OF THE ROOF TOP PLACE
    glVertex2f(250,575);
    glVertex2f(250,590);
    glVertex2f(385,590);
    glVertex2f(385,575);
    glEnd();



    glBegin(GL_POLYGON); //TOWER 3
    glColor3f(0.8,0.8,0.8);
    glVertex2f(470,515);
    glVertex2f(470,675);
    glVertex2f(500,675);
    glVertex2f(500,515);
    glEnd();

    glBegin(GL_LINES); //LINE ON TOWER 2
    glColor3f(0.0,0.0,0.0);
    glVertex2f(550,750);
    glVertex2f(580,750);
    glEnd();

    glBegin(GL_LINES); //LINE ON TOWER 1
    glColor3f(0.0,0.0,0.0);
    glVertex2f(470,650);
    glVertex2f(500,650);
    glEnd();

    glBegin(GL_POLYGON); // SEMICIRCLE OF THE BUILDING
    for (int i =0; i < 180;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.87,0.87,0.87);
        glVertex2f(730+100*cos(theta),514+100*sin(theta));
    }
    glEnd();
{//Red tower extreme left to the building
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(10,150);
    glVertex2f(10,350);
    glVertex2f(60,350);
    glVertex2f(60,150);
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.0,0.0);
        glVertex2f(35+25*cos(theta),350+25*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.87,0.87,0.87);
    glVertex2f(10,350);
    glVertex2f(60,350);
    glVertex2f(60,330);
    glVertex2f(10,330);
    glEnd();
}
{//Red tower right to the building
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(850,150);
    glVertex2f(850,350);
    glVertex2f(980,350);
    glVertex2f(980,150);
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.0,0.0);
        glVertex2f(915+65*cos(theta),349+65*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.87,0.87,0.87);
    glVertex2f(850,350);
    glVertex2f(980,350);
    glVertex2f(980,330);
    glVertex2f(850,330);
    glEnd();
}
{
    //Red tower left to the building
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(80,150);
    glVertex2f(80,470);
    glVertex2f(170,470);
    glVertex2f(230,150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.87,0.87,0.87);
    glVertex2f(80,450);
    glVertex2f(80,430);
    glVertex2f(178,430);
    glVertex2f(174,450);
    glEnd();
}
{
    //DANGER SIGN 1(LEFT)
    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,1.0,0.0);
        glVertex2f(134+35*cos(theta),350+35*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.0,0.0);
        glVertex2f(134+31*cos(theta),350+30*sin(theta));
    }
    glEnd();

 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(108,348);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'D');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(118,348);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'A');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(128,348);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'N');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(138,348);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'G');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(148,348);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'E');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(158,348);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'R');
}
{
    //DANGER SIGN 2 (RIGHT)
 glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,1.0,0.0);
        glVertex2f(917+35*cos(theta),275+35*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.0,0.0);
        glVertex2f(917+31*cos(theta),275+30*sin(theta));
    }
    glEnd();

 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(889,273);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'D');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(899,273);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'A');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(909,273);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'N');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(919,273);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'G');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(929,273);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'E');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(939,273);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'R');
}

{//BUSHES
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(875+100*cos(theta),115+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(975+100*cos(theta),115+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glVertex2f(65+100*cos(theta),145+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glVertex2f(125+100*cos(theta),125+100*sin(theta));
    }
    glEnd();
}

glBegin(GL_POLYGON);
    glColor3f(0.8,0.8,0.8); //TOWER 1
    glVertex2f(315,590);
    glVertex2f(315,890);
    glVertex2f(350,890);
    glVertex2f(350,590);
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++) // A Semicircle of the Tower 1
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.8,0.8,0.8);
        glVertex2f(332.6+17.5*cos(theta),890+17.5*sin(theta));
    }
    glEnd();
{//RED STRIPS
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(315,850);
    glVertex2f(315,878);
    glVertex2f(350,878);
    glVertex2f(350,850);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(315,800);
    glVertex2f(315,830);
    glVertex2f(350,830);
    glVertex2f(350,800);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(315,748);
    glVertex2f(315,778);
    glVertex2f(350,778);
    glVertex2f(350,748);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(315,698);
    glVertex2f(315,726);
    glVertex2f(350,726);
    glVertex2f(350,698);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(315,648);
    glVertex2f(315,676);
    glVertex2f(350,676);
    glVertex2f(350,648);
    glEnd();
}
{
    //orange FIRE
    glBegin(GL_POLYGON);   // 1
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(o1+100*cos(theta),150+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 2
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(o2+100*cos(theta),250+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 3
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(o3+100*cos(theta),150+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);   // 4
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(o4+100*cos(theta),150+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 5
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(o5+100*cos(theta),250+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 6
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(o6+100*cos(theta),150+100*sin(theta));
    }
    glEnd();

    //yellow fire
    glBegin(GL_POLYGON);  // 1
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(p1+60*cos(theta),155+60*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 2
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(p2+96*cos(theta),240+96*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);  // 3
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(p3+65*cos(theta),175+65*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON); // 4
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(p4+96*cos(theta),200+96*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 5
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(p5+96*cos(theta),246+96*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);  // 6
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(p6+65*cos(theta),165+65*sin(theta));
    }
    glEnd();

}

    glBegin(GL_POLYGON); //FIELD LAYER 1
    glColor3f(0.21,0.98,0.11);
    glVertex2f(0,0);
    glVertex2f(0,100);
    glVertex2f(1000,100);
    glVertex2f(1000,0);
    glEnd();

    glBegin(GL_POLYGON); //FIELD LAYER 2
    glColor3f(0.54,1.0,0.29);
    glVertex2f(0,100);
    glVertex2f(0,150);
    glVertex2f(1000,150);
    glVertex2f(1000,100);
    glEnd();

    {
        //FIRE TRUCK
        glBegin(GL_POLYGON); //BODY
        glColor3f(0.86,0.07,0.23);
        glVertex2f(750,60);
        glVertex2f(750,140);
        glVertex2f(850,140);
        glVertex2f(850,60);
        glEnd();

        glBegin(GL_POLYGON); //FRONT
        glColor3f(0.86,0.07,0.23);
        glVertex2f(750,60);
        glVertex2f(750,200);
        glVertex2f(700,200);
        glVertex2f(680,120);
        glVertex2f(680,60);
        glEnd();

        glBegin(GL_POLYGON); //WINDOW
        glColor3f(0.9,1.0,1.0);
        glVertex2f(745,130);
        glVertex2f(745,190);
        glVertex2f(702,190);
        glVertex2f(687,130);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0,0.0,0.0);
        glVertex2f(750,60);
        glVertex2f(750,140);
        glEnd();

        glBegin(GL_POLYGON);  // TIRE 1
        for (int i =0; i < 360;i++)
        {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.0,0.0);
        glVertex2f(718+15*cos(theta),60+20*sin(theta));
        }
        glEnd();

        glBegin(GL_POLYGON);  // TIRE 2
        for (int i =0; i < 360;i++)
        {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.0,0.0);
        glVertex2f(810+15*cos(theta),60+20*sin(theta));
        }
        glEnd();

        glColor3f(0.0,0.0,0.0);
        glRasterPos2i(782,115);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'F');
        glColor3f(0.0,0.0,0.0);
        glRasterPos2i(792,115);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'I');
        glColor3f(0.0,0.0,0.0);
        glRasterPos2i(802,115);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'R');
        glColor3f(0.0,0.0,0.0);
        glRasterPos2i(812,115);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'E');
        glColor3f(0.0,0.0,0.0);
        glRasterPos2i(777,90);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'T');
        glColor3f(0.0,0.0,0.0);
        glRasterPos2i(787,90);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'R');
        glColor3f(0.0,0.0,0.0);
        glRasterPos2i(797,90);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'U');
        glColor3f(0.0,0.0,0.0);
        glRasterPos2i(807,90);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'C');
        glColor3f(0.0,0.0,0.0);
        glRasterPos2i(817,90);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'K');

        glBegin(GL_POLYGON); //HOSEPIPE 1
        glColor3f(0.0,0.0,0.0);
        glVertex2f(850,70);
        glVertex2f(850,80);
        glVertex2f(900,80);
        glVertex2f(900,70);
        glEnd();

        glBegin(GL_POLYGON); //HOSEPIPE 2
        glColor3f(0.0,0.0,0.0);
        glVertex2f(900,70);
        glVertex2f(895,70);
        glVertex2f(895,20);
        glVertex2f(900,20);
        glEnd();

        glBegin(GL_POLYGON); //HOSEPIPE 3
        glColor3f(0.0,0.0,0.0);
        glVertex2f(895,20);
        glVertex2f(895,30);
        glVertex2f(300,30);
        glVertex2f(300,20);
        glEnd();

        glBegin(GL_POLYGON); //HOSEPIPE 4
        glColor3f(0.0,0.0,0.0);
        glVertex2f(600,30);
        glVertex2f(595,30);
        glVertex2f(585,80);
        glVertex2f(589,80);
        glEnd();

        glBegin(GL_POLYGON);//HOSEPIPE 5
        glColor3f(0.0,0.0,0.0);
        glVertex2f(300,30);
        glVertex2f(305,30);
        glVertex2f(310,80);
        glVertex2f(305,80);
        glEnd();

        glBegin(GL_POLYGON); //WATER(LEFT)
        glColor3f(0.61,0.72,0.85);
        glVertex2f(305,80);
        glVertex2f(310,80);
        glVertex2f(w12,w21);
        glVertex2f(w11,w22);
        glEnd();

        glBegin(GL_POLYGON); //WATER(RIGHT)
        glColor3f(0.61,0.72,0.85);
        glVertex2f(589,80);
        glVertex2f(585,80);
        glVertex2f(w31,w42);
        glVertex2f(w32,w41);
        glEnd();
}
{
    //Stick men
        glBegin(GL_POLYGON);  // HEAD 1
        for (int i =0; i < 360;i++)
        {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.0,0.0);
        glVertex2f(285+11*cos(theta),90+16*sin(theta));
        }
        glEnd();

        glBegin(GL_LINES); //BODY 1
        glColor3f(0.0,0.0,0.0);
        glVertex2f(285,90);
        glVertex2f(285,20);
        glEnd();

        glBegin(GL_LINES); //HAND 1
        glColor3f(0.0,0.0,0.0);
        glVertex2f(285,70);
        glVertex2f(268,50);
        glEnd();

        glBegin(GL_LINES); //HAND 2
        glColor3f(0.0,0.0,0.0);
        glVertex2f(285,70);
        glVertex2f(305,50);
        glEnd();

        glBegin(GL_LINES); //LEG 1
        glColor3f(0.0,0.0,0.0);
        glVertex2f(285,30);
        glVertex2f(268,10);
        glEnd();

        glBegin(GL_LINES); //LEG 2
        glColor3f(0.0,0.0,0.0);
        glVertex2f(285,30);
        glVertex2f(300,10);
        glEnd();

        glBegin(GL_POLYGON);  // HEAD 1
        for (int i =0; i < 360;i++)
        {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.0,0.0);
        glVertex2f(610+11*cos(theta),90+16*sin(theta));
        }
        glEnd();

        glBegin(GL_LINES); //BODY 1
        glColor3f(0.0,0.0,0.0);
        glVertex2f(610,90);
        glVertex2f(610,20);
        glEnd();

        glBegin(GL_LINES); //HAND 1
        glColor3f(0.0,0.0,0.0);
        glVertex2f(610,70);
        glVertex2f(595,40);
        glEnd();

        glBegin(GL_LINES); //HAND 2
        glColor3f(0.0,0.0,0.0);
        glVertex2f(610,70);
        glVertex2f(625,50);
        glEnd();

        glBegin(GL_LINES); //LEG 1
        glColor3f(0.0,0.0,0.0);
        glVertex2f(610,30);
        glVertex2f(600,10);
        glEnd();

        glBegin(GL_LINES); //LEG 2
        glColor3f(0.0,0.0,0.0);
        glVertex2f(610,30);
        glVertex2f(620,10);
        glEnd();


}
    glutSwapBuffers();
}
void scene5()
{
    glClearColor(1.0, 0.79, 0.56, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    {//STATES POLYGON

    float theta;

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.98,0.73);
        glVertex2f(880+400*cos(theta),900+400*sin(theta));
    }
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    for (int i =0; i < 360;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glVertex2f(880+400*cos(theta),900+400*sin(theta));
    }
    glEnd();




    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.98,0.73);
        glVertex2f(320+200*cos(theta),998+200*sin(theta));
    }
    glEnd();

    glBegin(GL_LINE_LOOP);
    for (int i =0; i < 360;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.0,0.0);
        glVertex2f(320+200*cos(theta),998+200*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.98,0.73);
        glVertex2f(29+150*cos(theta),600+500*sin(theta));
    }
    glEnd();

    glBegin(GL_LINE_LOOP);
    for (int i =0; i < 360;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.0,0.0);
        glVertex2f(29+150*cos(theta),600+500*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.98,0.73);
        glVertex2f(220+350*cos(theta),250*sin(theta));
    }
    glEnd();

    glBegin(GL_LINE_LOOP);
    for (int i =0; i < 360;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.0,0.0);
        glVertex2f(220+350*cos(theta),250*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.98,0.73);
        glVertex2f(990+200*cos(theta),50+200*sin(theta));
    }
    glEnd();

      glBegin(GL_LINE_LOOP);
    for (int i =0; i < 360;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.0,0.0);
        glVertex2f(990+200*cos(theta),50+200*sin(theta));
    }
    glEnd();


    }

    {
        //STATES NAMES
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(710,750);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'R');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(730,750);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'U');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(750,750);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'S');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(770,750);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'S');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(790,750);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'I');
 glRasterPos2i(810,750);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'A');

 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(310,500);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'U');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(330,500);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'K');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(350,500);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'R');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(370,500);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'A');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(390,500);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'I');
 glRasterPos2i(400,500);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'N');
 glRasterPos2i(415,500);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'E');

 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(230,900);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'B');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(250,900);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'E');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(270,900);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'L');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(290,900);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'A');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(310,900);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'R');
 glRasterPos2i(330,900);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'U');
 glRasterPos2i(350,900);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'S');

 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(230,100);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'R');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(250,100);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'O');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(270,100);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'M');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(290,100);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'A');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(310,100);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'N');
 glRasterPos2i(330,100);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'I');
 glRasterPos2i(340,100);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'A');

  glColor3f(0.2,0.2,0.2);
 glRasterPos2i(10,500);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'P');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(30,500);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'O');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(50,500);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'L');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(70,500);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'A');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(90,500);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'N');
 glRasterPos2i(110,500);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'D');

glColor3f(0.2,0.2,0.2);
 glRasterPos2i(840,100);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'C');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(860,100);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'R');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(880,100);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'I');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(890,100);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'M');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(910,100);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'E');
 glRasterPos2i(925,100);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'A');

glPointSize(20);  //pointer
 glBegin(GL_POINTS);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(450,800);
 glEnd();


glPointSize(10);  //pointer
 glBegin(GL_POINTS);
 glColor3f(0.0,0.0,0.0);
 glVertex2f(450,800);
 glEnd();

 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(343,750);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'C');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(358,750);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'H');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(372,750);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'E');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(385,750);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'R');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(400,750);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'N');
 glRasterPos2i(415,750);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'O');
 glRasterPos2i(430,750);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'B');
 glRasterPos2i(445,750);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'Y');
 glRasterPos2i(460,750);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'L');

}

{
    float theta=0;
    //radiation leak
    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.6,0.0);
        glVertex2f(a11+40*cos(theta),b11+40*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.6,0.0);
        glVertex2f(a12+40*cos(theta),b12+40*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.6,0.0);
        glVertex2f(a13+40*cos(theta),b13+40*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.6,0.0);
        glVertex2f(a14+40*cos(theta),b14+40*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.6,0.0);
        glVertex2f(a21+40*cos(theta),b21+40*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.6,0.0);
        glVertex2f(a22+40*cos(theta),b22+40*sin(theta));
    }
    glEnd();

      glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.6,0.0);
        glVertex2f(a23+40*cos(theta),b23+40*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.6,0.0);
        glVertex2f(a31+40*cos(theta),b31+40*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.6,0.0);
        glVertex2f(a32+40*cos(theta),b32+40*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.6,0.0);
        glVertex2f(a33+40*cos(theta),b33+40*sin(theta));
    }
    glEnd();

}


 glutSwapBuffers();
}

void scene6()
{
 glClearColor(1.0, 0.79, 0.56, 1.0);
 glClear(GL_COLOR_BUFFER_BIT);
 float theta;
 {
    //CLOUD(RIGHT)
 glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.66,0.62,0.58);
        glVertex2f(f2+60*cos(theta),900+60*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.66,0.62,0.58);
        glVertex2f(f2+40*cos(theta),900+80*sin(theta));
    }
    glEnd();
}
{
    //CLOUD(LEFT)
    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.66,0.62,0.58);
        glVertex2f(f1+60*cos(theta),900+60*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.66,0.62,0.58);
        glVertex2f(f1+40*cos(theta),900+80*sin(theta));
    }
    glEnd();
}
{//MOUNTAINS

    glBegin(GL_TRIANGLES);
    glColor3f(0.67,0.54,0.24);
    glVertex2f(0,450);
    glVertex2f(100,450);
    glVertex2f(50,700);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.67,0.54,0.24);
    glVertex2f(100,450);
    glVertex2f(150,450);
    glVertex2f(125,550);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.67,0.54,0.24);
    glVertex2f(150,450);
    glVertex2f(200,450);
    glVertex2f(175,550);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.67,0.54,0.24);
    glVertex2f(200,450);
    glVertex2f(300,450);
    glVertex2f(250,650);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.67,0.54,0.24);
    glVertex2f(300,450);
    glVertex2f(400,450);
    glVertex2f(350,700);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.67,0.54,0.24);
    glVertex2f(400,450);
    glVertex2f(500,450);
    glVertex2f(450,550);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.67,0.54,0.24);
    glVertex2f(500,450);
    glVertex2f(600,450);
    glVertex2f(550,650);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.67,0.54,0.24);
    glVertex2f(600,450);
    glVertex2f(700,450);
    glVertex2f(650,700);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.67,0.54,0.24);
    glVertex2f(700,450);
    glVertex2f(850,450);
    glVertex2f(775,650);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.67,0.54,0.24);
    glVertex2f(850,450);
    glVertex2f(900,450);
    glVertex2f(875,650);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.67,0.54,0.24);
    glVertex2f(900,450);
    glVertex2f(1000,450);
    glVertex2f(950,650);
    glEnd();
}

{//BUSHES


    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(20*cos(theta),440+20*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(35+20*cos(theta),440+20*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(70+20*cos(theta),440+20*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(105+20*cos(theta),440+20*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(220+100*cos(theta),440+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(350+50*cos(theta),440+50*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(445+50*cos(theta),440+50*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(510+20*cos(theta),440+20*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(540+20*cos(theta),440+20*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(570+50*cos(theta),440+50*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(710+100*cos(theta),440+100*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(850+50*cos(theta),440+50*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(950+50*cos(theta),440+50*sin(theta));
    }
    glEnd();
}

{
//RIVER
glBegin(GL_POLYGON);
glColor3f(0.32,0.62,0.89);
glVertex2f(0,0);
glVertex2f(0,450);
glVertex2f(1000,450);
glVertex2f(1000,0);
glEnd();
}

{
//FISHES
glBegin(GL_POLYGON);  //FISH 1
glColor3f(0.99,0.27,0.0);
glVertex2f(c11,300);
glVertex2f(c12,330);
glVertex2f(c13,300);
glVertex2f(c12,260);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.99,0.27,0.0);
glVertex2f(d11,300);
glVertex2f(d12,320);
glVertex2f(d12,270);
glEnd();

glBegin(GL_POLYGON);  //FISH 2
glColor3f(0.34,0.79,0.28);
glVertex2f(c21,300);
glVertex2f(c22,330);
glVertex2f(c23,300);
glVertex2f(c22,260);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.34,0.79,0.28);
glVertex2f(d21,300);
glVertex2f(d22,320);
glVertex2f(d22,270);
glEnd();

glBegin(GL_POLYGON);  //FISH 3
glColor3f(0.0,0.0,0.78);
glVertex2f(c11,100);
glVertex2f(c12,130);
glVertex2f(c13,100);
glVertex2f(c12,60);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0,0.0,0.78);
glVertex2f(d11,100);
glVertex2f(d12,120);
glVertex2f(d12,70);
glEnd();


glBegin(GL_LINES); //DEAD EYES
glColor3f(0.0,0.0,0.0);
glVertex2f(e11,312);
glVertex2f(e12,300);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(e14,312);
glVertex2f(e13,300);
glEnd();

glBegin(GL_LINES);  //DEAD EYES
glColor3f(0.0,0.0,0.0);
glVertex2f(e21,312);
glVertex2f(e22,300);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(e24,312);
glVertex2f(e23,300);
glEnd();

glBegin(GL_LINES);  //DEAD EYES
glColor3f(0.0,0.0,0.0);
glVertex2f(e11,112);
glVertex2f(e12,100);
glEnd();

glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(e14,112);
glVertex2f(e13,100);
glEnd();

}
{
//BUSHES ON THE OTHER SIDE OF THE RIVER
glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(710+100*cos(theta),100*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(850+50*cos(theta),50*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(950+50*cos(theta),50*sin(theta));
    }
    glEnd();
}

 glutSwapBuffers();
}

void timer1(int)
{

    glutPostRedisplay();
    glutTimerFunc(1000/300,timer1,0);

    if(x1<=410)
        x1+=0.15;
    if(x2<=430)
        x2+=0.15;
    if(x3<=450)
        x3+=0.15;
    if(x4<=470)
        x4+=0.15;
    if(x5<=490)
        x5+=0.15;
    if(x6<=510)
        x6+=0.15;
    if(x7<=530)
        x7+=0.15;
    if(x8<=550)
        x8+=0.15;
    if(x9<=570)
        x9+=0.15;

}

void timer2(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/1000,timer2,0);

    if(r11<=239)
        r11+=0.15;
    if(r12<=249)
        r12+=0.15;
    if(r13<=259)
        r13+=0.15;
    if(r14<=269)
        r14+=0.15;
    if(r15<=281)
        r15+=0.15;
    if(r16<=289)
        r16+=0.15;
    if(r17<=302)
        r17+=0.15;
    if(r18<=314)
        r18+=0.15;

    if(r21<=140)
        r21+=0.15;
    if(r22<=150)
        r22+=0.15;
    if(r23<=160)
        r23+=0.15;
    if(r24<=170)
        r24+=0.15;
    if(r25<=180)
        r25+=0.15;
    if(r26<=188)
        r26+=0.15;
    if(r27<=200)
        r27+=0.15;
    if(r28<=212)
        r28+=0.15;

    if(r31>=218)
        r31-=0.15;
    if(r32>=228)
        r32-=0.15;
    if(r33>=238)
        r33-=0.15;
    if(r34>=248)
        r34-=0.15;
    if(r35>=258)
        r35-=0.15;
    if(r36>=268)
        r36-=0.15;
    if(r37>=281)
        r37-=0.15;
    if(r38>=292)
        r38-=0.15;

    if(r41>=557)
        r41-=0.15;
    if(r42>=567)
        r42-=0.15;
    if(r43>=577)
        r43-=0.15;
    if(r44>=587)
        r44-=0.15;
    if(r45>=597)
        r45-=0.15;
    if(r46>=607)
        r46-=0.15;
    if(r47>=619)
        r47-=0.15;
    if(r48>=631)
        r48-=0.15;
}


void timer3(int)
{
   glutPostRedisplay();
   glutTimerFunc(1000/1000,timer3,0);

   if(y11<=515)
    y11+=0.128;
   if(y2<=815)
    y2+=0.133;
   if(y3<=815)
    y3+=0.133;
   if(y41<=515)
    y41+=0.128;

    if(y21<=820)
        y21+=0.2068;
    if(y22<=845)
        y22+=0.2068;
    if(y23<=820)
        y23+=0.2068;
    if(y24<=910)
        y24+=0.2068;
    if(y25<=950)
        y25+=0.2068;
    if(y26<=910)
        y26+=0.2068;
    if(y27<=860)
        y27+=0.2068;
    if(y28<=860)
        y28+=0.2068;
    if(f4<=100)
        f4+=0.01;
    if(f3<=950)
        f3+=0.01;
}
void timer4(int)
{
    glutTimerFunc(1000/100,timer4,0);
    glutPostRedisplay();

    if(f5<=550)
        f5+=0.2;
    if(f6<=1500)
        f6+=0.2;

    if(s11>=400)
        s11-=0.2;
    if(s21<=700)
        s21+=0.2;
    if(s12>=350)
        s12-=0.2;
    if(s22<=790)
        s22+=0.2;
    if(s13>=360)
        s13-=0.2;
    if(s23<=790)
        s23+=0.2;
    if(s14>=300)
        s14-=0.2;
    if(s24<=880)
        s24+=0.2;
    if(s15>=310)
        s15-=0.2;
    if(s25<=880)
        s25+=0.2;
    if(s16>=250)
        s16-=0.2;
    if(s26<=970)
        s26+=0.2;

    if(s31>=640)
        s31-=0.2;
    if(s41<=700)
        s41+=0.2;
    if(s32>=590)
        s32-=0.2;
    if(s42<=790)
        s42+=0.2;
    if(s33>=610)
        s33-=0.2;
    if(s43<=790)
        s43+=0.2;
    if(s34>=550)
        s34-=0.2;
    if(s44<=880)
        s44+=0.2;
    if(s35>=550)
        s35-=0.2;
    if(s45<=880)
        s45+=0.2;
    if(s36>=490)
        s36-=0.2;
    if(s46<=970)
        s46+=0.2;

    switch(state)
    {
        case 1: if(w11>=220)
                    w11-=0.58;
                if(w22>=180)
                    w22-=0.58;
                if(w12>=400)
                    w12-=0.58;
                if(w21<=220)
                    w21+=0.58;

                if(w31>=440)
                    w31-=0.58;
                if(w42>=180)
                    w42-=0.58;
                if(w32>=630)
                    w32-=0.58;
                if(w41<=220)
                    w41+=0.58;

                if(o1>=300)
                    o1-=0.15;
                if(o2>=350)
                    o2-=0.15;
                if(o3>=425)
                    o3-=0.15;
                if(o4>=525)
                    o4-=0.15;
                if(o5>=575)
                    o5-=0.15;
                if(o6>=645)
                    o6-=0.15;

                if(p1>=275)
                    p1-=0.15;
                if(p2>=350)
                    p2-=0.15;
                if(p3>=440)
                    p3-=0.15;
                if(p4>=575)
                    p4-=0.15;
                if(p5>=575)
                    p5-=0.15;
                if(p6>=665)
                    p6-=0.15;

                else
                    state=-1;
                break;
        case -1: if(w11<=240)
                    w11+=0.58;
                if(w22>=210)
                    w22-=0.58;
                if(w12<=460)
                    w12+=0.58;
                if(w21>=200)
                    w21-=0.58;

                if(w31<=500)
                    w31+=0.58;
                if(w42>=210)
                    w42-=0.58;
                if(w32<=670)
                    w32+=0.58;
                if(w41>=200)
                    w41-=0.58;

                if(o1<=365)
                    o1+=0.2;
                if(o2<=405)
                    o2+=0.2;
                if(o3<=480)
                    o3+=0.2;
                if(o4<=580)
                    o4+=0.2;
                if(o5<=630)
                    o5+=0.2;
                if(o6<=690)
                    o6+=0.2;

                 if(p1<=310)
                    p1+=0.15;
                if(p2<=395)
                    p2+=0.15;
                if(p3<=485)
                    p3+=0.15;
                if(p4<=620)
                    p4+=0.15;
                if(p5<=620)
                    p5+=0.15;
                if(p6<=710)
                    p6+=0.15;

                else
                    state=1;
                break;

    }
}

void timer5(int)
{
  glutPostRedisplay();
  glutTimerFunc(1000/80,timer5,0);
  if(a11<=900)  // Radiation goes to Russia
    a11+=0.15;
  if(b11<=900)
    b11+=0.15;

  if(a12<=900)
    a12+=0.15;
  if(b12<=890)
    b12+=0.15;

  if(a13<=900)
    a13+=0.15;
  if(b13<=850)
    b13+=0.15;

  if(a14<=950)
    a14+=0.15;
  if(b14<=850)
    b14+=0.15;

  if(a21>=300)  //Radiation goes to Belarus
    a21-=0.15;
  if(b21<=770)
    b21+=0.15;

  if(a22>=280)
    a22-=0.15;
  if(b22<=720)
    b22+=0.15;

  if(a23>=300)
    a23-=0.15;
  if(b23<=720)
    b23+=0.15;

  if(a31>=100)  //Radjation goes to Romania
    a31-=0.15;
  if(b31>=170)
    b31-=0.15;

  if(a32>=180)
    a32-=0.15;
  if(b32>=120)
    b32-=0.15;

  if(a33>=100)
    a33-=0.15;
  if(b33>=120)
    b33-=0.15;

}

void timer6(int)
{
    glutTimerFunc(1000/100,timer6,0);
    glutPostRedisplay();

    if(c11>=100)
        c11-=0.15;
    if(c12>=130)
        c12-=0.15;
    if(c13>=160)
        c13-=0.15;
    if(d11>=160)
        d11-=0.15;
    if(d12>=180)
        d12-=0.15;
    if(e11>=117)
        e11-=0.15;
    if(e12>=125)
        e12-=0.15;
    if(e13>=117)
        e13-=0.15;
    if(e14>=125)
        e14-=0.15;

    if(c21>=400)
        c21-=0.2;
    if(c22>=430)
        c22-=0.2;
    if(c23>=460)
        c23-=0.2;
    if(d21>=460)
        d21-=0.2;
    if(d22>=480)
        d22-=0.2;
    if(e21>=417)
        e21-=0.2;
    if(e22>=425)
        e22-=0.2;
    if(e23>=417)
        e23-=0.2;
    if(e24>=425)
        e24-=0.2;

    if(f1<=200)
        f1+=0.15;
    if(f2<=1000)
        f2+=0.15;
}

void keys(unsigned char key, int x, int y)
{
    if (key=='x' && count==0)
    {
        count++;
        glutDisplayFunc(scene1);
        glutTimerFunc(0,timer1,0);

    }

    else if (key=='x' && count==1)
    {
        count++;
        glutDisplayFunc(scene2);
        glutTimerFunc(0,timer2,0);

    }
    else if (key=='x' && count==2)
    {
        count++;
        glutDisplayFunc(scene3);
        glutTimerFunc(0,timer3,0);

    }
    else if (key=='x' && count==3)
    {
        count++;
        glutDisplayFunc(scene4);
        glutTimerFunc(0,timer4,0);
    }
    else if (key=='x' && count==4)
    {
        count++;
        glutDisplayFunc(scene5);
        glutTimerFunc(0,timer5,0);
    }
    else if (key=='x' && count==5)
    {
        count++;
        glutDisplayFunc(scene6);
        glutTimerFunc(0,timer6,0);
    }
    else if (key=='x')
    {
        count++;
        glutDisplayFunc(enddisplay);
    }

    if(key=='y')
        exit(0);
}

void welcomedisplay()
{
    glClearColor(0.2, 0.2, 0.2, 1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,0,0);

    glRasterPos2f(450,700);
    char msg1[]="Chernobyl";
    for(int i=0;i<strlen(msg1);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg1[i]);

    glRasterPos2f(200,600);
    char msg2[]="Submitted By :";
    for(int i=0;i<strlen(msg2);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg2[i]);

    glRasterPos2f(220,500);
    char msg3[]="1) Wilton Santhosh Dsouza";
    for(int i=0;i<strlen(msg3);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg3[i]);

    glRasterPos2f(220,400);
    char msg4[]="2) Vinsten Leon Dsouza";
    for(int i=0;i<strlen(msg4);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg4[i]);

    glRasterPos2f(220,300);
    char msg5[]="3) Winston Sebastian Pais";
    for(int i=0;i<strlen(msg5);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg5[i]);


    glColor3f(1,1,1);
    glRasterPos2f(420,170);
    char msg6[]="Press X to start";
    for(int i=0;i<strlen(msg6);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg6[i]);

    glColor3f(1,1,1);
    glRasterPos2f(410,50);
    char msg7[]="Press X to go to the next scenes";
    for(int i=0;i<strlen(msg7);i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,msg7[i]);

    glColor3f(1,1,1);
    glRasterPos2f(423,120);
    char msg8[]="Press Y to Exit";
    for(int i=0;i<strlen(msg8);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg8[i]);


    glutSwapBuffers();

}

void enddisplay()
{
    glClearColor(0.2, 0.2, 0.2, 1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,0,0);

    glRasterPos2f(450,500);
    char msg9[]="The End";
    for(int i=0;i<strlen(msg9);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg9[i]);

    glColor3f(1,1,1);
    glRasterPos2f(425,120);
    char msg10[]="Press Y to Exit";
    for(int i=0;i<strlen(msg10);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg10[i]);

    glutSwapBuffers();

}

int main (int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DOUBLE);

    // giving window size in X- and Y- direction
    glutInitWindowSize(1366,648);
    glutInitWindowPosition(0,0);

    // Giving name to window

    glutCreateWindow("Chernobyl");
    glutFullScreen();
    myInit();
    glutKeyboardFunc(keys);
    glutDisplayFunc(welcomedisplay);
    glutTimerFunc(0,timer1,0);

    glutMainLoop();
}
