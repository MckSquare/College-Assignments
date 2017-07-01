#include<stdio.h>
#include<conio.h>
main()
{
      int n, a, b, c, s;
      printf("Enter the number: ");
      scanf("%d", &n);
      a = n/100;
      b = (n-(a*100))/10;
      c = n-(a*100+b*10);
      s = a+b+c;
      printf ("Result = %d", s);
      getch();
}
