#include<stdio.h>
#include<conio.h>

void main()
{
int n_car=0,n_cifre=0;
char car;
printf("\n introduceti un sir de caractere: ");
while((car=getche())!=13)
{n_car++;
if(car>=48 && car<=57)
  n_cifre++;}
printf("\n numarul de caractere introdus: %d, dintre care %d sunt cifre", n_car,n_cifre);
getch();}
  
