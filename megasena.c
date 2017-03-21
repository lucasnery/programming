#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int indiceA, indiceB, sorteio[]={18,5,37,1,19,54}, bilhete[6], acertos;

	for(indiceB=0;indiceB<6;indiceB++){
		printf("Digite o #%d numero do bilhete: ",indiceB+1);
		scanf("%d",&bilhete[indiceB]);
	}
	
	acertos=0;
	for(indiceA=0;indiceA<6;indiceA++){
		for(indiceB=0;indiceB<6;indiceB++){
			if (sorteio[indiceB]==bilhete[indiceA]) {
				acertos++;
				break;
			}
		}
	}
	
	printf("\nTeve %d acerto(s)",acertos);
		
	return 0;
}
