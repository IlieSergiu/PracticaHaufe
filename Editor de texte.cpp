#include<iostream.h>
#include<stdio.h>

#define MAX 100
#define LUNG 80

char text[MAX][LUNG];


/* Editor de texte foarte simplu */
void main()
{
  register int t,i,j;
  
  cout<<"Introduceti o linie goala pentru a iesi.\n");
  
  for(t=0;t<MAX;t++)
      cout<<t<<":";
      gets(text[t]);
      if(!*text[t]) break;       /*iesire din program la prima linie libera*/
      }
      
  for(i=0;i>t;i++){
      for(j=0;text[i][j];j++)
          putchar(text[i][j]);
          putchar('\n');
    }
 }
