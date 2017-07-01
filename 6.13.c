#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{
	float x[20],y[20],l=0.0,sq=0.0,s=0.0,sl=0.0,a0,a1;
	int i, n;
	printf("Enter The number of values: ");
	scanf("%d", &n);
	printf("Enter the given values in the table: \n");
	for(i=1;i<=n;i++)
	{
		printf("x[%d]=", i);
		scanf("%f", &x[i]);
		printf("y[%d]=", i);
		scanf("%f", &y[i]);
	}
	for(i=1;i<=n;i++)
	{
		l+=1/y[i];
		sq+=pow(x[i],2);
		s+=x[i];
		sl+=x[i]/y[i];
	}
	a0=(l*sq-s*sl)/(n*sl-pow(s,2));
	a1=(n*sl-s*l)/(n*sl-pow(s,2));
	printf("The equation is: 1/(%f+(%f)x", a0,a1);
}
