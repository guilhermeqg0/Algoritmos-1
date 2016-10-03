/* ================================================================== *
    Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 
    Disciplina: Algoritmos e Programação 1
    Prof. Tiago A. Almeida
 
    Lista 05 - Exercício 05 - Obrigatoriedade do voto
 
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
 
// Frase exibida para os possiveis resultados (constantes)
#define FRASE_NAOVOTA		"nao pode votar\n"
#define FRASE_FACULTATIVO	"voto facultativo\n"
#define FRASE_OBRIGATORIO	"voto obrigatorio\n"


int main()
{

	int idade1, idade2, idade3, idade4, idade5;

	scanf("%i", &idade1);
	scanf("%i", &idade2);
	scanf("%i", &idade3);
	scanf("%i", &idade4);
	scanf("%i", &idade5);

	if (idade1 < 16){ //Para idades que não podem votar
		printf(FRASE_NAOVOTA);}

	if ((idade1 == 16) || (idade1 == 17) || (idade1 > 70)){ //Para idades de voto facultativo
		printf(FRASE_FACULTATIVO);}

	if((idade1 > 17) && (idade1 <= 70)){ //Para idades de voto obrigatorio
		printf(FRASE_OBRIGATORIO);}

				
	
	if (idade2 < 16){ //Não pode votar
		printf(FRASE_NAOVOTA);}

	if ((idade2 == 16) || (idade2 == 17) || (idade2 > 70)){ //Facultativo
		printf(FRASE_FACULTATIVO);}

	if ((idade2 > 18) && (idade2 <= 70)){ //Obrigatorio
		printf(FRASE_OBRIGATORIO);}



	if (idade3 < 16){ //Não pode votar
		printf(FRASE_NAOVOTA);}

	if ((idade3 ==16) || (idade3 == 17) || (idade3 >70)){ //Facultativo
		printf(FRASE_FACULTATIVO);}

	if ((idade3 > 17) && (idade3 <= 70)){ //Obrigatorio
		printf(FRASE_OBRIGATORIO);}



	if (idade4 < 16){ //Não pode votar
		printf(FRASE_NAOVOTA);}

	if ((idade4 == 16) || (idade4 == 17) || (idade4 > 70)){ //Facultativo
		printf(FRASE_FACULTATIVO);}

	if ((idade4 > 17) && (idade4 <= 70)){ //Obrigatorio
		printf(FRASE_OBRIGATORIO);}



	if (idade5 < 16){ //Não pode votar
		printf(FRASE_NAOVOTA);}

	if ((idade5 == 16) || (idade5 == 17) || (idade5 > 70)){ //Facultativo
		printf(FRASE_FACULTATIVO);}

	if ((idade5 > 17) && (idade5 <= 70)){ //Obrigatorio
		printf(FRASE_OBRIGATORIO);}


	return (0);
}
