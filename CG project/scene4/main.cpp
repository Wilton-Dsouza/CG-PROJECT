#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
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
void timer(int);
// function to initialize
void myInit (void)
{
    // making background color black as first
    // 3 arguments all are 0.0
    glClearColor(0.90, 0.95, 0.97, 1.0);

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

void timer(int)
{
    glutTimerFunc(1000/100,timer,0);
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

int main (int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DOUBLE);

    // giving window size in X- and Y- direction
    glutInitWindowSize(1366,648);
    glutInitWindowPosition(0,0);

    // Giving name to window
    glutCreateWindow("Scene 4");
    myInit();

    glutDisplayFunc(display);
    glutTimerFunc(0,timer,0);
    glutMainLoop();
}
