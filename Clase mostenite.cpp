#include<iostream.h>

class numar{
protected:
    int val;
public:
    void puneval(int i){
    val=i;}
    virtual void arata()=0;
};

class tiphex:public numar{
public:
  void arata(){
  cout<<hex<<val<<"\n";
  }
  };
  
class tipdec:public numar{
public:
  void arata(){
  cout<<val<<"\n";
  }
  };
 
class tipoct:public numar{
public:
  void arata(){
  cout<<oct<<val<<"\n";
  }
  };
  
main()
{
tipdec d;
tiphex h;
tipoct o;

d.puneval(20);
d.arata();

h.puneval(20);
h.arata();

o.puneval(20);
o.arata();

return 0;
}
  


  
  
  
    
