#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>

void main()
{
float *a,val,x;
int i;
if((a=(float *)malloc(3*sizeof(float)))==NULL)
  {printf("\n memorie insuficienta!");
  exit(1);
  }
printf("\n introduceti valorile coeficientilor:");
for(i=0;i<=2;i++)
  {printf("a%d=",i);
  scanf("%f", &val);
  *(a+i)=val;}
printf("\n introduceti valorile lui x:");
scanf("%f", &x);
val=*a*x*x+*(a+1)*x+*(a+2);
printf("\n valoarea polinomului P(%f)=%f",x,val);
getch();
}
  
  
