#include<iostream.h>
#include<ctype.h>
#include<stdlib.h>

/*baza de date pentru notele studentilor */

#define CLASE 3
#define NOTE 30

int note[CLASE][NOTE];

void introd_nore();
int preia_note(int num);
void afis_note(int g[][NOTE]);

void main()
{
char ch,sir[80];

for(;;){

    do{
    
      cout<<"(I)ntroduceti notele \n";
      cout<<"(P)rezinta notele \n";
      cout<<"(Q)uit \n";
      gets(sir);
      ch=mari(*sir);
      }while(ch!='E' && ch!='R' && ch!='Q');
      
    switch(ch){
        case 'E':
            introd_note();
            break;
        case 'R':
            afis_note(note);
            break;
        case 'Q':
            iesire(0);
            }
            
      }      
      }
      
   /* introduceti notele*/
   
void introd_note()
{
int t,i;
for(t=0;t<CLASE;t++)
    {cout<<"Clasa "<<t+1<<" :\n";
    for(i=0;i<NOTE;++i)
        note[t][i]=preia_note(i);
        
        }
        }
 /*Citeste note*/
 
preia_note(int num)
{
  char s[80];
  cout<<"introduceti nota pentru studentul #"<<num+1<<":\n";
  gets(s);
  return (atoi(s));
  }
  
 /*afiseaza notele*/
 
 void afis_note(int g[][NOTE])
 {
 int t,i;
 for(t=0;t<CLASE;++t)
    cout<<"Clase #"<<t+1<<":\n";
    for(i=0;i<NOTE;++i)
    cout<<"Studentul #"<<i+1<<" are notele "<<g[t][i];
    }
    }
      
