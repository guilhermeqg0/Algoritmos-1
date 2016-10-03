#include <stdio.h>

int main()
{

	long int numero, soma;

	while(1){
	
	soma = 0;

	scanf("%ld", &numero);	
				
	if (numero == 0){

		return (0);}


	while (1){

		printf("%ld", numero % 10);

		soma = soma + numero % 10;
		numero = numero / 10;

		if(numero==0){

		break;}
			
		}

		printf("\n%ld\n", soma);}
	
}
