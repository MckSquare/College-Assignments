#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float a,b;
	char c;
	printf("Instruction: \nPlease insert a space between each operand & operator\n");
	printf ("Enter the Operation: ");
	scanf("%f\t%s\t%f", &a, &c, &b);
	switch (c)
	{
		case'+':
			printf("=%.2f", a+b);
			break;
		case'-':
			printf("=%.2f", a-b);
			break;
		case'*':
			printf("=%.2f", a*b);
			break;
		case'/':
			printf("=%.2f", a/b);
			break;
		case'%':
			printf("=%d", int(a)%int(b));
			break;
		case'^':
			printf("%.2f", pow(a,b));
			break;
	}
	getch();
}
