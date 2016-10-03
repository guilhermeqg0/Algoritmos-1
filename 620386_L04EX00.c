/* ================================================================== *
    Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 
    Disciplina: Algoritmos e Programação 1
    Prof. Tiago A. Almeida
 
    Lista 04 - Exercício 00 - Nota minima na P2 para atingir media M
 
    Instrucoes
    ----------
 
    Este arquivo contem o codigo que auxiliara no desenvolvimento do
    exercicio. Voce precisara completar as partes requisitadas.
 
* ================================================================== *
    Dados do aluno:
 
    RA: Guilherme Quintal Gonçalves
    Nome: 620386
 
* ================================================================== */
 
#include <stdio.h>

//Este programa calcula a nota que você deve tirar na P2 para atingir uma média M.

int main()
{

	float nota1, peso1, nota2, peso2, lista, pesolista, media;

	scanf("%f", &media);
	scanf("%f %f", &nota1, &peso1);
	scanf("%f %f", &lista, &pesolista);
	scanf("%f", &peso2);

	nota2 = (media * (peso1 + pesolista +peso2) - (peso1 * nota1) - (lista * pesolista)) / peso2 ;

	printf("%.1f\n", nota2);

	return (0);
}
	


