#include <stdio.h>
#include <math.h>

int main()
{
int j, i, s, d = 0; 
for (i = 1; i <= 10; i++)  
 {
  for (s = 1, j = 1;j <= i; j++) 
  s *= i+j; 
 d += s;
 } 
 printf("d=%d\n", d);
}