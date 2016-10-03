/* ================================================================== *
  Universidade Federal de Sao Carlos - UFSCar, Sorocaba

  Disciplina: Algoritmos e Programação 1
  Prof. Tiago A. Almeida

  Lista 07 - Exercício 02 - Progressão geometrica

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

int main()
{

	double primeirotermo, aux, termon, razao, i, nada;

	scanf("%lf", &primeirotermo);
	scanf("%lf", &razao);

	aux = primeirotermo;
	
	while(1){

		
		scanf("%lf", &termon);

		if (termon == 0){
		
			return(0);}

	termon--;

	for (i = 0 ; i < termon ; i++ ){

		primeirotermo = primeirotermo * razao;}
	
	printf("%.2lf\n", primeirotermo);
	primeirotermo = aux;}

	

}
