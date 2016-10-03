/* ================================================================== *
	Universidade Federal de Sao Carlos - UFSCar, Sorocaba

	Disciplina: Algoritmos e Programação 1
	Prof. Tiago A. Almeida

	Lista 07 - Exercício 01 - Brincadeira

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

// Frase padrao de saida. Use essa constante na saida do programa.
#define	SAIDA "Alice ganhou %d e Beto ganhou %d\n"


/* ================================================================== */
/* ======================== ROTINA PRINCIPAL ======================== */
/* ================================================================== */


int main()
{

	int jogos, resultados, listaresultados, alice, beto;

	listaresultados = 0;
	alice = 0;
	beto = 0;

	while (1){
	
		scanf("%d", &jogos);

		if (jogos == 0){

		return(0);}
	

	
	while (jogos > listaresultados){

		scanf("%d", &resultados);

		listaresultados = (jogos / jogos) + listaresultados;

			if (resultados == 0){
		
				alice++;}

			if (resultados > 0){

				beto++;}

	}

	printf(SAIDA, alice, beto);

	alice = 0;
	beto = 0;
	listaresultados = 0;
	
	}
}

