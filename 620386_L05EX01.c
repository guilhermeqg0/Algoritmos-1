 /* ================================================================== *
	Universidade Federal de Sao Carlos - UFSCar, Sorocaba

	Disciplina: Algoritmos e Programação 1
	Prof. Tiago A. Almeida

	Lista 05 - Exercício 01 - Classes Sociais

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

// Contantes usadas para definir classes sociais
#define CLASSE_A	9745.00
#define CLASSE_B	7475.01
#define CLASSE_C	1734.01
#define CLASSE_D	1085.01


int main()
{

//Este programa recebe a renda de uma pessoa e, de acordo com a tabela, mostra qual a Classe Social.

	float renda;
	char a = 'A', b = 'B', c = 'C', d = 'D', e = 'E';
	 
	scanf("%f", &renda);
	
	if (renda > CLASSE_A){ //Identifica se a renda recebida é maior ou igual a 9745.00
	
		printf("%c\n", a);}
		
	else if (renda > CLASSE_B){ //Identifica se a renda recebida é maior ou igual a 7475.00
		
		printf("%c\n", b);}
		
	else if (renda > CLASSE_C){ //Identifica se a renda recebida é maior ou igual a 1734.01
		
		printf("%c\n", c);}
		
	else if (renda > CLASSE_D){ //Identifica se a renda recebida é maior ou igual a 1085.01
	
		printf("%c\n", d);}
		
	else
	
		printf("%c\n", e); //Identifica se a renda recebida é menor que 1085.01
		
	return (0);
}
