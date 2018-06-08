#include<iostream.h>

int x[50],n,p;

void citire()
{
cout<<"n= ";cin>>n;
cut<<"p= ";cin>>p;}

voit init(int k)
{x[k]=0;}

int exista(int k)
{
int c;
if(x[k]<n)
  c=1;
  else c=0;
  return c;
  }
  
 int cont(int k)
 {int c=1;
 if(k>1 && x[k-1]>=x[k])
    c=0;
    return c;}
    
int solutie(int k)
{
int c=1;
if(k==p)
  c=1;
  else c=0;
  return c;
  }
  
void tipar(int k)
{
int i;
for(i=1;i<=k;i++)
    cout<<x[i]<<"  ";
    cout<<endl;}
    
void bkt()
{int k=1;
init(k);
while(k>0)
    {if(exista(k))
        {x[k]++;
        if(cont(k))
          if(solutie(k))
             tipar(k);
          else
              {k++;init(k);}}
    else k--;}
    }
    
void main()
{
citire();
cout<<" combinarile sunt ";
bkt();
}
  
  
