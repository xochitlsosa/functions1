#include <stdio.h>
#include <string.h>
 
char a []={"Pepito"};
char b []={"pepita"};
int i, diferencias=0;
 
 
 int main(){
 
	if (strlen (a)>strlen (b))
		printf ("la cadena 'b' es más corta que la cadena 'a'");
	else  if (strlen (a)<strlen (b))
    	printf ("la cadena 'a' es más corta que la cadena 'b'");
	else {
   		for(i=0;i <strlen(a);i++){
    		if(a[i] != b [i]){
         	diferencias++;
         	printf("son diferentes en la posicion %i\n", i);
      	}
   }
   	if(diferencias > 0)
      return 0;
   	else
      printf ("las cadenas son iguales\n");
}

}
