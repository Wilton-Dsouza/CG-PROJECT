#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857

float r11,r12,r13,r14,r15,r16,r17,r18=0;
float r21,r22,r23,r24,r25,r26,r27,r28=0;
float r31=1000,r32=1000,r33=1000,r34=1000,r35=1000,r36=1000,r37=1000,r38=1000;
float r41=1000,r42=1000,r43=1000,r44=1000,r45=1000,r46=1000,r47=1000,r48=1000;
void timer(int);
void myInit (void)
{
    // making background color black as first
    // 3 arguments all are 0.0
    glClearColor(1.0, 1.0, 0.79, 1.0);

    // making picture color green (in RGB mode), as middle argument is 1.0

    // breadth of picture boundary is 1 pixel
    glPointSize(1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    // setting window dimension in X- and Y- direction
    gluOrtho2D(0, 1000, 0, 1000);
}

void display()
{
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

void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/1000,timer,0);

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

int main (int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DOUBLE);

    // giving window size in X- and Y- direction
    glutInitWindowSize(1366,648);
    glutInitWindowPosition(0,0);

    // Giving name to window
    glutCreateWindow("Scene 2");
    myInit();

    glutDisplayFunc(display);
    glutTimerFunc(0,timer,0);
    glutMainLoop();
}
