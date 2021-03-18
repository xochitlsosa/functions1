#include <stdio.h> 
#include <ctype.h> 



int esVocal(char letra) {
  
    char letraEnMayuscula = (char) toupper(letra);
    return letraEnMayuscula == 'A' ||
           letraEnMayuscula == 'E' ||
           letraEnMayuscula == 'I' ||
           letraEnMayuscula == 'O' ||
           letraEnMayuscula == 'U';
}

int contarConsonantes(char cadena[]) {
    int consonantes = 0;// Almacenar la cantidad de consonantes
    int i = 0;// El índice para recorrer la cadena
    while (cadena[i]) {
        // Si es del alfabeto pero no es vocal
        if (isalpha(cadena[i]) && !esVocal(cadena[i])) {
            consonantes++;
          
        }
        i++;
    }
    return consonantes;
}

int main() {
    char cadena[] = "Hugo";
    int consonantes = contarConsonantes(cadena);
    printf("La cadena '%s' \ntiene %d consonantes", cadena, consonantes);
    return 0;
}
