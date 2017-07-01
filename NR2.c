#include<stdio.h>
#include<math.h>
#include<conio.h>
#define max 500
float f(float x);
float g(float x);
void k(float x0, float x1, float e);
main()
{
float x0,x1,x2,x[max],c,y[5],e;
inti, n=0,cnt=0;
printf("Enter the lower limit of the range: ");
scanf("%f", &x0);
printf("Enter the higher limit: ");
scanf("%f", &x1);
printf("Interval length: ");
scanf("%f", &c);
x2=x0;
while(x2<=x1)
{
x[n++]=f(x2);
x2+=c;
}
for(i=0;i<n;i++)
{
if(x[i]*x[i+1]<0)
{
cnt++;
printf("The boundary of the %dth root is (%f,%f)\n", cnt,
x0+i*c, x0+(i+1)*c);
y[cnt-1]=x0+i*c;
}
}
if(cnt==0)
printf("There is no real root in the interval");
else printf("There are %d real roots in the interval", cnt);
if(cnt==4)
printf("\nAll roots are real\n");
if(cnt>0)
printf("\nEnter the error: ");
scanf("%f", &e);
for(i=0;i<cnt;i++)
{
printf("%dth root", i+1);
k(y[i],y[i]+c,e);
}
}
float f(float x)
{
float c;
c=pow(x,4)-8*pow(x,3)+14.91*pow(x,2)+9.54*x-25.92;
return c;
}
float g(float x)
{
float c;
c=4*pow(x,3)-24*pow(x,2)+29.82*x+9.54;
return c;
}
void k(float x0,float x1, float e)
{
inti=0;
while((f(x1)>e||f(x1)<-e))
{
x1=x1-(f(x1)/g(x1));
i++;
}
printf("the value of the root is :%f\n",x1);
printf("number of iteration is :%f\n",i);
getch();
}