#include<stdio.h>
#include<conio.h>
main()
{
	int n, r=0;
	printf("Enter a number to reverse: ");
	scanf("%d", &n);
	while(n!=0)
	{
		r=r*10;
		r=r+n%10;
		n=n/10;
	}
	printf("= %d", r);
	getch();
}
