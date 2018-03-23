//questao2.c

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 5, num = 1, i = 0;
	
	int *vetor = (int*) malloc(n * sizeof(int));
	if(! vetor) {
		printf("\nMemória Insuficiente!\n");
		return 0;
	}
	
	//Lê os números
	while(1) {
		printf("Informe o número (%d): ", i+1);
		scanf("%d", &num);
		
		if(num == 0)
			break;
		
		//Realoca o vetor
		if(i == n) {
			printf("Realocou \n");
			n += 5;
			vetor = (int*) realloc(vetor,  n * sizeof(int));
			if(! vetor) {
				printf("\nMemória Insuficiente!\n");
				return 0;
			}
		}
		
		vetor[i] = num;
		i++;
	}
	
	for(int j=0; j<i; j++)
		printf("%d\t", vetor[j]);
	printf("\n");
	
	//Limpa a memória
	free(vetor);
	
	return 0;
}