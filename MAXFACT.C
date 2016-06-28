#include<stdio.h>
#include<conio.h>
void main()
{
 unsigned long int fact=1,ctr,num;
 clrscr();
 printf("enter a number:");
 scanf("%lu",&num);
 for(ctr=2;ctr<=num;ctr++)
 fact=fact*ctr;
 printf("the factorial is %lu",fact);
 getch();
}