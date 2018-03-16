//questao10.c

#include <stdio.h>
#include <stdlib.h>

int main() {
	int vetor[5], i;
	for(i=0; i<5; i++) {
		printf("Informe o elemento %d: ", i+1);
		scanf("%d", vetor+i);
	}
	
	printf("\nElementos do vetor:\n");
	for(i=0; i<5; i++) 
		printf("%d \t", *(vetor+i));
	
	printf("\n");
	return 0;
}