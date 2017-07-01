#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float n,j,a,b,z,am,gm,hm;
	a=0;
	b=1;
	z=0;
	printf("Enter the number of numbers: ");
	scanf("%f", &n);\
	int i;
	printf ("Enter the Numbers: ");
	for(i=1;i<=n;++i)
	{
		scanf("%f", &j);
		a=a+j;
		b=b*j;
		z=z+1/j;
	}
	am=a/2;
	gm=pow(b,(1/n));
	hm=n/z;
	printf("AM=%f\nGM=%f\nHM=%f",am,gm,hm);
	getch();
}
