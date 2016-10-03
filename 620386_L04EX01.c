/* ================================================================== *
    Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 
    Disciplina: Algoritmos e Programação 1
    Prof. Tiago A. Almeida
 
    Lista 04 - Exercício 01 - Operações Aritméticas
 
    Instrucoes
    ----------
 
    Este arquivo contem o codigo que auxiliara no desenvolvimento do
    exercicio. Voce precisara completar as partes requisitadas.
 
* ================================================================== *
    Dados do aluno:
 
    RA: 620386
    Nome: Guilherme Quintal Gonçalves
 
* ================================================================== */
 
//Este programa recebe dois números e faz calculos de soma, subtração, multiplicação e divisão.

#include <stdio.h>

int main()
{

	float divisao1, divisao2;
	int qinteiro1, qinteiro2, resto1, resto2, numero1, numero2, soma, subtracao1, subtracao2, multiplicacao;
	scanf("%i", &numero1);
	scanf("%i", &numero2);

	soma = numero1 + numero2;

	subtracao1 = numero1 - numero2;

	subtracao2 = numero2 - numero1;

	multiplicacao = numero1 * numero2;

	divisao1 = (float)numero1 / numero2;

	divisao2 = (float)numero2 / numero1;

	qinteiro1 = numero1 / numero2;

	qinteiro2 = numero2 / numero1;

	resto1 = numero1 % numero2;

	resto2 = numero2 % numero1;

	printf("%i\n", soma);
	printf("%i\n", subtracao1);
	printf("%i\n", subtracao2);
	printf("%i\n", multiplicacao);
	printf("%.2f\n", divisao1);
	printf("%.2f\n", divisao2);
	printf("%i\n", qinteiro1);
	printf("%i\n", qinteiro2);
	printf("%i\n", resto1);
	printf("%i\n", resto2);

	return (0);
}
