#include<iostream.h>

int n,p[15];

void citire()
{
int r,i,x,y;
cout<<"Dari n=";cin>>n;
cout<<" Dati radacina : "; cin>>r;

for(i=1;i<n-1;i++)
  {cout<<"dari muchiile";
  cin>>x;cin>>y;
  p[y]=x;
  }}
  
void afisare()
{
int i;
cout<<" Elementele vectorului sunt ";
for(i=1;i<=n;i++)
    cout<<p[i]<<"  ";cout<<endl;}

void main()
{citire();
afisare();
}
  
                            
