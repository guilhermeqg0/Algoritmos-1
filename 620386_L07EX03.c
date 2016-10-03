/* ================================================================== *
	Universidade Federal de Sao Carlos - UFSCar, Sorocaba

	Disciplina: Algoritmos e Programação 1
	Prof. Tiago A. Almeida

	Lista 07 - Exercício 03 - Pontuação da Maratona

	Instrucoes
	----------

	Este arquivo contem o codigo que auxiliara no desenvolvimento do
	exercicio. Voce precisara completar as partes requisitadas.

* ================================================================== *
	Dados do aluno:

	RA: 620386
	Nome: Guilherme Quintal Gonçalves

* ================================================================== */


#include<stdio.h>

int main()
{

	int submissoes, numerosubmissoes, resultado, problema, tempo, aux, aux2, aux3, aux4, aux5, pontuacao1, pontuacao2, pontuacao3, pontuacao4, pontuacao5, pontuacao, correto, correto1, correto2, correto3, correto4, correto5, subincorreta = 20;


	numerosubmissoes = 0; tempo = 0; pontuacao1 = 0; pontuacao2 = 0; pontuacao3 = 0; pontuacao4 = 0; pontuacao5 = 0;
	
	while(1){

		scanf("%d", &submissoes);

		if (submissoes == 0){

			return (0);}

	numerosubmissoes = 0; correto1 = 0; correto2 = 0; correto3 = 0; correto4 = 0; correto5 = 0; pontuacao1 = 0; pontuacao2 = 0; pontuacao3 = 0; pontuacao4 = 0; pontuacao5 = 0; aux = 0; aux2 = 0; aux3 = 0; aux4 = 0; aux5 = 0; pontuacao = 0;

		while (submissoes > numerosubmissoes){

			scanf("%d", &problema);
		
			numerosubmissoes++;

			scanf("%d", &tempo);
			scanf("%d", &resultado);


		problema > 0; problema <= 5;
		tempo >= 0; tempo <= 300;
		resultado == 0; //Incorreto
		resultado == 1; //Correto

		if (problema == 1){

			if (resultado == 0){

				aux = aux + subincorreta;
				correto1 = 0;
				pontuacao1 = 0;}

			else if (resultado == 1){

				correto1 = 1;
				pontuacao1 = aux + tempo;}

		}


		if (problema == 2){

			if (resultado == 0){

				aux2 = aux2 + subincorreta;
				correto2 = 0;
				pontuacao2 = 0;}

			else if (resultado == 1){

				correto2 = 1;
				pontuacao2 = aux2 + tempo;}

		}


		if (problema == 3){

			if (resultado == 0){

				aux3 = aux3 + subincorreta;
				correto3 = 0;
				pontuacao3 = 0;}

			else if (resultado == 1){

				correto3 = 1;
				pontuacao3 = aux3 + tempo;}

		}


		if (problema == 4){

			if (resultado == 0){

				aux4 = aux4 + subincorreta;
				correto4 = 0;
				pontuacao4 = 0;}

			else if (resultado == 1){

				correto4 = 1;
				pontuacao4 = aux4 + tempo;}

		}

		if (problema == 5){

			if (resultado == 0){
		
				aux5 = aux5 + subincorreta;
				correto5 = 0;
				pontuacao5 = 0;}

			else if (resultado == 1){

				correto5 = 1;
				pontuacao5 = aux5 + tempo;}

		}

        }

	correto = correto1 + correto2 + correto3 + correto4 + correto5;

	pontuacao = pontuacao1 + pontuacao2 + pontuacao3 + pontuacao4 + pontuacao5;

	printf("%d %d\n", correto, pontuacao);

	}

	return(0);
}

		

		
