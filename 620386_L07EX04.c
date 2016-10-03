/* ================================================================== *
	Universidade Federal de Sao Carlos - UFSCar, Sorocaba

	Disciplina: Algoritmos e Programação 1
	Prof. Tiago A. Almeida

	Lista 07 - Exercício 04 - Fatores primos

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

// Constantes Booleanas	- Não alterar
#define VERDADEIRO	1
#define FALSO		0

/* ================================================================== */
/* ======================== ROTINA PRINCIPAL ======================== */
/* ================================================================== */

int main()
{
       int numero, fatoresprimos, contador, primo, div, aux;

	aux = 0;
	
	while(1){

	if (aux == 0){

		do{      

       		scanf("%d", &numero);}

      		while(numero < 1 || numero >= 1000000000);}

	if (aux > 0){

		do{      

      		scanf("%d", &numero);}

       		while(numero < 0 || numero >= 1000000000);}

	aux = 1;

       fatoresprimos = 2;


		if (numero == 0){

			return(0);}

		if (numero == 1){

			printf("-1\n");}

      
       while (numero > 1){

             contador = 0;

                while (numero % fatoresprimos == 0){

                	contador++;

                        numero = numero / fatoresprimos;}

              			if (contador > 0)

              				printf("%d\n", fatoresprimos);

              				primo = 0;

                while (! primo) {

                       fatoresprimos++;

                       div = 2;

                       primo = 1;

                while (div <= fatoresprimos / 2 && primo) {


                	if (fatoresprimos % div == 0)

                            	primo = 0;
                        else
                            div++;
                 }
         }
     }

     }
}


