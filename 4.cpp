#include <stdio.h>
#include <stdlib.h>

int main() {
    int senha, senhaValida = 1234;

    printf("Digite sua senha: ");
    scanf("%d", &senha);

    while(senha != senhaValida){
        printf("Senha invalida!\n\nDigite sua senha: ");
        scanf("%d", &senha);
    }

    printf("Acesso permitido!\n");
}
