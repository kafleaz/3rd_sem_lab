//Program for creating man object
#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    setcolor(7);
    circle(150,150,35);
    circle(135,145,5);
    ellipse(160,146,10,180,5,3);
    ellipse(150,165,180,360,10,4);
    line(150,185,150,300);
    line(150,200,120,230);
    line(150,200,180,230);
    line(150,300,120,330);
    line(150,300,180,330);
    outtextxy(230,350,"HI, I am Az Kafle");
    getch();
}