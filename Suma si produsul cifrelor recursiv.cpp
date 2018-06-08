#include<iostreamh>

long int n1,n;

long int p(long int n1)
{
if(n1==n)
  return 1;
  else  return p(n1/10)*(n1%10);}
  
long int S(long int n)
{
if(n==0)
  return o;
else
  {if((n%10)%2==0)
      return S(n/10)+(n%10);
      else return S(n/10);}}
      
void main()
{
cout<<" dati n: ";
cin>>n;
n1=n;
cout<<"  produsul este "<<p(n1);
cout<<"  suma cifrelor pare este: "<<S(n);}

      
