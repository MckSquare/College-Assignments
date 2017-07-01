#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x);
float g(float x);
main()
{
printf("Method of Newton Raphson\n");
float x0,x1,e,s;
int count=0;
printf("Enter the Error: ");
scanf("%f", &e);
printf("Input initial value: ");
scanf("%f", &x0);
{
while(f(x0)>e||f(x0)<-e)
{
x0=x0-f(x0)/g(x0);
count++;
}
printf("The Root is %f", x0);
printf("\nNumber of iteration=%d", count);
}
getch();
}
float f(float x)
{
float z;
z=exp(-x)-x;
return z;
}
float g(float x)
{
float z;
z=-(exp(-x)+1);
return z;
}