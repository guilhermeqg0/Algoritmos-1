/* ================================================================== *
    Universidade Federal de Sao Carlos - UFSCar, Sorocaba

    Disciplina: Algoritmos e Programação 1
    Prof. Tiago A. Almeida

    Lista 08 - Exercício 02 - Calculadora de números complexos

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


//Definindo a frase de opção inválida
#define FRASE_OPCAO_INVALIDA "Erro: Opção inválida!\n"

//Valores de controle
#define FALSE   0
#define TRUE    1

//Estrutura para armazenar os números complexos.

typedef struct Complexo{

    float partereal, parteimaginaria, real, imaginaria;

}Complexo;

/* ================================================================== */
/* ======================== ROTINA PRINCIPAL ======================== */
/* ================================================================== */

int main () {
    int opcao; //opção desejada do menu 
    int soma = 1, subtracao = 2, multiplicacao = 3, lerdenovo = 4, fechar = 5, aux;

    Complexo num1,   //primeiro número complexo
             num2,   //segundo número complexo
             result; //resultado das operações
              

    while(1){

        scanf("%f", &num1.partereal);
        scanf("%f", &num1.parteimaginaria);
        scanf("%f", &num2.partereal);
        scanf("%f", &num2.parteimaginaria);


        aux = TRUE;

            while(aux){

                scanf("%d", &opcao);

                    if (opcao == soma){

                        result.real = num1.partereal + num2.partereal;

                        result.imaginaria = num1.parteimaginaria + num2.parteimaginaria;

                        if (result.imaginaria >= 0){

                            printf ("%.2f+%.2fi\n", result.real, result.imaginaria);
                     
                       }


                        else{

                            printf("%.2f%.2fi\n", result.real, result.imaginaria);

                         }
                    }

                    if (opcao == subtracao){

                        result.real = num1.partereal - num2.partereal;

                        result.imaginaria = num1.parteimaginaria - num2.parteimaginaria;

                            if(result.imaginaria >= 0){

                                printf("%.2f+%.2fi\n", result.real, result.imaginaria);


                            }

                        else{

                        printf("%.2f%.2fi\n", result.real, result.imaginaria);



                        }
                    }

                    if (opcao == multiplicacao){

                        result.real = num1.partereal * num2.partereal + num1.parteimaginaria * num2.parteimaginaria;

                        result.imaginaria = num1.partereal * num2.parteimaginaria + num2.partereal * num1.parteimaginaria;

                            if(result.imaginaria >= 0){

                                printf("%.2f+%.2fi\n", result.real, result.imaginaria);


                            }

                            else {

                                printf("%.2f%.2fi\n", result.real, result.imaginaria);


                            }
                        }

                    if (opcao ==lerdenovo){

                        aux = FALSE;
                    }


                    if(opcao == fechar){

                        return(0);
                    }

                    if (opcao > 5 || opcao < 1){

                        printf(FRASE_OPCAO_INVALIDA);
                    }

            }



    }

    
    return 0;       
} 