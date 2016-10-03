/* ================================================================== *
    Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 
    Disciplina: Algoritmos e Programação 1
    Prof. Tiago A. Almeida
 
    Lista 04 - Exercício 05 - Areas e volume do cilindro
 
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

#define PI 3.14159

//Este programa calcula a Área Lateral, Área da base, Área total e o volume de um cilindro.

int main ()
{

	float raio, altura, al, ab, at, v;

	scanf("%f", &raio);
	scanf("%f", &altura);

	//AREA LATERAL

	al = 2 * PI * raio * altura;

	printf("%.2f\n", al);

	//AREA DA BASE

	ab = PI * raio * raio;

	printf("%.2f\n", ab);

	//AREA TOTAL

	at = 2 * PI * raio * (altura + raio);

	printf("%.2f\n", at);

	//VOLUME

	v = PI * raio * raio * altura;

	printf("%.2f\n", v);

	return (0);
}
