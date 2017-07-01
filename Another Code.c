a) #include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x);
main()
{
int i,n;
float x0,xn,h,y[20],so,se,ans,ans1,x[20],sum=0.0,p,q,in=0.0,r[20];
char d;
up:
printf("Which method to use?\n[1]Gauss\n[2]Trapezoidal\n[3]Simpson's 1/3rd\ninput: ");
scanf("%c", &d);
switch(d)
{
case'3':
printf("Enter initial & final points, along with number of points:\n");
scanf("%f%f%d",&x0,&xn,&n);
if(n%2==1)
{
n=n+1;
}
h=(xn-x0)/n;
for(i=0; i<=n; i++)
{
x[i]=x0+i*h;
y[i]=f(x[i]);
}
so=0; //Simpson's 1/3rd code
se=0;
for(i=1; i<n; i++)
{
if(i%2==1)
{
so=so+y[i];
}
else
{
se=se+y[i];
}
}
ans=h/3*(y[0]+y[n]+4*so+2*se);
printf("Result: %f\n", ans);
break;
case '1':
printf("Enter initial & final points, along with number of points:\n");
scanf("%f%f%d",&x0,&xn,&n);
if(n%2==1)
{
n=n+1;
}
r[1]=0.17132449;
r[2]=0.3607676157;
r[3]=0.46791394;
r[4]=r[3];
r[5]=r[2];
r[6]=r[1];
h=(xn-x0)/n;
p=(xn+x0)/2;
q=(xn-x0)/2;
for(i=1; i<=n; i++)
{
x[i]=x0+i*h;
y[i]=f(p+q*x[i]);
in=in+r[i]*y[i];
}
printf("Result: %f\n", in);
break;
case '2':
printf("Enter initial & final points, along with number of points:\n");
scanf("%f%f%d",&x0,&xn,&n);
if(n%2==1)
{
n=n+1;
}
h=(xn-x0)/n;
for(i=0; i<=n; i++)
{
x[i]=x0+i*h;
y[i]=f(x[i]);
}
for(i=1; i<n; i++)
{
sum=sum+y[i];
}
ans1=h*(y[0]+y[n]+2*sum)/2;
printf("Result: %f\n", ans1);
break;
}
goto up;
getch();
}
float f(float x)
{
return exp(-pow(x,2));
}