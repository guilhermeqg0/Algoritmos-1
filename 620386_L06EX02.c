/* ================================================================== *
	Universidade Federal de Sao Carlos - UFSCar, Sorocaba

	Disciplina: Algoritmos e Programação 1
	Prof. Tiago A. Almeida

	Lista 06 - Exercício 02 - Conjectura de Collatz

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

//O programa recebe um número n, joga na conjectura de Collatz e mostra sua sequência até o final ser o número 1.

int main()
{

	int n;

	while (1){

	scanf("%d", &n);

	
	if (n == 0){

		return(0);}

	if (n == 1){

	printf("%d ", n);			

			n = 3 * n + 1;}


	while (n != 1){

		if (n % 2 == 0){
			
			printf("%d ", n);

			n = n / 2;}
		else{ 

			printf("%d ", n);			

			n = 3 * n + 1;}

	}

	printf("%d \n", n);
	}

	}

