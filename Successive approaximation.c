#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x);
int main()
{
float x1,err;
inti=0;
printf("THE METHOD OF SUCCESSIVE APPROXIMATION:\n");
printf("\nEnter the error value:");
scanf("%f",&err);
printf("\nEnter the guess value:");
scanf("%f",&x1);
while((f(x1)-x1>err||f(x1)-x1<-err))
{
x1=f(x1);
i++;
}
printf("\nThe value of the root of convergence: %f\n\nThe number of iteration
is:%d",x1,i);
getch();
}
float f(float x)
{
float c;
c= exp(-x);
return c;
}