#include<stdio.h>
#include<conio.h>
float add(float (n1), float (n2));
float subtrc(float (n1), float (n2));
float multi(float (n1),float (n2));
float div(float (n1),float (n2));
int power(int (n1),int (n2));
int mod(int (n1),int (n2));
main()
{
      char c;
      float  a, b;
      printf ("Enter The Operation: ");
      scanf ("%c", &c);
      printf("Enter two numbers: ");
      scanf ("%f%f", &a, &b);
      switch(c)
      {
               case'+':
                       printf("=%f", add(a, b));
                       break;
               case'-':
                       printf("=%f", subtrc(a, b));
                       break;
               case'*':
                       printf("=%f", multi (a, b));
                       break;
               case'/':
                       printf ("=%f", div (a, b));
                       break;
               case'^':
                       printf ("=%d", power (int(a), int(b)));
                       break;
               case'%':
                       printf ("=%d", mod (int(a), int(b)));
                       break;
                       }
      getch();
}
float add(float c,float d)
{
      float x;
      x=c+d;
      return x;
}
float subtrc(float e, float f)
{
      float y;
      y=e-f;
      return y;
}
float multi(float g, float h)
{
      float z;
      z=g*h;
      return z;
}
float div (float i, float j)
{
      float w;
      w=i/j;
      return w;
}
int power (int k, int l)
{
      int i, p;
      p=1;
      for (i=1;i<=l;i++)
      p=p*k;
      return p;
}
int mod(int m, int n)
{
    int q;
    q= m%n;
    return q;
}
