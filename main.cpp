#include <iostream>
#include <stdlib.h>

#define TAM5 5
#define TAM10 10
#define TAM50 50
#define TAM100 100
#define TAM1000 1000
#define TAM10000 10000

int vetor5[50][TAM5];
int vetor10[50][TAM10];
int vetor50[50][TAM50];
int vetor100[50][TAM100];
int vetor1000[50][TAM1000];
int vetor10000[50][TAM10000];

double comparador = 0;

void bubbleSorte(int vetor[], int n) {
	int k, j, aux;

    for (k = 0; k < n - 1; k++) {
    	
        for (j = k + 1; j < n; j++) {

			comparador++;
            if (vetor[k] > vetor[j]) {
                aux = vetor[k];
                vetor[k] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

void quickSort(int *vetor, int inicio, int fim) {
	
   int i, j, meio, aux;

   i = inicio;
   j = fim;
   meio = vetor[(inicio + fim) / 2];

   do
   {
      while(vetor[i] < meio) {
      	i++;
	  }
         
      while(vetor[j] > meio) {
      	j--;
	  }
         
         comparador++;
      if(i <= j)
      {
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i++;
         j--;
      }
   }while(i <= j);

	comparador++;
   if(inicio < j) {
      quickSort(vetor, inicio, j);
   }
   	  comparador++;
   if(i < fim) {
      quickSort(vetor, i, fim);
   }
      
}

void insertionSort(int vetor[], int tam) {

   int valor;
   int pos;
   int i;
  
   for(i = 1; i < tam; i++) { 
	
        valor = vetor[i];
		
        pos = i;
		
	    while (pos > 0 && vetor[pos-1] > valor) {
	        vetor[pos] = vetor[pos-1];
	        pos--;
		}

		comparador++;
		
      	if(pos != i) {
           vetor[pos] = valor;
      	}
		
   }  
}

void selectionSort(int vetor[], int tam) {
    for (int indice = 0; indice < tam; indice++) {
        int indiceMenor = indice;
        for (int indiceSeguinte = indice+1; indiceSeguinte < tam; indiceSeguinte++) {
        	comparador++;
            if (vetor[indiceSeguinte] < vetor[indiceMenor]) {
                indiceMenor = indiceSeguinte;
            }
        }
        int aux = vetor[indice];
        vetor[indice] = vetor[indiceMenor];
        vetor[indiceMenor] = aux;
    }
}

void limparTela() {
	system("cls");
}

void analizar() {
	int a,b,c, tamanhoAtual = 5;
	for(a = 0; a < 6; a++) {
		//loping 5, 10, 50, 100, 1000, 10000
		switch(a) {
				default:
					tamanhoAtual = 5;
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						bubbleSorte(vetor5[b], TAM5);	
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM BUBBLE_SORT\n", tamanhoAtual, comparador/50);
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						selectionSort(vetor5[b], TAM5);	
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM SELECTION_SORT\n", tamanhoAtual, comparador/50);
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						insertionSort(vetor5[b], TAM5);	
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM INSERTION_SORT\n", tamanhoAtual, comparador/50);
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						quickSort(vetor5[b], 0, TAM5 - 1);		
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM QUICK_SORT\n\n", tamanhoAtual, comparador/50);
					
					break;
				case 1:
					tamanhoAtual = 10;
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						bubbleSorte(vetor10[b], TAM10);	
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM BUBBLE_SORT\n", tamanhoAtual, comparador/50);
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						selectionSort(vetor10[b], TAM10);	
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM SELECTION_SORT\n", tamanhoAtual, comparador/50);
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						insertionSort(vetor10[b], TAM10);	
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM INSERTION_SORT\n", tamanhoAtual, comparador/50);
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						quickSort(vetor10[b], 0, TAM10 - 1);		
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM QUICK_SORT\n\n", tamanhoAtual, comparador/50);
					
					break;
				case 2:
					tamanhoAtual = 50;
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						bubbleSorte(vetor50[b], TAM50);	
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM BUBBLE_SORT\n", tamanhoAtual, comparador/50);
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						selectionSort(vetor50[b], TAM50);	
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM SELECTION_SORT\n", tamanhoAtual, comparador/50);
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						insertionSort(vetor50[b], TAM50);	
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM INSERTION_SORT\n", tamanhoAtual, comparador/50);
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						quickSort(vetor50[b], 0, TAM50 - 1);		
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM QUICK_SORT\n\n", tamanhoAtual, comparador/50);
					
					break;
				case 3:
					tamanhoAtual = 100;
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						bubbleSorte(vetor100[b], TAM100);	
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM BUBBLE_SORT\n", tamanhoAtual, comparador/50);
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						selectionSort(vetor100[b], TAM100);	
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM SELECTION_SORT\n", tamanhoAtual, comparador/50);
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						insertionSort(vetor100[b], TAM100);	
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM INSERTION_SORT\n", tamanhoAtual, comparador/50);
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						quickSort(vetor100[b], 0, TAM100 - 1);	
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM QUICK_SORT\n\n", tamanhoAtual, comparador/50);
					
					break;
				case 4:
					tamanhoAtual = 1000;
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						bubbleSorte(vetor1000[b], TAM1000);	
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM BUBBLE_SORT\n", tamanhoAtual, comparador/50);
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						selectionSort(vetor1000[b], TAM1000);	
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM SELECTION_SORT\n", tamanhoAtual, comparador/50);
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						insertionSort(vetor1000[b], TAM1000);	
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM INSERTION_SORT\n", tamanhoAtual, comparador/50);
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						quickSort(vetor1000[b], 0, TAM1000 - 1);	
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM QUICK_SORT\n\n", tamanhoAtual, comparador/50);
					
					break;
				case 5:
					tamanhoAtual = 10000;
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						bubbleSorte(vetor10000[b], TAM10000);	
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM BUBBLE_SORT\n", tamanhoAtual, comparador/50);
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						selectionSort(vetor10000[b], TAM10000);	
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM SELECTION_SORT\n", tamanhoAtual, comparador/50);
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						insertionSort(vetor10000[b], TAM10000);	
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM INSERTION_SORT\n", tamanhoAtual, comparador/50);
					
					comparador = 0;
					for(b = 0; b < 50; b++) {
						quickSort(vetor10000[b], 0, TAM10000 - 1);	
					}
					printf("Os Vetores de tamanho %d, media %.2f comparacoes COM QUICK_SORT\n\n", tamanhoAtual, comparador/50);
					
					break;
			}
		
	}
}

void preencher() {
	int a,b,c, tamanhoAtual = 5;
	for(a = 0; a < 6; a++) {
		//loping 5, 10, 50, 100, 1000, 10000
		switch(a) {
				default:
					tamanhoAtual = 5;
					for(b = 0; b < 50; b++) {
						for(c= 0; c < tamanhoAtual; c++) {
							int numRandom = rand() % 100;
							vetor5[b][c] = numRandom;
						}	
					}
					break;
				case 1:
					tamanhoAtual = 10;
					for(b = 0; b < 50; b++) {
						for(c= 0; c < tamanhoAtual; c++) {
							int numRandom = rand() % 100;
							vetor10[b][c] = numRandom;
						}	
					}
					break;
				case 2:
					tamanhoAtual = 50;
					for(b = 0; b < 50; b++) {
						for(c= 0; c < tamanhoAtual; c++) {
							int numRandom = rand() % 100;
							vetor50[b][c] = numRandom;
						}	
					}
					break;
				case 3:
					tamanhoAtual = 100;
					for(b = 0; b < 50; b++) {
						for(c= 0; c < tamanhoAtual; c++) {
							int numRandom = rand() % 100;
							vetor100[b][c] = numRandom;
						}	
					}
					break;
				case 4:
					tamanhoAtual = 1000;
					for(b = 0; b < 50; b++) {
						for(c= 0; c < tamanhoAtual; c++) {
							int numRandom = rand() % 100;
							vetor1000[b][c] = numRandom;
						}	
					}
					break;
				case 5:
					tamanhoAtual = 10000;
					for(b = 0; b < 50; b++) {
						for(c= 0; c < tamanhoAtual; c++) {
							int numRandom = rand() % 100;
							vetor10000[b][c] = numRandom;
						}	
					}
					break;
			}
		
	}
	
	printf("***TODOS VETORES FORAM CRIADOS COM SUCESSO***\n\n");
	
}

void interface() {
	int opcao = -1;
	
	
	do {
		printf("APS - POTA\n\n\n");
		printf("(1) > Criar e analizar vetores...\n\n");	
		
		printf("(0) > Sair\n");
		printf("\nESCOLHA UMA OPCAO: \n");
		scanf("%d", &opcao);
		limparTela();
		switch(opcao) {
			case 1:
				preencher();
				analizar();
				break;
			case 0:
				//sair
				break;
			default:
				printf("\nEscolha uma Opcao Valida\n");
				break;				
		}
		
		if(opcao != 0) {
			opcao = -1;
		}
		
	} while (opcao != 0);
}

int main(int argc, char** argv) {
	interface();
	return 0;
}
