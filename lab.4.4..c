#include <stdio.h>
#include <math.h>

int main()
{
float y=0,x=0,a=0.5,b = 4.5,dx = 0.4;
printf("\tX\t\t\t\tY\n");

while (x<=b)
{  x+=dx;
    y=log(x);
      printf(" %f\t%11.3lf\n", x, y);
     }
return 0;
}
