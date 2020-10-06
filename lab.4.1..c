#include <stdio.h>
#include <math.h>
int main()
{
int a, b, y, er;
float x;
do{
er=0;
printf("Ведіть число a=");
scanf("%d",&a);
printf("Ведіть число b=");
scanf("%d",&b);
printf("Ведіть число y=");
scanf("%d",&y);
x=sqrt(a-pow(b,2))+sqrt(a*b)+(y/2);
if ((a-pow(b,2)) && a*b < 0)
{
  printf("Не можна взяти корінь з від'ємного числа задайте інші числа\n");
  er=1;
}
}
while(er==1);
printf("%f\n",x);
}