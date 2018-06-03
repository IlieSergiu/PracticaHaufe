#include<stdio.h>
#include<conio.h>

void main()
{
int i,j;
clrscr();
for(i=1;i<=9;i++)
  {for(j=1;j<=9;j++)
      printf("%4d", i*j);
      printf("\n");
  }
getch();
}
