#include<iostream.h>

int a,b;

int cmmdc(int a,int b)
{if(a==b)
    return a;
 else
    if(a>b)
      return cmmdc(a-b,b);
    else
      if(a<b)
         return cmmdc(a,b-a);}
         
 void main()
 {
 cout<<" dati a: ";
 cin>>a;
 cout<<"dati b: ";
 cin>>b;
 cout<<" cmmdc este: "<<cmmdc(a,b);}
         
