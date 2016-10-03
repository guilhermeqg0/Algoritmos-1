/* ================================================================== *
	Universidade Federal de Sao Carlos - UFSCar, Sorocaba

	Disciplina: Algoritmos e Programação 1
	Prof. Tiago A. Almeida

	Lista 05 - Exercício 02 - Indice de Massa Corporal

	Instrucoes
	----------

	Este arquivo contem o codigo que auxiliara no desenvolvimento do
	exercicio. Voce precisara completar as partes requisitadas.

* ================================================================== *
	Dados do aluno:

	RA: 620386
	Nome: Guilherme Quintal Gonçalves

* ================================================================== */

#include <stdio.h>

// Frase exibida para os possiveis resultados (constantes)
#define FRASE_ABAIXO	"abaixo\n"
#define FRASE_NORMAL	"normal\n"
#define FRASE_ACIMA		"acima\n"

// Frase exibida se o sexo informado for incorreto (diferente de 'F', 'f', 'M' ou 'm')
#define FRASE_SEXO_INCORRETO	"sexo incorreto\n"


int main()
{
	float peso, altura, imc;
	char s;
	
	scanf("%c", &s);
	scanf("%f", &peso);
	scanf("%f", &altura);
				
	imc = peso / (altura * altura);
	
	if (s == 'F'|| s == 'f'){
		
	if (imc < 20){
		
		printf("%.2f\n", imc);
		printf(FRASE_ABAIXO);}
		
		
	else if ((imc >= 20) && (imc <=24)){
	
		printf("%.2f\n", imc);	
		printf(FRASE_NORMAL);}
			
	else if(imc>24){
		
		printf("%.2f\n", imc);
		printf(FRASE_ACIMA);
}
}
	else if ((s == 'M') || (s == 'm'))	{
		
	if (imc < 20){
	
	        printf("%.2f\n", imc);
		printf(FRASE_ABAIXO);}
		
	else if ((imc >= 20) && (imc <=23)){
	
		printf("%.2f\n", imc);
		printf(FRASE_NORMAL);}

	else if(imc>23){
	
		printf("%.2f\n", imc);
		printf(FRASE_ACIMA);
}
}
	else{
		printf(FRASE_SEXO_INCORRETO);}
		
	return (0);
}

