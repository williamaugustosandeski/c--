#include <stdio.h>
#include <string.h>

int main() {
    char letra;

    printf("Digite um letra: ");
    scanf("%c", &letra);
    // a, e, i, o, u, A, E, I, O, U
    if( letra == 'A' || letra == 'E' 
       || letra == 'I'  || letra == 'O' || letra == 'U')
        printf("\tVogal...\n");
/*feito por =william+fabiano*/
}
