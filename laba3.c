#include <stdio.h>
int main(){
     int a, b;
     scanf("%x", &a);

     printf("%o\n", a);

     printf("%o\n", a << 1);

     printf("%o\n", ~a);

     scanf("%o", &b);
     printf("%o", (b & a));

     return 0;
 }
