#include <stdio.h>
#include <math.h>
 int main()
 {
   float a,b,z1,z2;
   scanf("%f", &a);
   scanf("%f", &b);
   z1 = ((cos(a) - cos(b)) * (cos(a) - cos(b))) - ((sin(a) - sin(b)) * (sin(a) - sin(b)));
   z2 = -4*sin((a-b)/2) * sin((a-b)/2) * cos(a + b);
   printf("%f %f", z1, z2);
 }

