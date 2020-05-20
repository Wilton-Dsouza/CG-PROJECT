#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
float c11=300,c12=330,c13=360,d11=360,d12=380,e11=317,e12=325,e13=317,e14=325;
float c21=700,c22=730,c23=760,d21=760,d22=780,e21=717,e22=725,e23=717,e24=725;
float f1=0,f2=800;
void timer(int);
void myInit (void)
{
    // making background color black as first
    // 3 arguments all are 0.0
    glClearColor(0.99, 0.7, 0.32, 1.0);

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
void timer(int)
{
    glutTimerFunc(1000/100,timer,0);
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
    if(d21>=460);
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
int main (int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DOUBLE);

    // giving window size in X- and Y- direction
    glutInitWindowSize(1366,648);
    glutInitWindowPosition(0,0);

    // Giving name to window
    glutCreateWindow("Scene 6");
    myInit();

    glutDisplayFunc(display);
    glutTimerFunc(0,timer,0);
    glutMainLoop();
}
