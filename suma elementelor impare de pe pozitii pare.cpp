#include<iostream.h>

void main()
{
int n,i,a[50],s;
cout<<" dati n=";
cin>>n;
cout<<" Dati elementele ";
for(i=0;i<n;i++)
    {cout<<"a["<<i<<"]=";
    cin>>a[i];}
    
cout<<"elementele vectorului sunt ";
for(i=0;i<n;i++)
    cout<<a[i]<<"  ";
    cout<<endl;
s=0;
for(i=0;i<n;i+=2)
    if(a[i]%2!=0)
      s+=a[i];
      cout<<"suma elemntelor impare de pe poziti pare "<<s;
      }
    
