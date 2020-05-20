#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
void timer(int);
float a11=500,a12=470,a13=510,a14=500;
float b11=800,b12=850,b13=850,b14=880;
float a21=500,a22=470,a23=490;
float b21=500,b22=550,b23=560;
float a31=190,a32=160,a33=180;
float b31=300,b32=350,b33=360;
void myInit (void)
{
    // making background color black as first
    // 3 arguments all are 0.0
    glClearColor(1.0, 0.79, 0.56, 1.0);

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

void timer(int)
{
  glutPostRedisplay();
  glutTimerFunc(1000/80,timer,0);
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
int main (int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DOUBLE);

    // giving window size in X- and Y- direction
    glutInitWindowSize(1366,648);
    glutInitWindowPosition(0,0);

    // Giving name to window
    glutCreateWindow("Scene 5");
    myInit();

    glutDisplayFunc(display);
    glutTimerFunc(0,timer,0);
    glutMainLoop();
}
