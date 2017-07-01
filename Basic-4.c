#include<stdio.h>
#include<conio.h>
main()
{
      char name[40];
      float a,b;
      printf ("Enter your name: ");
      scanf ("%s", &name);
      printf ("Enter your roll no: ");
      scanf("%f", &a);
      printf("Enter The Marks of your 10+2 level: ");
      scanf("%f", &b);
      printf("Your name is %s\nYour Roll no is %2.0f\n", name,a);
      printf("Your 10+2 marks is %.2f", b);
      getch();
}
