/* ================================================================== *
    Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 
    Disciplina: Algoritmos e Programação 1
    Prof. Tiago A. Almeida
 
    Lista 04 - Exercício 03 - Número Fracionário
 
    Instrucoes
    ----------
 
    Este arquivo contem o codigo que auxiliara no desenvolvimento do
    exercicio. Voce precisara completar as partes requisitadas.
 
* ================================================================== *
    Dados do aluno:
 
    RA: 620386
    Nome: Guilherme Quintal Gonçalves
 
* ================================================================== */


//Este programa recebe um número fracionario e exibe a parte inteira e a parte fracionaria.

#include <stdio.h>

int main()
{

	float numero, operacao;

	scanf("%f", &numero);

	operacao = numero - (int)numero;

	printf("%.0f\n", numero); //Inteira
	printf("%.2f\n", operacao); //Fracionaria

	return (0);
}
