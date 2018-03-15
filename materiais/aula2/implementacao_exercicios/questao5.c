//questao5.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void max_min (int *vetor, int n, int *min, int *max);

int main() {
	int vetor[10];
	int min, max;
	
	//Semente para valores aleatórios - time(NULL) disponível em time.h
	srand(time(NULL)); 
	
	//Inicializar o vetor
	for(int i=0; i<10; i++)
		vetor[i] = rand()%100;
	
	for(int i=0; i<10; i++)
		printf("%d\t", vetor[i]);
	printf("\n");
	
	max_min(vetor, 10, &min, &max);
	
	printf("Valor mínimo: %d | Valor máximo: %d\n", min, max);
}

void max_min(int *vetor, int n, int *min, int *max) {
	*min = 1000000;
	*max = -1000000;
	for(int i=0; i<n; i++) {
		if(vetor[i] > *max)
			*max = vetor[i];
		
		if(vetor[i] < *min)
			*min = vetor[i];
	}
}