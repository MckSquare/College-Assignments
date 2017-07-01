#include<stdio.h>
#include<math.h>
#include<conio.h>
long int fact(int num);
main()
{
	int n,i, f;
	float e,r,t,c,x,x1, sum=0;
	printf("enter the number of element of Cosine expansion : ");
	scanf("%d",&n);
	printf("enter the angle(in degree): ");
	scanf("%f", &x1);
	x=(3.14*x1)/180;
	r=cos(x);
	for(i=0;i<n;i++)
	{
		f=2*i;
		e=pow(-1,i)*pow(x,f)/fact(f);
		sum=sum+e;
	}
	printf("real value %f\n",r);
	printf("calculated value %f\n",sum);
	t=sum-r;
	printf("the error is :%f",t);
}
long int fact(int num)
{
	int z;
	if(num==0)
	return 1;
	else
	z=num*fact(num-1);
	return z;
}
