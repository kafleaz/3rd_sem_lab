//Program for creating House shape: 

#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    printf("Az Kafle\n");
    setcolor(7);
    rectangle(70,90,160,210);
    rectangle(100,160,130,210);
    rectangle(80,110,90,120);
    rectangle(140,110,150,120);
    line(70,90,110,25);
    line(110,25,160,90);
    circle(110,70,10);
    getch();
    closegraph();
}