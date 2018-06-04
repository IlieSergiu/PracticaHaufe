#include<stdio.h>
#include<conio.h>

#define pi 3.141592
double arie(float);
double volum(float);

void main()
{
float raza;
printf("\n raza sferei:");
scanf("%f", &raza);
printf("\n aria sferei de raza r=%f este: S=%g, iar volumul:%g", raza, arie(raza), volum(raza));
getch();
}

double arie(float r)
{
return (4*pi*r*r);
}

double volum(float r)
{
return (4*pi*r*r*r)/3;
}
