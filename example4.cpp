#include <stdio.h>
#include <string.h>
#define TAMANIO 81
 

void Introducir_frase (char frase[])
 {
 printf ("introducir una frase: ");
 gets (frase); fflush (stdin);
 }
 
int Comprobar_frase (char frase[])
 {
 int longitud=strlen(frase);
 int i=0;
 while (i<=longitud/2 && frase[i]==frase[longitud-1-i])
  {
  i++;
  }
 if (i>longitud/2)
   return 1;
   else
   return 0;
}
 

int main (void)
{
char palindroma[81];
Introducir_frase (palindroma);
if (Comprobar_frase (palindroma))
 printf ("1");
else
  printf ("0");
getchar();
return 0;
}
 
