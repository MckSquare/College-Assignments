#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{
	float x[20],y[20],sumx=0.0,sumy=0.0,sumxy=0.0,sumsqx=0.0,sumsqy=0.0,a0,a1,b0,b1,mx,my;
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
		sumy+=y[i];
		sumsqx+=pow(x[i],2);
		sumx+=x[i];
		sumxy+=x[i]*y[i];
		sumsqy+=pow(y[i],2);
	}
	a0=((sumy*sumsqx)-(sumx*sumxy))/((n*sumsqx)-(sumx*sumx));
	a1=((n*sumxy)-(sumx*sumy))/((n*sumsqx)-(sumx*sumx));
	b0=((sumx*sumsqy)-(sumy*sumxy))/((n*sumsqy)-(sumy*sumy));
	b1=((n*sumxy)-(sumx*sumy))/((n*sumsqy)-(sumy*sumy));
	printf("The equation(y on x) is: y=%f+%fx\n",a0,a1);
	printf("The equation(x on y) is: x=%f+%fy\n",b0,b1);
	mx=sumx/n;
	my=sumy/n;
	printf("\tcalculated mean from equation\tcalculated mean from sum\n");
	printf("x=\t\t%f\t\t\t%f\n",b0+b1*my,mx);
	printf("y=\t\t%f\t\t\t%f\n",a0+a1*mx,my);
	getch();
}
