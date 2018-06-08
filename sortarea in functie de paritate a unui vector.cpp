#include<iostream.h>

int n,x[100],a[100],b[100];

void citire(int z[])
{
int i;
cout<<" introduceti elementele vectorului \n";
for(i=0;i<=n;i++)
    {cout<<"z["<<i<<"]=";
    cin>>z[i];}
    }
    
void afisare(int z[])
{int i;
cout<<" Elementele vectorului sunt ";
for(i=0;i<n;i++)
    cout<<z[i]<<"  ";
    cout<<endl;}
    
void alegere(int x[])
{
int i;
for(i=0;i<n;i++)
    if(x[i]%2==0)
      x[i]=a[i];
    else
      x[i]=b[i];}
      
void sortare(int z[])
{
int c=1,aux;
while(c==1)
      {c=0;
      for(i=0;i<n-1;i++)
          if(z[i]>z[i+1])
            {aux=z[i];
            z[i]=z[i+1];
            z[i+1]=aux;
            c=1;}}}
            
void main()
{
cout<<" Dati n ";cin>>n;
citire(x[]);
afisare(x[]);
alegere(x[]);
afisare(a[]);
afisare(b[]);
sortare(a[]);
sortare(b[]);
afisare(a[]);
afisare(b[]);
}


             
    
