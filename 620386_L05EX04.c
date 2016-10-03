/* ================================================================== *
    Universidade Federal de Sao Carlos - UFSCar, Sorocaba

    Disciplina: Algoritmos e Programação 1
    Prof. Tiago A. Almeida

    Lista 05 - Exercício 04 - Data mais antiga

    Instrucoes
    ----------

    Este arquivo contem o codigo que auxiliara no desenvolvimento do
    exercicio. Voce precisara completar as partes requisitadas.

* ================================================================== *
    Dados do aluno:

    RA: 620386
    Nome: Guilherme Quintal Gonçalves

* ================================================================== */


//Este programa recebe duas datas e imprime a data mais recente.

#include <stdio.h>

int main ()
{

	int dia, mes, ano, dia2, mes2, ano2;

	scanf("%d/%d/%d", &dia, &mes, &ano);
	scanf("%d/%d/%d", &dia2,&mes2, &ano2); 
	

	if (ano > ano2){
		printf("%02d/%02d/%04d\n", dia2, mes2, ano2);}

	else if (ano2 > ano){
		printf("%02d/%02d/%04d\n", dia, mes, ano);}

	else if (ano == ano2){
	
	if (mes < mes2){
		printf("%02d/%02d/%04d", dia, mes, ano);}

	if (mes > mes2){
		printf("%02d/%02d/%04d\n", dia2, mes2, ano2);}
	
	else if (mes == mes2){

	if (dia > dia2){
		printf("%02d/%02d/%04d\n", dia2, mes2, ano2);}

	if (dia < dia2){
		printf("%02d/%02d/%04d", dia, mes, ano);}

	else if ((dia == dia2) && (mes == mes2) && (ano == ano2)){
		printf("%02d/%02d/%04d\n", dia, mes, ano);}

	}
	}

	return (0);
}
