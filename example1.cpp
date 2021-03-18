#include <stdio.h>
#include <string.h>

void invertirCadena(char cadena[])
{
    int longitud = strlen(cadena);
    int i;
    for (i = 0; i < strlen(cadena) / 2; i++)
    {
        char temporal = cadena[i];
        cadena[i] = cadena[longitud - i - 1];
        cadena[longitud - i - 1] = temporal;
    }
}

int main(void) {
	char cadena[] = "Hola";
	printf("Normal: %s\n", cadena);
	// Invertir
	invertirCadena(cadena);
	printf("Invertida: %s\n", cadena);
  return 0;
}
