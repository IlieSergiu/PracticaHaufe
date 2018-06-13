#include<iostream.h>

void main()
{
int n,i,a[50],s,c;
float m;
cout<<" Dati n=";
cin>>n;
cout<<"dati elementele ";
for(i=0;i<n;i++)
    {cout<<"a["<<i<<"]=";
    cin>>a[i];
    }
 
 cout<<"elementele vectorului sunt ";
 for(i=0;i<n;i++)
    cout<<a[i]<<"  ";
    cout<<endl;
    s=0;
 for(i=0;i<n;i++)
    s+=a[i];
    m=(float)s/n;
    Cout<<"Media aritmetica: "<<m;
    c=0;
    for(i=0;i<n;i++)
        if(a[i]>m)
            c++;
            cout<<c<<" elemente mai mari decat media ";
            }
    
