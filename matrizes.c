#include <stdio.h>
#include <stdlib.h>
#define VALOR 2 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
  int matA[VALOR][VALOR], matB[VALOR][VALOR], matC[VALOR][VALOR];
  int contA, contB, soma;

  printf("MATRIZ #1");
  for(contA = 0; contA < VALOR; contA++){
    printf("\n\n");
    for(contB = 0; contB < VALOR; contB++){
      printf(" LINHA %d COLUNA %d: ", (contA + 1), (contB + 1));
      scanf("%d", &matA[contA][contB]);
    }
  }

  printf("\n\nMATRIZ #2");
  for(contA = 0; contA < VALOR; contA++){
    printf("\n\n");
    for(contB = 0; contB < VALOR; contB++){
      printf(" LINHA %d COLUNA %d: ", (contA + 1), (contB + 1));
      scanf("%d", &matB[contA][contB]);
    }
  }

  printf("\n\nMATRIZ #3"); //A TERCEIRA MATRIZ SERÁ OBTIDA A PARTIR DAS LINHAS E COLUNAS CORRESPONDENTES DAS MATRIZES 1 E 2
  for(contA = 0; contA < VALOR; contA++){
    printf("\n\n");
    for(contB = 0; contB < VALOR; contB++){
      soma = matA[contA][contB] + matB[contA][contB];
      matC[contA][contB] = soma;
      printf(" LINHA %d COLUNA %d: %d\n", (contA + 1), (contB + 1), matC[contA][contB]);
    }
  }

  return 0;
}
