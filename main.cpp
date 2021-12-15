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
void tree2(int x,int y)
{
    glBegin(GL_QUADS);
    glColor3ub(15, 10, 6);
    glVertex3f(x,y,0);
    glVertex3f(x+20,y,0);
    glVertex3f(x+20,y+100,0);
    glVertex3f(x,y+100,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(15, 252, 3);

    glVertex3f(x-80,y+100,0);
    glVertex3f(x+100,y+100,0);
    glVertex3f(((x-80)+(x+100))/2,y+150,0);

    glVertex3f(x-60,y+130,0);
    glVertex3f(x+80,y+130,0);
    glVertex3f(((x-60)+(x+80))/2,y+180,0);

    glVertex3f(x-55,y+150,0);
    glVertex3f(x+75,y+150,0);
    glVertex3f(((x-55)+(x+75))/2,y+215,0);
    glEnd();
}
void tree2Night(int x,int y)
{
    glBegin(GL_QUADS);
    glColor3ub(15, 10, 6);
    glVertex3f(x,y,0);
    glVertex3f(x+20,y,0);
    glVertex3f(x+20,y+100,0);
    glVertex3f(x,y+100,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(11, 64, 6);

    glVertex3f(x-80,y+100,0);
    glVertex3f(x+100,y+100,0);
    glVertex3f(((x-80)+(x+100))/2,y+150,0);

    glVertex3f(x-60,y+130,0);
    glVertex3f(x+80,y+130,0);
    glVertex3f(((x-60)+(x+80))/2,y+180,0);

    glVertex3f(x-55,y+150,0);
    glVertex3f(x+75,y+150,0);
    glVertex3f(((x-55)+(x+75))/2,y+215,0);
    glEnd();
}
void cloud(int x, int y,int rad)
{
    glColor3ub(255, 255, 255);
    circle(x,y,rad,500);
    circle(x-50,y-15,rad-10,100);
    circle(x+50,y-15,rad-10,2000);
}

void cloudNight(int x, int y,int rad)
{
    glColor3ub(99, 99, 99);
    circle(x,y,rad,500);
    circle(x-50,y-15,rad-10,100);
    circle(x+50,y-15,rad-10,2000);
}
void sun(void)
{
    glColor3ub(252, 111, 3);
    circle(200,1100,80,2000);
}
void moon(void)
{
    glColor3ub(200, 207, 203);
    circle(200,1100,80,2000);
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
void roadNight(void)
{
    glBegin(GL_QUADS);
    glColor3ub(43, 42, 42);

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
    glColor3ub(250,253,15);

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

    glColor3ub(250,253,15);

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

    glColor3ub(250,253,15);

    glVertex3f(300,580,0);
    glVertex3f(380,580,0);
    glVertex3f(380,640,0);
    glVertex3f(300,640,0);

    glColor3ub(0,0,0);

    glVertex3f(300,680,0);
    glVertex3f(380,680,0);
    glVertex3f(380,740,0);
    glVertex3f(300,740,0);

    glColor3ub(250,253,15);

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

void building1(void)
{

    glBegin(GL_QUADS);
    glColor3ub(75, 110, 128);

    glVertex3f(900,480,0);
    glVertex3f(1150,480,0);
    glVertex3f(1150,700,0);
    glVertex3f(900,700,0);

    glColor3ub(23, 14, 2);
    glVertex3f(890,460,0);
    glVertex3f(1150,460,0);
    glVertex3f(1150,480,0);
    glVertex3f(890,480,0);

    glColor3ub(176, 104, 95);
    glVertex3f(870,700,0);
    glVertex3f(1180,700,0);
    glVertex3f(1120,760,0);
    glVertex3f(930,760,0);

    ///windows left

    glColor3ub(0, 0, 0);
    glVertex3f(915,500,0);
    glVertex3f(970,500,0);
    glVertex3f(970,580,0);
    glVertex3f(915,580,0);

    glColor3ub(250,253,15);
    glVertex3f(915,600,0);
    glVertex3f(970,600,0);
    glVertex3f(970,680,0);
    glVertex3f(915,680,0);

    ///windows middle
    glColor3ub(41, 18, 18);
    glVertex3f(1005,480,0);
    glVertex3f(1050,480,0);
    glVertex3f(1050,580,0);
    glVertex3f(1005,580,0);

    glColor3ub(0, 0, 0);
    glVertex3f(1000,600,0);
    glVertex3f(1055,600,0);
    glVertex3f(1055,680,0);
    glVertex3f(1000,680,0);

    ///windows right
    glColor3ub(250,253,15);
    glVertex3f(1085,500,0);
    glVertex3f(1140,500,0);
    glVertex3f(1140,580,0);
    glVertex3f(1085,580,0);

    glColor3ub(0, 0, 0);
    glVertex3f(1085,600,0);
    glVertex3f(1140,600,0);
    glVertex3f(1140,680,0);
    glVertex3f(1085,680,0);

    glEnd();




}
void building2(void)
{
    glBegin(GL_QUADS);
    glColor3ub(188, 193, 214);

    glVertex3f(1050,350,0);
    glVertex3f(1280,350,0);
    glVertex3f(1280,550,0);
    glVertex3f(1050,550,0);

    glColor3ub(23, 14, 2);
    glVertex3f(1030,320,0);
    glVertex3f(1300,320,0);
    glVertex3f(1300,350,0);
    glVertex3f(1030,350,0);
    ///windows
    glColor3ub(73, 110, 158);

    glVertex3f(1050,440,0);
    glVertex3f(1280,440,0);
    glVertex3f(1280,460,0);
    glVertex3f(1050,460,0);

    glVertex3f(1050,380,0);
    glVertex3f(1280,380,0);
    glVertex3f(1280,400,0);
    glVertex3f(1050,400,0);

    glVertex3f(1050,500,0);
    glVertex3f(1280,500,0);
    glVertex3f(1280,520,0);
    glVertex3f(1050,520,0);
    /*glVertex3f(1155,350,0);
    glVertex3f(1175,350,0);
    glVertex3f(1175,550,0);
    glVertex3f(1155,550,0);*/

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(11, 53, 227);

    glVertex3f(1030,550,0);
    glVertex3f(1300,550,0);
    glVertex3f(1165,600,0);
    glEnd();

}
void building3(void)
{
    glBegin(GL_QUADS);
    glColor3ub(140, 140, 184);

    glVertex3f(1200,480,0);
    glVertex3f(1400,480,0);
    glVertex3f(1400,800,0);
    glVertex3f(1200,800,0);

    glColor3ub(23, 14, 2);
    glVertex3f(1180,480,0);
    glVertex3f(1420,480,0);
    glVertex3f(1420,520,0);
    glVertex3f(1180,520,0);

    ///windows

    glColor3ub(250,253,15);

    glVertex3f(1230,550,0);
    glVertex3f(1280,550,0);
    glVertex3f(1280,650,0);
    glVertex3f(1230,650,0);

    glColor3ub(0, 0, 0);

    glVertex3f(1230,680,0);
    glVertex3f(1280,680,0);
    glVertex3f(1280,780,0);
    glVertex3f(1230,780,0);

    glColor3ub(0, 0, 0);

    glVertex3f(1320,550,0);
    glVertex3f(1370,550,0);
    glVertex3f(1370,650,0);
    glVertex3f(1320,650,0);

    glColor3ub(250,253,15);

    glVertex3f(1320,680,0);
    glVertex3f(1370,680,0);
    glVertex3f(1370,780,0);
    glVertex3f(1320,780,0);



    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(61, 45, 150);

    glVertex3f(1200,800,0);
    glVertex3f(1400,800,0);
    glVertex3f(1300,900,0);
    glEnd();
}
void lighthouse(void)
{
    glBegin(GL_QUADS);
    glColor3ub(178, 168, 191);

    glVertex3f(1450,500,0);
    glVertex3f(1550,500,0);
    glVertex3f(1550,900,0);
    glVertex3f(1450,900,0);

    ///bottom
    glColor3ub(65, 56, 77);

    glVertex3f(1440,480,0);
    glVertex3f(1560,480,0);
    glVertex3f(1560,500,0);
    glVertex3f(1440,500,0);

    ///top
    glColor3ub(24, 19, 31);

    glVertex3f(1450,900,0);
    glVertex3f(1550,900,0);
    glVertex3f(1570,930,0);
    glVertex3f(1430,930,0);

    glColor3ub(150, 101, 133);

    glVertex3f(1450,930,0);
    glVertex3f(1550,930,0);
    glVertex3f(1550,960,0);
    glVertex3f(1450,960,0);

    glColor3ub(255, 255, 255);

    glVertex3f(1490,960,0);
    glVertex3f(1510,960,0);
    glVertex3f(1505,1060,0);
    glVertex3f(1495,1060,0);


    glEnd();
}
///solar function
void solar(int x,int y)
{
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);

    ///1st stand
    glVertex3f(x,y,0);
    glVertex3f(x+10,y,0);
    glVertex3f(x+10,y+40,0);
    glVertex3f(x,y+40,0);

    ///2nd stand
    glVertex3f(x+100,y,0);
    glVertex3f(x+110,y,0);
    glVertex3f(x+110,y+40,0);
    glVertex3f(x+100,y+40,0);

    ///plate
    glColor3ub(166, 152, 161);
    glVertex3f(x-20,y+40,0);
    glVertex3f(x+130,y+40,0);
    glVertex3f(x+150,y+100,0);
    glVertex3f(x,y+100,0);
    glEnd();
    glBegin( GL_LINES );
    glColor3f( 0,0,0 );

    glVertex3f( x+10, y+40, 0.0 );
    glVertex3f( x+30, y+100, 10.0 );

    glVertex3f( x+50, y+40, 0.0 );
    glVertex3f( x+70, y+100, 10.0 );

    glVertex3f( x+90, y+40, 0.0 );
    glVertex3f( x+110, y+100, 10.0 );

    glVertex3f( x-12,  y+60, 0.0 );
    glVertex3f( x+135, y+60, 10.0 );

    glVertex3f( x-10, y+80, 0.0 );
    glVertex3f( x+140, y+80, 10.0 );




    glEnd();


}

void solars(void)
{
    solar(100,780);
    solar(280,790);
}

///car
void car1(void)
{
    ///car1///
    glBegin(GL_QUADS);
    glColor3ub(200,0,0);

    ///base
    glVertex3f(100,170,0);
    glVertex3f(300,170,0);
    glVertex3f(300,200,0);
    glVertex3f(100,200,0);

    ///hud
    glColor3ub(255,0,0);
    glVertex3f(120,200,0);
    glVertex3f(280,200,0);
    glVertex3f(260,220,0);
    glVertex3f(140,220,0);

    glEnd();

    ///wheels
    glColor3ub(0,0,0);
    circle(140,170,17,500);
    circle(260,170,17,500);



}
void car2(void)
{
    ///car2///
    glBegin(GL_QUADS);
    glColor3ub(0,0,200);

    ///base
    glVertex3f(600,170,0);
    glVertex3f(800,170,0);
    glVertex3f(800,200,0);
    glVertex3f(600,200,0);

    ///hud
    glColor3ub(0,0,255);
    glVertex3f(620,200,0);
    glVertex3f(780,200,0);
    glVertex3f(760,220,0);
    glVertex3f(640,220,0);

    glEnd();

    ///wheels
    glColor3ub(0,0,0);
    circle(640,170,17,500);
    circle(760,170,17,500);

}

void van(void)
{
    glBegin(GL_QUADS);
    glColor3ub(240, 230, 236);

    ///base
    glVertex3f(1100,50,0);
    glVertex3f(1300,50,0);
    glVertex3f(1300,80,0);
    glVertex3f(1100,80,0);

    ///hud
    glColor3ub(252, 247, 250);
    glVertex3f(1120,80,0);
    glVertex3f(1300,80,0);
    glVertex3f(1300,125,0);
    glVertex3f(1140,125,0);


    glEnd();




    ///wheels
    glColor3ub(0,0,0);
    circle(1130,50,17,500);
    circle(1270,50,17,500);

}

void bird(int x,int y)
{
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);

    glVertex3f(x,y,0);
    glVertex3f(x+20,y-20,0);
    glVertex3f(x+40,y+20,0);
    glVertex3f(x+20,y-40,0);

    glEnd();

}
void birds(void)
{
    int i = 7;
    int x = 750,y = 1100;
    while(i>0)
    {
        bird(x,y);
        x += 50;
        y -= 10;
        i--;
    }

    int j = 6,a = 750, b = 900;
    while(j>0)
    {
        bird(a,b);
        a += 50;
        b += 15;
        j--;
    }


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
void surfaceNight(void)
{
    glBegin(GL_QUADS);
    glColor3ub(16, 51, 13);

    glVertex3f(0,260,0);
    glVertex3f(1600,260,0);
    glVertex3f(1600,620,0);
    glVertex3f(0,620,0);

    glEnd();
}
void skyNight(void)
{
    glBegin(GL_QUADS);
    glColor3ub(43, 42, 42);

    glVertex3f(0,620,0);
    glVertex3f(1600,620,0);
    glVertex3f(1600,1200,0);
    glVertex3f(0,1200,0);

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

void trees(void)
{
    tree1(80,280,50);
    tree1(450,370,50);
    tree1(510,530,40);

    tree2(850,560);
    tree2(1430,460);
    tree2(1550,360);
    tree1(1320,290,40);

}
void treesNight(void)
{
    tree1(80,280,50);
    tree1(450,370,50);
    tree1(510,530,40);

    tree2Night(850,560);
    tree2Night(1430,460);
    tree2Night(1550,360);
    tree1(1320,290,40);

}

void clouds(void)
{
    cloud(480,1100,50);
    cloud(780,980,50);
    cloud(1100,1150,50);
}
void cloudsNight(void)
{
    cloudNight(480,1100,50);
    cloudNight(780,980,50);
    cloudNight(1100,1150,50);
}
void park (void)
{   ///Slider for kids
    glBegin( GL_LINES );
    glColor3f( 0,0,0 );

    glVertex3f( 650, 450, 0.0 );
    glVertex3f( 650, 330, 10.0 );

    glVertex3f( 605, 470, 0.0 );
    glVertex3f( 605, 310, 10.0 );

    glVertex3f( 605 ,420, 0.0 );
    glVertex3f( 640, 440, 10.0 );

    glVertex3f( 605 ,380, 0.0 );
    glVertex3f( 640, 400, 10.0 );

    glVertex3f( 605 ,340, 0.0 );
    glVertex3f( 650, 360, 10.0 );


    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(178,190,181);

    glVertex3f(680,300,0);
    glVertex3f(750,310,0);
    glVertex3f(675,480,0);
    glVertex3f(605,470,0);
    glEnd() ;

    ///Dolna
    glBegin( GL_LINES );
    glColor3f( 0,0,0 );

    glVertex3f( 620 ,600, 0.0 );
    glVertex3f( 830, 600, 10.0 );

    glVertex3f( 650, 600, 0.0 );
    glVertex3f(  650, 500, 10.0 );

    glVertex3f( 780, 600, 0.0 );
    glVertex3f(  780, 500, 10.0 );



    glVertex3f( 690, 600, 0.0 );
    glVertex3f(  690, 520, 10.0 );

    glVertex3f(  760, 600, 0.0 );
    glVertex3f(  760, 520, 10.0 );


    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(106,108,109);

    glVertex3f(670,500,0);
    glVertex3f(750,500,0);
    glVertex3f(762,520,0);
    glVertex3f(690,520,0);
    glEnd();

    glBegin( GL_LINES );
    glColor3f( 0,0,0 );

    glVertex3f( 690, 600, 0.0 );
    glVertex3f(  670, 500, 10.0 );

    glVertex3f( 760, 610, 0.0 );
    glVertex3f(  745, 498, 10.0 );


    glEnd();



}
///Update
/*int moveCar1 = 0,moveCar2 = 100;
void update(int value)
{
    moveCar1 = moveCar1+2;  //initial speed
    // moveCar2 = moveCar2-2;  //initial speed
    if(moveCar1> 1400)
    {
        moveCar1 = -100;
        moveCar2 =1000;
    }
    /* move_cloud=move_cloud+.5;
     if(move_cloud> 800)
     {
         move_cloud =-500;
     }
     move_dust=move_dust+.2;
    glutPostRedisplay(); //Tell GLUT that the display has changed
    glutTimerFunc(25, update, 0);   //Tell GLUT to call update again in 25 milliseconds
}
*/



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
    solars();
    sun();
    clouds();
    trees();
    park();
    car1();
    car2();
    van();
    birds();

    glFlush ();
}
void displayNight(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);


    roadNight();
    surfaceNight();
    skyNight();
    apartment();
    building1();
    building3();
    building2();
    lighthouse();
    solars();
    moon();
    cloudsNight();
    treesNight();
    park();
    car1();
    car2();
    van();
    //birds();

    glFlush ();
}
/*int sunX = 200;
void moveSun(int x)
{

    sunX += 2;
    if (sunX>1200)
    {
        sunX = -200;
    }
    glPushMatrix();
    glTranslatef(1400,0,0);
    sun();
    glutTimerFunc(25, moveSun, 0);
    glPopMatrix();
}
*/
void keyboard(unsigned char key,int x,int y)
{

   switch(key){
       case 'e':
           exit(0);
           break;
        case 'd':
            glutDisplayFunc(display);
            glutPostRedisplay();
            break;
        case 'n':
            glutDisplayFunc(displayNight);
            glutPostRedisplay();
            break;
        }
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




int main(int argc, char* argv[])
{

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);


    glutInitWindowSize (800, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Smart City Final Project");

    init ();

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();


    return 0;
}
