#include<stdio.h>
#include<conio.h>

void main()
{
int i,j;
for(i=1;i<=8;i++)
  {gotoxy(32,7+i);
  for(j=1;j<=8;j++)
    {if(i+j)%2==0)
        printf(" \XDB\XDB");
     else
        printf("  ");}}
 getch();}       
  
