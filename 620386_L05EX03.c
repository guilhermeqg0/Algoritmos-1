/* ================================================================== *
    Universidade Federal de Sao Carlos - UFSCar, Sorocaba

    Disciplina: Algoritmos e Programação 1
    Prof. Tiago A. Almeida

    Lista 05 - Exercício 03 - Calculadora simples

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

// Frase exibida para operacao invalida (constante)
#define MSG_ERRO    "operacao nao reconhecida\n"


int main()
{
	float adicao, subtracao, multiplicacao, divisao, numero1, numero2;
	char o;

	scanf("%f %c %f", &numero1, &o, &numero2);


	if ((o != '+') && (o != '-') && (o != '*') && (o != '/')){ //Diferenciar os caracteres para não receber um estranho.

		printf(MSG_ERRO);}

	if (o == '+'){ //Opera a soma
	
	adicao = numero1 + numero2;
	printf("%.2f\n", adicao);}


	else if ( o == '-'){ //Opera a subtracao
	
	subtracao = numero1 - numero2;
	printf("%.2f\n", subtracao);}

	else if (o == '*'){ //Opera a multiplicacao

	multiplicacao = numero1 * numero2;
	printf("%.2f\n", multiplicacao);}

	else if ((o == '/') && (numero2 != 0)){ //Opera a divisão
 
	divisao = numero1 / numero2;

	printf("%.2f\n", divisao);}

	else if (numero2 == 0){ //Condição de divisão: não pode ser 0 em Numero2

	printf(MSG_ERRO);}

	return (0);
}    
