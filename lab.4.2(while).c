#include <stdio.h>
#include <math.h>

int main()

{
    int i=10,s=1,x;
    printf("x=");
    scanf("%d",&x);
    if(x>10 && x<60)
{
    while(i<=60)
{
    if (i % 2==1 && i<=x)
    s *= i;
    i++;
} 
printf("s=%d",s);}
else{
  printf("Х не співпадає з значеними числами задайте інше Х");}
}