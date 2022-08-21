#include <stdio.h>
#include  <math.h>
int main()
{
       float num, root;
       printf("Enter the number");
       scanf("%f",&num);

       root=cbrt(num);

       printf("cube root of %.2f=%.2f",cbrt(num));

       return 0;
    }
