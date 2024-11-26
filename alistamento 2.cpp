#include <stdio.h>
int main(){
	
  int nome,sexo,idade;
 
  idade= 1;
    while (idade != 0) 
  {
  	printf("qual seu nome:");
  	scanf("%s",&nome);
  	
  	printf("Digite seu sexo (f ou m): ");
	scanf("%s", &sexo);
	
 	printf("digite sua idade:");
 	scanf("%d", &idade);
	
	if(sexo == 'm' && idade == 18){
	
  		printf("Alistamento obrigatorio!\n");
	}else{
	
 		 printf("Dispensado!\n");
 		 
  
  return 0;
}

}
}
