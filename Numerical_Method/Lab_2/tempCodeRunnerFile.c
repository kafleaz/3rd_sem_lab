Time        0   10      15      20      22.5      30
Velocity    0   22704   362.78  517.35  602.97    901.67

determine the value of velocity at t=16.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    float x,l,v=0,ax[10],fx[10],lx[10];
    printf("Enter the number of points\n");
    scanf("%d",&n);
    printf("Enter the value of x\n");
    scanf("%f",&x);
    for ( i = 0; i < n; i++)
    {
        printf("ENter the value of x and fx at i=%d\n",i);
        scanf("%f%f",&ax[i],&fx[i]);