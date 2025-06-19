#include<stdio.h>
#include<conio.h>

void main()
{
 int num,m,temp;
 int a,ms,sum=0,ctr=0;
 clrscr();

 printf("Enter a no. :- ");
 scanf("%d",&num);

 temp = num;

 while(temp>0)
 {
  ctr ++;
  temp = temp/10;
 }

  temp = num;

  while(temp>0)
  {
    m = temp % 10;
    a=1; ms=1;

   while(a<=ctr)
   {
    ms = ms * m;
    a++;
   }

    sum = sum + ms;
    temp = temp/10;
   }

    if(sum == num)
      printf("Armstrong");
    else
      printf("Not Armstrong");

getch();
}