#include<stdio.h>
#include<conio.h>

#define n_valori 7
int valori[]={500,200,100,50,10,5,1}

void main()
{
int suma,i;
printf("\n introduceti suma dorita:");
scanf("%d",suma);
for(i=1;i<n_valori;i++)
    {
    printf("\n valoare bancnota:%4d, numar de bancnote:%4d", valori[i], suma/valori[i]);
    suma%=valori[i];
    }
getch();
}
    
