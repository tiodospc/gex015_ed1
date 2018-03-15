//questao6.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encontra_letra(char* str, char letra, int* vet_idx, int* tam_vet_idx);

int main() {
	char palavra[50];
	char letra;
	int vetor_indice[50], tam_vetor_indice;
    
	printf("Digite a palavra: ");
	scanf("%s", palavra);
	getchar(); //Limpa o buffer para ler a letra
    
	printf("Digite a letra: ");
	scanf("%c", &letra);
	//printf("%s %c\n", palavra, letra);
    
	encontra_letra(palavra, letra, vetor_indice, &tam_vetor_indice);
    
	if(tam_vetor_indice > 0) {
		printf("A letra foi encontrada nos índices:\n");
		for(int i=0; i<tam_vetor_indice; i++)
			printf("%d\t", vetor_indice[i]);
		printf("\n");
	} else
		printf("A letra não foi encontrada na palavra.\n");
}

void encontra_letra(char* str, char letra, int* vet_idx, int* tam_vet_idx) {
	int tam_str = strlen(str);
	*tam_vet_idx = 0;
    
	for(int i=0; i<tam_str; i++) {
		if(str[i] == letra) {
			vet_idx[*tam_vet_idx] = i;
			(*tam_vet_idx)++;
		}    
	}
}     