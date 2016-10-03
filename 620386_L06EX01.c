/* ================================================================== *
	Universidade Federal de Sao Carlos - UFSCar, Sorocaba

	Disciplina: Algoritmos e Programação 1
	Prof. Tiago A. Almeida

	Lista 06 - Exercício 01 - Fatorial

	Instrucoes
	----------

	Este arquivo contem o codigo que auxiliara no desenvolvimento do
	exercicio. Voce precisara completar as partes requisitadas.

* ================================================================== *
	Dados do aluno:

	RA: 620386	
	Nome: Guilherme Quintal Gonçalves

* ================================================================== */


//Este programa recebe um número natural entre 0 e 100 e imprime o seu fatorial.

#include <stdio.h>

int main()
{

	double n, aux;

	scanf("%lf", &n);

	aux = n - 1;

	if((n == 0) && (n == 1)){

		printf ("1\n");}

	else {

	while (aux != 0){
	
	
	n = n * aux;
	aux = aux - 1;}

	printf("%.0lf\n", n);}
		
	return(0);
}

		

		
