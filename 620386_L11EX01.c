/* ================================================================== *
	Universidade Federal de Sao Carlos - UFSCar, Sorocaba

	Disciplina: Algoritmos e Programação 1
	Prof. Tiago A. Almeida

	Lista 11 - Exercício 01 - Funcoes e Procedimentos

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
#include <math.h>


// Enumeração das opções do menu.
enum opcoes{
	OPC_SAIR,
	OPC_FIBONACCI_1, 	// Exibir o n1-ésimo elemento da sequência Fibonacci
	OPC_FIBONACCI_2, 	// Exibir o n2-ésimo elemento da sequência Fibonacci
	OPC_FATORIAL_1,		// Exibir o fatorial de n1
	OPC_FATORIAL_2,		// Exibir o fatorial de n2
	OPC_POTENCIA,		// Exibir o resultado da potência (n1)^n2
	OPC_SOMAPARES,		// Exibir a soma de todos os números pares entre n1 e n2
	OPC_SOMAIMPARES,	// Exibir a soma de todos os números ímpares entre n1 e n2
	OPC_SOMAPRIMOS,		// Exibir a soma de todos os números primos entre n1 e n2
	OPC_MAIORPRIMO,		// Exibir o maior primo existente entre n1 e n2
	OPC_MMC,			// Exibir o valor do mínimo múltiplo comum (mmc) entre n1 e n2
	OPC_MDC,			// Exibir o valor do máximo divisor comum (mdc) entre n1 e n2
	OPC_DESVIOPADRAO,	// Exibir o desvio padrão dos valores entre n1 e n2
	OPC_COMBINACAO,		// Exibir a combinação C(n1,n2)
	OPC_MEDIAHARMONICA,	// Exibir a media harmonica dos valores entre n1 e n2
	OPC_COEFICIENTEVARIACAO // Exibir o coeficiente de variacao dos valores entre n1 e n2
};


/* ---------------------- */
/* DECLARACAO DAS FUNCOES */
/* ---------------------- */

int fibonacci (int n1);
int fibonacci2 (int n2);
long fatorial (int n1);
long fatorial2 (int n2);
double potencia (int n1, int n2);
int SomaDosPares (int n1, int n2);
int SomaDosImpares (int n1, int n2);
int MaiorNumeroPrimo (int n1, int n2);
int mmc1 (int n1, int n2);
int MDC (int n1, int n2);


float MediaHarmonica (int n1, int n2);



/* ------------------------------ */
/* ROTINA PRINCIPAL				  */
/* ------------------------------ */
int main(){
	int n1, n2, //Armazenam os números n1 e n2 para os cálculos.
		opc; 	//Armazena a última opção selecionada pelo usuário.

	scanf("%d %d", &n1, &n2); //Lê os valores n1 e n2.
	scanf("%d", &opc);		  //Lê a opção do usuário.

	//Repete enquanto o usuário não selecionar a opção 0 - Sair.
	while(opc != OPC_SAIR){

		//Imprime o resultado de acordo com a opção selecionada.
		switch(opc){
			//-----------------------------------------------------------
			case OPC_FIBONACCI_1:
				printf("%d\n", fibonacci(n1));
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_FIBONACCI_2:
				printf("%d\n", fibonacci2(n2));
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_FATORIAL_1:
				printf("%ld\n", fatorial(n1));
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_FATORIAL_2:
				printf("%ld\n", fatorial2(n2));
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_POTENCIA:
				printf("%.0lf\n", potencia(n1, n2));
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_SOMAPARES:
				printf("%d\n", SomaDosPares(n1, n2));
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_SOMAIMPARES:
				printf("%d\n", SomaDosImpares(n1, n2));
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_SOMAPRIMOS:
				printf("%d\n", SomaDosPrimos(n1, n2));
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_MAIORPRIMO:
				printf("%d\n", MaiorNumeroPrimo(n1, n2));
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_MMC:
				printf("%d\n", mmc1(n1, n2));
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_MDC:
				printf("%d\n", MDC(n1, n2));
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
		//	case OPC_DESVIOPADRAO:
		//		printf("%.2f\n", );  // COMPLETE O PRINTF
		//	break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
		//	case OPC_COMBINACAO:
		//		printf("%.2f\n", );  // COMPLETE O PRINTF
		//	break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
//			case OPC_MEDIAHARMONICA:
//				printf("%.2f\n", MediaHarmonica(n1, n2));
//			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
		//	case OPC_COEFICIENTEVARIACAO:
		//		printf("%.2f\n", );  // COMPLETE O PRINTF
		//	break;
			//-----------------------------------------------------------
		}

		scanf("%d", &opc); //Lê a opção do usuário.

	}

	//Finaliza o programa.
	return (0);
}


/* ------------------------- */
/* IMPLEMENTACAO DAS FUNCOES */
/* ------------------------- */

int fibonacci (int n1){

	int aux, aux2, soma = 0, i;

		if (n1 == 0 || n1 == 1){

			return (1);
		}

		aux = 1;
		aux2 = 0;

		for (i = 0 ; i < n1 ; i++){

			soma = aux + aux2;

			aux = aux2;

			aux2 = soma;
		}

		return (soma);
}

int fibonacci2 (int n2){

	int aux, aux2, soma = 0, i;

		if (n2 == 0 || n2 == 1){

			return (1);
		}

		aux = 1;
		aux2 = 0;

		for (i = 0 ; i < n2 ; i++){

			soma = aux + aux2;

			aux = aux2;

			aux2 = soma;
		}

		return (soma);
}

long fatorial (int n1){

int fat, i;

     fat = 1;

     for (i = 1; i <= n1; i++){ 

     fat = fat * i;

 	 }

     	return (fat);

}

long fatorial2 (int n2){

int fat, i;

     fat = 1;

     for (i = 1; i <= n2; i++){ 

     fat = fat * i;

 	 }

     	return (fat);

}

double potencia (int n1, int n2){

	double potencia1;

			potencia1 = pow(n1,n2);

				return(potencia1); 
 }

 int SomaDosPares (int n1, int n2){

 	int i, somapar = 0;

 		for (i = 0 ; i <= n2 ; i++){

 			if (i % 2 == 0){

 				somapar = somapar + i;
 			}
 		}

 		return (somapar);
 }

int SomaDosImpares (int n1, int n2){

	int i, somaimpar = 0;

	for (i = n1 ; i <= n2 ; i++){

		if (i % 2 == 1){

			somaimpar = somaimpar + i;
		}
	}

	return (somaimpar);
}

int SomaDosPrimos (int n1, int n2){

	int i, j, primo, resultadoprimo = 0;

   for (i = n1 ; i < n2 ; i++){

   		primo = 1;
   

  	 for(j= 2; j < i && primo ; j++){

       	if ((i % j) == 0){

       			primo = 0;
       	}
   	 }

   	  if (primo == 1){

   			resultadoprimo = resultadoprimo + i;

   	  }

   	}

   return (resultadoprimo);
}


int MaiorNumeroPrimo (int n1, int n2){

	int i, j, primo, resultadoprimo;

	for (i = n1 ; i < n2 ; i++){

		primo = 1;

			for (j = 2 ; j < i && primo ; j++){

				if ((i % j) == 0){

					primo = 0;
				}
			}

			if (primo == 1){

				resultadoprimo = i;
			}
	}

	return (resultadoprimo);
}


int mmc1(int n1, int n2) {

    int mmc, aux, i;

    for (i = 2; i <= n2; i++){

        aux = n1 * i;

        if ((aux % n2) == 0){

            mmc = aux;

            i = n2 + 1;
        }
    }

    return mmc;
}


int MDC(int n1,int n2){

    int mdc, aux;

		if (n1 > n2){

		aux = n1;

		n1 = n2;

		n2= aux;
	}

	mdc = n2 % n1;

	while ((n2 % n1) != 0){

		mdc = n2 % n1;

		n2 = n1;
		n1 = mdc;
	}

	return (n1);
}


/*float MediaHarmonica (int n1, int n2){

	int i;
	float soma = 0;

	for (i = n1 ; i <= n2 ; i++){

		soma = soma + 1 / 1;
	}

	soma = n2 / soma;

	return (soma);
}*/