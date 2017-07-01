#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x);
main()
{
float x0, x1, x2, t, e;
inti=0;
printf("\nEnter the value of x0: ");
scanf("%f",&x0);
printf("\nEnter the value of x1: ");
scanf("%f",&x1);
printf("\nEnter the value of Error: ");
scanf("%f", &e);
do
{
x2=x1-(f(x1)*(x1-x0)/f(x1)-f(x0));
x0=x1;
x1=x2;
if(f(x1)<0)
t=fabs(f(x1));
else
t=f(x1);
i++;
}
while(t>e);
printf("\nThe root is= %f", x2);
printf("\nNo. of iteration:%d", i);
getch();
}
float f(float x)
{
float z;
z=exp(-x)-x;
return z;
}