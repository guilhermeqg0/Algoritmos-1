/* ================================================================== *
    Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 
    Disciplina: Algoritmos e Programação 1
    Prof. Tiago A. Almeida
 
    Lista 04 - Exercício 04 - Area do setor circular
 
    Instrucoes
    ----------
 
    Este arquivo contem o codigo que auxiliara no desenvolvimento do
    exercicio. Voce precisara completar as partes requisitadas.
 
* ================================================================== *
    Dados do aluno:
 
    RA: 620386
    Nome: Guiherme Quintal Gonçalves
 
* ================================================================== */

#include <stdio.h>

#define PI 3.141519

//Este programa calcula a área do setor circular em graus e dadianos.

int main()
{

	float raio, angulo, areag, arear;

	scanf("%f", &raio);
	scanf("%f", &angulo);

	//EM GRAUS

	areag = PI * raio * raio * angulo / 360;

	printf("%.2f\n", areag);

	//EM RADIANOS

	arear = raio * raio * angulo / 2;

	printf("%.2f\n", arear);

	return (0);
}
