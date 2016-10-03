/* ================================================================== *
    Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 
    Disciplina: Algoritmos e Programação 1
    Prof. Tiago A. Almeida
 
    Lista 04 - Exercício 02 - Rendimento e Valor Total
 
    Instrucoes
    ----------
 
    Este arquivo contem o codigo que auxiliara no desenvolvimento do
    exercicio. Voce precisara completar as partes requisitadas.
 
* ================================================================== *
    Dados do aluno:
 
    RA: 620386
    Nome: Guilherme Quintal Gonçalves
 
* ================================================================== */

//Este programa recebe o valor de um depósito e uma taxa de juros e calcula o rendimento e o valor após o rendimento.

#include <stdio.h>

int main()
{

	float deposito, taxajuros, vrendimento, vtrendimento;

	scanf("%f", &deposito);
	scanf("%f", &taxajuros);

	vrendimento = deposito * (taxajuros / 100);

	printf("%8.2f\n", vrendimento);

	vtrendimento = vrendimento + deposito;

	printf("%8.2f\n", vtrendimento);

	return (0);
}



