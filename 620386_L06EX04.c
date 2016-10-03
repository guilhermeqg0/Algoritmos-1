/* ================================================================== *
   Universidade Federal de Sao Carlos - UFSCar, Sorocaba

   Disciplina: Algoritmos e Programação 1
   Prof. Tiago A. Almeida

   Lista 06 - Exercício 04 - Casa de Cambio

   Instrucoes
   ----------

   Este arquivo contem o codigo que auxiliara no desenvolvimento do
   exercicio. Voce precisara completar as partes requisitadas.

* ================================================================== *
   Dados do aluno:

   RA: 620386
   Nome: Guilherme Quintal Gonçalves 

* ================================================================== */

#include <math.h>
#include <stdio.h>

int main()

{
    float valor, taxa, total = 0, aux = 0;
    int nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0, moeda1 = 0, moeda50 = 0, moeda25 = 0, moeda10 = 0, moeda05 = 0, moeda01 = 0;

	while(1){
	
    scanf("%f", &valor);

	if (valor == 0){
		
		return(0);}

    scanf("%f", &taxa);


    total = valor * taxa;
    aux = total;
    

	printf("Valor: %.2f\n", valor);
     	printf("Cambio: %.2f\n", taxa);
    	printf("Total: %.2f\n", total);


        while(aux>=100){
            aux = aux - 100;
            nota100 = nota100 + 1;}

        while(aux>=50){
            aux = aux - 50;
            nota50 = nota50 + 1;}
 

        while(aux>=20){
            aux = aux - 20;
            nota20 = nota20 + 1;}
    
        while(aux>=10){
            aux = aux - 10;
            nota10 = nota10 + 1;}

        while(aux>=5){
            aux = aux - 5;
            nota5 = nota5 + 1;}

        while(aux>=2){
            aux = aux - 2;
            nota2 = nota2 + 1;}

        aux = aux * 100;

	aux = round(aux);
    
        while(aux>=100){
            aux = aux - 100;
            moeda1 = moeda1 + 1;}

	
        while(aux>=50){
            aux = aux - 50;
            moeda50 = moeda50 + 1;}

        while(aux>=25){
            aux = aux - 25;
            moeda25 = moeda25 + 1;}

        while(aux>=10){
            aux = aux - 10;
            moeda10 = moeda10 + 1;}

	while(aux>=5){
	    aux = aux - 5;
	    moeda05 = moeda05 + 1;}

    
        while(aux>=1){
            aux = aux - 1;
            moeda01 = moeda01 + 1;}



    if(nota100>0){
        printf("100,00: %d\n", nota100);
	nota100 = 0;}

    if (nota50>0){
        printf("50,00: %d\n", nota50);
	nota50 = 0;}

    if(nota20>0){
        printf("20,00: %d\n", nota20);
	nota20 = 0;}

    if(nota10>0){
        printf("10,00: %d\n", nota10);
	nota10 = 0;}	

    if(nota5>0){
        printf("5,00: %d\n", nota5);
	nota5 = 0;}

    if(nota2>0){
        printf("2,00: %d\n", nota2);
	nota2 = 0;}

    if(moeda1>0){
        printf("1,00: %d\n", moeda1);
	moeda1 = 0;}

    if(moeda50>0){
        printf("0,50: %d\n", moeda50);
	moeda50 = 0;}

    if(moeda25>0){
        printf("0,25: %d\n", moeda25);
	moeda25 = 0;}

    if(moeda10>0){
        printf("0,10: %d\n", moeda10);
	moeda10 = 0;}

    if(moeda05>0){
	printf("0,05: %d\n", moeda05);
	moeda05 = 0;}

    if(moeda01>0){
        printf("0,01: %d\n", moeda01);
	moeda01 = 0;}

}

}
   
