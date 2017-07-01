#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x);
main()
{
float x0, x1, e, x;
int count=0;
printf("Method of Bisection\nEnter initial guesses\nx0= ");
scanf("%f", &x0);
printf("x1= ");
scanf("%f", &x1);
printf("Enter allowed error: ");
scanf("%f", &e);
if(f(x0)*f(x1)>0)
printf("Can't find solution");
else
{
while((x1-x0)/x1>e||(x1-x0/x1)<-e)
{
x=(x0+x1)/2;
if(f(x0)*f(x)>0)
x0=x;
else if(f(x1)*f(x)>0)
x1=x;
count++;
}
}
printf("\nThe solution is %f", x);
printf("\nNumber of Iterations is %d", count);
getch();
}
float f(float x)
{
float z;
z=exp(x)-x;
return z;
}