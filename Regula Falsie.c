#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x);
main()
{
printf("Method of Regula Falsi\n");
float x0,x1,e;
int count=0;
printf("Enter the Error: ");
scanf("%f", &e);
printf("Input initial values: ");
scanf("%f%f", &x0, &x1);
if(f(x1)*f(x0)>0)
printf("No Solution");
else
{
while(f(x1)>e||f(x1)<-e)
{
x1=(x0*f(x1)-x1*f(x0))/(f(x1)-f(x0));
count++;
}
printf("The Root is %f", x1);
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