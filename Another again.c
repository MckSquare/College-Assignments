#include<stdio.h>
#include <math.h>
#include<conio.h>
float f(float x, float y)
{
return 2*x*y;
}
main()
{
double y1,x1,y2,x2,n,h,s1,s2,s3,s4,s;
printf("\nEnter the value of x0: ");
scanf("%lf",&x1);
printf("\nEnter the value of y0: ");
scanf("%lf",&y1);
printf("\nEnter the value of h: ");
scanf("%lf",&h);
printf("\nEnter the value of last point: ");
scanf("%lf",&n);
for(; x1<n; x1=x1+h)
{
printf("%f\t%f\n", x1, y1);
s1=f(x1,y1);
x2=x1+.5*h;
y2=y1+0.5*h*s1;
s2=f(x2,y2);
y2=y1+0.5*h*s2;
s3=f(x2,y2);
y2=y1+h*s3;
x2=x1+h;
s4=f(x2,y2);
s=s1+2*s2+2*s3+s4;
y2=y1+h*s/6;
x1=x2;
y1=y2;
}
getch();
}