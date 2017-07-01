#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[100], b[100], c[100];
	int i;
	printf("Enter the words: ");
	scanf("%s", &a);
	for(i=0; i<strlen(a); i++)
	{
		if('A'<a[i] && a[i]<'Z')
		{
			b[i]=a[i]+32;
			putchar(b[i]);
		}
		else
		{
			c[i]=a[i]-32;
			putchar(c[i]);
		}
	}
	getch();
}