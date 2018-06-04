#include<iostream.h>

class clasamea{
  int a,b;
public:
  friend int sum(clasamea x)
  void da_ab(int i,int j);
  };
  
void clasamea::da_ab(int i,int j)
{a=i;b=j;}

int sum(clasamea x)
{return x.a+x.b;}

main()
{
clasamea n;
n.da_ab(3,4);
cout<<sum(n);
return 0;
}
