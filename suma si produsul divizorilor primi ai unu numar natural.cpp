#include<iostream.h>

void main()
{
int n,s,p,i,j;
cout<<" dati n=";
cin>>n;
s=1;
p=1;
for(i=2;i<=n/2;i++)
    if(n%i==0)
      {j=2;
      while(j<=i/2 && i%j!=0)
            j++;
            if(j>i/2)
               {s+=i;
               p*=i;
               }
               }
 cout<<" suma divizorilor primi "<< s<< " produsul divizorilor primi "<<p;
 }
