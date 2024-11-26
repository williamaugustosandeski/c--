#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define User "Pedrin"
 int main(){
    char Pass[20];
    char userLogin[20], passLogin[20];
    int cod_filme, cod_combo;
    float soma;
    int noLogin = 0;
        printf("Bem vindo\n"); printf("ao meu mercadinho \n") ;Pass[20] == ('1','2','3');
            while (!noLogin){
                printf("Acesso de admin, qual seu usario?");
                gets(userLogin);
                printf("Ok, agora sua senha: ");
                gets(passLogin);
                    if (strcmp(User,userLogin)==0) {
                            noLogin = 1;
                    }else{
                        printf("FAIL \n");
                    }
            }
    printf("Esolha seu filme: ");
    scanf("%d",&cod_filme);

    switch (cod_filme) {
        case 100:
        soma = 1.2;
    break;

    case 101:
        soma = 1.3;
    break;
    default:

    printf("Código não e valida!");
    break;
}
printf("Escolha combo: ");
    scanf("%d",&cod_combo);
    
        switch (cod_combo) {
            case 200:
            soma = soma + 1.2;
            break;

            case 201:
            soma = soma + 1.5;
            break;
            default:
            printf("Código não e valida!");
             break;
        }
 
printf("seu pedido ficou no valor de: %.2f",soma);
printf("\n");
return 0;
}
