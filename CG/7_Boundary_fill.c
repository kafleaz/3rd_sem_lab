/*Program to implement the 4-connected Boundary fill algorithm.*/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void boundary_fill(int x, int y, int fcolor, int bcolor)
{
    if ((getpixel(x, y) != bcolor) && (getpixel(x, y) != fcolor))
    { 
        putpixel(x, y, fcolor);
        boundary_fill(x + 1, y, fcolor, bcolor); 
        boundary_fill(x - 1, y, fcolor, bcolor); 
        boundary_fill(x, y + 1, fcolor, bcolor);
        boundary_fill(x, y - 1, fcolor, bcolor);
    }
}
void main()
{
    int x, y,radious, fcolor, bcolor;
    int gd=DETECT,gm;
    initgraph(&gd, &gm, "C:/TurboC3/BGI"); 
    printf("Az Kafle\n");
    printf("Enter the seed point (x, y) for a circle: "); 
    scanf("%d%d", &x, &y);
    printf("Enter radious: ");
    scanf("%d", &radious);
    printf("Enter boundary color : "); 
    scanf("%d", &bcolor); 
    printf("Enter new color : "); 
    scanf("%d", &fcolor); 
    circle(x,y,radious); 
    boundary_fill(x, y, fcolor, bcolor); 
    delay(1000);
    getch();
}