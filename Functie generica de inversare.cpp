#include<iostream.h>

template<class x>void inloc(x &a, x &b)
{x temp;
temp=a;
a=b;
b=temp;
}

int main()
{
int i=10,j=20;
float x=10.1,y=23.3;
char a='x',b='z';
cout<<"i,j originali: "<<i<<"  "<<j<<endl;
cout<<"x,y: "<<x<<"  "<<y<<endl;
cout<<"a,b: "<<a<<"   <<b<<endl;
incloc(i,j);
inloc(x,y);
inloc(a,b);
cout<<"i,j inversati: "<<i<<"  "<<j<<endl;
cout<<"x,y inversati: "<<x<<"  "<<y<<endl;
cout<<"a,b inversati: "<<a<<"  "<<b<<endl;
return 0;
}
