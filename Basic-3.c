#include <stdio.h>
#include <conio.h>
#define PI 3.14159
main()
{
      float r,l,a,v;
      printf ("Enter the Radius of the Cylinder = ");
      scanf ("%f", &r);
      printf ("Enter the Length of the Cylinder = ");
      scanf ("%f", &l);
      a = 2 * PI * r * l + 2 * PI * r * r;
      v = PI * r * r * l;
      printf ("Area = %f\n", a);
      printf ("Volume = %f", v);
      getch();
}
