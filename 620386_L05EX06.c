/* ================================================================== *
    Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 
    Disciplina: Algoritmos e Programação 1
    Prof. Tiago A. Almeida
 
    Lista 05 - Exercício 06 - Salario a receber
 
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

	float salariominimo, horast, ndependentes, horaextra, hora_trabalhada, salariomes, dependentes, salariobruto, salarioliquido, impostorenda, valorhoraextra;
	
	scanf("%f", &salariominimo);
	scanf("%f", &horast);
	scanf("%f", &ndependentes);
	scanf("%f", &horaextra);
	
	hora_trabalhada = (salariominimo / 5);
	salariomes = horast * hora_trabalhada;
	dependentes = ndependentes * 32;
	valorhoraextra = hora_trabalhada * 1.50;
	valorhoraextra = valorhoraextra * horaextra;
	salariobruto = salariomes + dependentes + valorhoraextra;
	
	if (salariobruto < 700){
		
		salariobruto = salariobruto;}
		
	
	else if ((salariobruto >= 700) && (salariobruto <= 1100)){
	
		salariobruto = salariobruto * 0.9;}	
		
	if (salariobruto > 1100){
	
		salariobruto = salariobruto * 0.8;}
	
			
	if (salariobruto <= 950){
	
		salariobruto = salariobruto + 100;
		
		printf("%.2f\n", salariobruto);}
		
	else
	{
		salariobruto = salariobruto + 50;
		
		printf("%.2f\n", salariobruto);
	}	
	return (0);
}
