#include<iostream.h>

class complex{
  double re,im;
public:
  complex(){}
  complex(double re0,double im0)
          {re=re0;
          im=im0;
          }

  double get_re(){return re;}
  double get_im(){return im;}
  void afisare()
  {cout<<"Partea reala: "<<get_re()<<endl;
  cout<<"Partea imaginara: "<<get_im()<<endl;
  
  complex operator+=(complex c2, complex c1)
  {re=c1.re+c2.re;
  im=c1.im+c2.im;
  return *this;}
  
  complex operator+(complex c)
    {complex c1;
    c1.re=re+c.re;
    c1.im=im+c.im;
    return c1;}
    
  complex operator-(complex c)
    {complex c1;
    c1.re=re-c.re;
    c1.im=im-c.im;
    return c1;
    }
    
  complex operator*(complex c)
    {complex c1;
    c1.re=re*c.re;
    c1.im=im*c.im;
    return c1;
    }
    };

int main()
{complex c1,c2(7,2),c3;
c1+=c2;
c1.afisare();
c1.get_re();
c1.get_im();
c3=c1+c2;
c3.afisare();
c3=c1-c2;
c3.afisare();
getch();
return 0;
}
