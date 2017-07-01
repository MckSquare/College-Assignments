#include<stdio.h>
#include<conio.h>
main()
{
      float n1, n2, sum, subtrc, product, div; 
 /*subtrc for subtraction, div for division*/
      int mod;
      printf("Enter two numbers: ");
      scanf("%f%f",&n1,&n2);
      sum = n1+n2;
      subtrc = n1-n2;
      product = n1*n2;
      div = n1/n2;
      mod= (int) n1%(int) n2;
      printf("Sum = %.2f\nSubtract = %.2f\nProduct = %.2f\ndivision = %.2f\n",       sum,subtrc,product,div);
      printf("Mod = %d", mod);
      getch();
}
