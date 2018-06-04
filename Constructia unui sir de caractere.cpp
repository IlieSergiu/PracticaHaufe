#include<iostream.h>
#include<string.h>

struct sirulmeu{
  void facesir(char,*s);
  void aratasir();
private:
  char sir[255];
  };
 
void sirulmeu::facesir(char *s)
{if(!*s) *sir='\0';
else strcat(sir,s);

}

void sirulmeu::aratasir()
{
cout<<sir<<"\n";
}

main()
{
sirulmeu s;
s.facesir("  ");
s.facesir("Va ");
s.facesir("salut! ");
s.aratasir();
return 0;
}
  
