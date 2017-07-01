#include<stdio.h>
float f(float x, float y);
main()
{
float a,b,x,y,h,t,k;
printf("\nEnter x0,y0,h,xn: ");
scanf("%f%f%f%f",&a,&b,&h,&t);
x=a;
y=b;
printf("\n x\t y\n");
while(x<=t)
{
k=h*f(x,y);
y=y+k;
x=x+h;
printf("%0.3f\t%0.3f\n",x,y);
}
}
float f(float x,float y)
{
float f;
f=2*x*y;
return f;
}