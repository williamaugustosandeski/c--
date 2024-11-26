#include <stdio.h>
#include <stdlib.h>

int main() {
    int nacimento, atural = 2022, res;

    printf("nacimento: ");
    scanf("%d", &nacimento);
    
    res = atural - nacimento;

   if  (res >= 16){
	
    printf("voce pode votar!\n");
    
	}
	else if(res <= 16){
	
	printf("voce nao podera votar\n");
	}
return 0;
}
