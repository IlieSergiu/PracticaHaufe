#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,sum;
printf("\n introduceti un nr natural:");
scanf("%d", &n);
for(i=1,sum=0;i<=n;i++)
  sum+=i;
  printf("\t suma primelor %d numere naturale este:%d ", n ,sum);
  getch();
  }
