#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>



void circle(float cx, float cy, float r, int num_segments)
{

    glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i < num_segments; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);//get current angle

        float x = r * cosf(theta);//calculate x
        float y = r * sinf(theta);//calculate y
        glVertex2f(x + cx, y + cy);//output vertex
    }
    glEnd();
    glFlush();
}

void tree1(int ax,int ay,int rad)
{
    glBegin(GL_QUADS);
    glColor3ub(15, 10, 6);
    glVertex3f(ax,ay,0);
    glVertex3f(ax+20,ay,0);
    glVertex3f(ax+20,ay+100,0);
    glVertex3f(ax,ay+100,0);

    glEnd();

    glColor3ub(10, 33, 9);
    circle(ax+10,ay+130,rad+10,500);
    circle(ax+10-50,ay+130-15,rad,100);
    circle(ax+10+50,ay+130-15,rad,2000);

}
void tree2(int x,int y){
    glBegin(GL_QUADS);
    glColor3ub(15, 10, 6);
    glVertex3f(x,y,0);
    glVertex3f(x+20,y,0);
    glVertex3f(x+20,y+100,0);
    glVertex3f(x,y+100,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(10, 33, 9);

    glVertex3f(x-80,y+100,0);
    glVertex3f(x+100,y+100,0);
    glVertex3f(((x-80)+(x+100))/2,y+150,0);

    glVertex3f(x-60,y+130,0);
    glVertex3f(x+80,y+130,0);
    glVertex3f(((x-60)+(x+80))/2,y+180,0);
    glEnd();
}
void cloud(int x, int y,int rad){
    glColor3ub(255, 255, 255);
    circle(x,y,rad,500);
    circle(x-50,y-15,rad-10,100);
    circle(x+50,y-15,rad-10,2000);
}
void sun(void)
{
    glColor3ub(250,253,15);
    circle(300,1000,90,2000);
}

void road(void)
{
    glBegin(GL_QUADS);
    glColor3ub(106,108,109);

    glVertex3f(0,30,0);
    glVertex3f(1600,30,0);
    glVertex3f(1600,260,0);
    glVertex3f(0,260,0);


    ///Road Divider
    int dvx1 = 20, dvy1 = 145,dvx2 = 90, dvy3 = 130;
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);

    for(dvx1,dvx2; dvx1 <1600; dvx1+= 200,dvx2+= 200)
    {
        glVertex3f(dvx1,dvy1,0);
        glVertex3f(dvx2,dvy1,0);
        glVertex3f(dvx2,dvy3,0);
        glVertex3f(dvx1,dvy3,0);
    }
    ///Road Divider End

    glEnd();
}
void apartment(void)
{
    ///Hotel Building Squares

    glBegin(GL_QUADS);
    glColor3ub(69, 52, 53);

    glVertex3f(0,450,0);
    glVertex3f(500,450,0);
    glVertex3f(500,750,0);
    glVertex3f(0,750,0);

    glColor3ub(32, 50, 61);

    glVertex3f(0,750,0);
    glVertex3f(510,750,0);
    glVertex3f(510,770,0);
    glVertex3f(0,770,0);

    glColor3ub(33, 36, 38);

    glVertex3f(0,770,0);
    glVertex3f(525,770,0);
    glVertex3f(430,840,0);
    glVertex3f(0,840,0);


    glColor3ub(28, 35, 54);

    glVertex3f(0,430,0);
    glVertex3f(500,430,0);
    glVertex3f(500,450,0);
    glVertex3f(0,450,0);

    ///building road
    glColor3ub(151, 163, 194);

    glVertex3f(180,260,0);
    glVertex3f(300,260,0);
    glVertex3f(275,430,0);
    glVertex3f(205,430,0);

    ///Windows left
    glColor3ub(0,0,0);

    glVertex3f(0,480,0);
    glVertex3f(80,480,0);
    glVertex3f(80,540,0);
    glVertex3f(0,540,0);

    glColor3ub(0,0,0);

    glVertex3f(0,580,0);
    glVertex3f(80,580,0);
    glVertex3f(80,640,0);
    glVertex3f(0,640,0);

    glColor3ub(0,0,0);

    glVertex3f(0,680,0);
    glVertex3f(80,680,0);
    glVertex3f(80,740,0);
    glVertex3f(0,740,0);

    glColor3ub(0,0,0);

    glVertex3f(100,480,0);
    glVertex3f(180,480,0);
    glVertex3f(180,540,0);
    glVertex3f(100,540,0);

    glColor3ub(0,0,0);

    glVertex3f(100,580,0);
    glVertex3f(180,580,0);
    glVertex3f(180,640,0);
    glVertex3f(100,640,0);

    glColor3ub(0,0,0);

    glVertex3f(100,680,0);
    glVertex3f(180,680,0);
    glVertex3f(180,740,0);
    glVertex3f(100,740,0);

    ///Windows right
    glColor3ub(0,0,0);

    glVertex3f(300,480,0);
    glVertex3f(380,480,0);
    glVertex3f(380,540,0);
    glVertex3f(300,540,0);

    glColor3ub(0,0,0);

    glVertex3f(300,580,0);
    glVertex3f(380,580,0);
    glVertex3f(380,640,0);
    glVertex3f(300,640,0);

    glColor3ub(0,0,0);

    glVertex3f(300,680,0);
    glVertex3f(380,680,0);
    glVertex3f(380,740,0);
    glVertex3f(300,740,0);

    glColor3ub(0,0,0);

    glVertex3f(400,480,0);
    glVertex3f(480,480,0);
    glVertex3f(480,540,0);
    glVertex3f(400,540,0);

    glColor3ub(0,0,0);

    glVertex3f(400,580,0);
    glVertex3f(480,580,0);
    glVertex3f(480,640,0);
    glVertex3f(400,640,0);

    glColor3ub(0,0,0);

    glVertex3f(400,680,0);
    glVertex3f(480,680,0);
    glVertex3f(480,740,0);
    glVertex3f(400,740,0);

    ///middle
    glColor3ub(23, 10, 14);

    glVertex3f(210,460,0);
    glVertex3f(270,460,0);
    glVertex3f(270,740,0);
    glVertex3f(210,740,0);

    glEnd();

    ///Hotel Building roof Triangles
    glBegin(GL_TRIANGLES);
    glColor3ub(43, 20, 22);

    glVertex3f(60,800,0);
    glVertex3f(200,800,0);
    glVertex3f(130,860,0);

    glColor3ub(43, 20, 22);

    glVertex3f(260,800,0);
    glVertex3f(400,800,0);
    glVertex3f(330,860,0);


    glEnd();

    glBegin(GL_LINE);

    glColor3ub(0,0,0);

}

void building1(void){
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);

    glVertex3f(900,480,0);
    glVertex3f(1150,480,0);
    glVertex3f(1150,700,0);
    glVertex3f(900,700,0);

    glEnd();


}
void building2(void){
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);

    glVertex3f(1050,350,0);
    glVertex3f(1280,350,0);
    glVertex3f(1280,550,0);
    glVertex3f(1050,550,0);

    glEnd();


}
void building3(void){
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);

    glVertex3f(1200,480,0);
    glVertex3f(1400,480,0);
    glVertex3f(1400,800,0);
    glVertex3f(1200,800,0);

    glEnd();
}
void lighthouse(void){
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);

    glVertex3f(1450,500,0);
    glVertex3f(1550,500,0);
    glVertex3f(1550,900,0);
    glVertex3f(1450,900,0);

    glEnd();
}
void surface(void)
{
    glBegin(GL_QUADS);
    glColor3ub(48, 102, 38);

    glVertex3f(0,260,0);
    glVertex3f(1600,260,0);
    glVertex3f(1600,620,0);
    glVertex3f(0,620,0);

    glEnd();
}
void sky(void)
{
    glBegin(GL_QUADS);
    glColor3ub(34, 154, 227);

    glVertex3f(0,620,0);
    glVertex3f(1600,620,0);
    glVertex3f(1600,1200,0);
    glVertex3f(0,1200,0);

    glEnd();
}

void trees(void){
    tree1(80,280,50);
    tree1(450,370,50);
    tree1(510,530,40);

    tree2(650,650);

}

void clouds(void){
    cloud(480,1100,50);
    cloud(780,980,50);
    cloud(1100,1150,50);
}
void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);


    road();
    surface();
    sky();
    apartment();
    building1();
    building3();
    building2();
    lighthouse();
    sun();
    clouds();
    trees();
    glFlush ();
}


void init (void)
{
    /* select clearing (background) color */
    glClearColor (255,255, 255, 0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();


    glOrtho(0, 1600, 0, 1200, -10.0, 10.0);
}


int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);


    glutInitWindowSize (800, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Rima");
    init ();
    glutDisplayFunc(display);



    glutMainLoop();


    return 0;
}
