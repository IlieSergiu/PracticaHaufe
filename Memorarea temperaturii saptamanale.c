#include<stdio.h>
#include<conio.h>

void main()
{
float temp[7];
float media=0;
int i;
printf("\n introduceti temperaturile zilnice:\n\n");
for(i=1;i<=7;i++)
    {printf("temperatura din ziua %d",i);
    scanf("%f", &temp[i]);
    media+=temp[i];
    }

media/=7;
printf("\n temperatura medie:%f",media);
getch();
}
