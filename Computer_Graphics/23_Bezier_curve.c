//Program for Bezier curve:
#include <stdio.h> 
#include <stdlib.h>
#include <graphics.h>
#include <math.h>

void bezier (int x[4], int y[4])
{
    
    int i;
    double t;
    for (t = 0.0; t < 1.0; t += 0.0005)
    {
        double xt = pow (1-t,3)*x[0]+3*t*pow(1-t, 2) *x[1]+3*
        pow (t,2)*(1-t)*x[2]+pow (t, 3) * x[3];
        double yt = pow (1-t,3)*y[0]+3* t * pow (1-t,2)*y[1]+3*
        pow (t, 2)*(1-t)*y[2]+ pow (t, 3) * y[3];
        putpixel (xt, yt, WHITE);
    }
    for (i=0; i<4; i++)
    putpixel (x[i], y[i], YELLOW);
    getch();
    closegraph();
    return;
}
void main()
{
    int x[4], y[4];
    int i;
    int gd = DETECT, gm;
    initgraph (&gd, &gm, "C:\\TurboC3\\BGI");
    printf("Az Kafle");
    printf ("Enter the x- and y-coordinates of the four control points.\n");
    for (i=0;i<4; i++)
    scanf ("%d%d", &x[i], &y[i]);
    
    bezier (x, y);
}
