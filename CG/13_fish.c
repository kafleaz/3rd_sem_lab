//Program for creating fish

#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<ctype.h>

void main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    outtextxy(80,100,"Az Kafle");

    ellipse(200,200,0,360,130,50);//main body
    //tail up
    line(325,185,390,155);
    line(390,155,360,200);
    //tail down
    line(395,235,325,215);
    line(395,235,360,200);
    //Neck
    ellipse(100,200,315,45,50,60);
    //eye
    circle(120,180,3);
    //WIngs up
    line(170,150,260,90);
    line(260,90,220,150);
    //wings down
    line(170,250,260,290);
    line(260,290,230,250);
    //bodyskin
    arc(220,185,270,90,6);
    arc(200,185,270,90,6);
    arc(180,185,270,90,6);
    arc(200,215,270,90,6);
    arc(220,215,270,90,6);
    arc(180,215,270,90,6);
    arc(240,200,270,90,6);

    getch();
    closegraph();
}