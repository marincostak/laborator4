#include <stdio.h>
#include <math.h>

int main()

{
    int i=10,s,b=60,x;
    
    printf("x=");
    scanf("%d",&x);
 if(x>10 && x<60)
{
  
    for(s=1; i<=b; i++)
{

    if (i%2==1 && i<=x) 
    s *= i;
    
}
printf("s=%d",s);}
else{
  printf("Х не співпадає з значеними числами задайте інше Х");
}
}