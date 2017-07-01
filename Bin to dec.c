#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{
	float a, c, e, f, g;
	int b, d=0, count=1, discount=1, i;
	printf("Enter the decimal number: ");
	scanf("%f", &a);
	b=(int) a;
	c=a-b;
	printf("The Binary equivalent is: ");
	for (i=0; i<count; i++)
	{
		if(b!=0)
		{
			d=d+(b%10)*pow(2, i);
			b=(int)(b/10);
			count++;
		}
		else break;
	}
	for (i=0;i<discount;i++)
	{
		if(c>0)
		{
			e=e+((int)(c*10))/pow(2, i);
			c=(c*10)-(int)(c*10);
			discount++;
		}
		else break;
	}
	f=e/10;
	g=d+f;
	printf("%f", g);
	getch();
}
