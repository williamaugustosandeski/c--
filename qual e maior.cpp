#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero1, numero2;
    printf("digite o primeiro numero: ");
    scanf("%d", &numero1);
    
    printf("digite o segundo numero: ");
    scanf("%d", &numero2);
    
    if(numero1 > numero2){
    	printf("%d\nprimeiro numero e menor");
	}
	else if(numero1 < numero2){
	
	printf("%d\nsegundo numero e menor");
	}
return 0;
}
