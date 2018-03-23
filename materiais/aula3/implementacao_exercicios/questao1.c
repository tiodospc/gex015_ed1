//questao1.c

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[50];
	char endereco[100];
	int matricula;
} estudante;

int main() {
	int n, i;
	estudante* est; //Declara o ponteiro para o vetor de estudantes
	
	printf("Informe o número de estudantes: ");
	scanf("%d", &n);
	getchar(); //Limpa o buffer para ler as strings
	
	//Aloca a memória para o vetor de estudante
	est = (estudante*) malloc(n * sizeof(estudante));
	if(! est) {
		printf("\nMemória insuficiente!\n");
		return 0;
	}
	
	//Lê os dados dos estudantes
	for(i=0; i<n; i++) {
		printf("\n---Lendo estudante %d-------\n", i+1);
		
		printf("Informe o nome: ");
		gets(est[i].nome);

		printf("Informe o endereço: ");
		gets(est[i].endereco);
		
		printf("Informe a matrícula: ");
		scanf("%d", &est[i].matricula);
		getchar(); //Limpa o buffer para ler as strings
	}
	
	//Imprime os dados dos estudantes lidos
	for(i=0; i<n; i++) {
		printf("\nEstudante %d:\n", i+1);
		printf("Nome: %s\n", est[i].nome);
		printf("Endereço: %s\n", est[i].endereco);
		printf("Matrícula: %d\n", est[i].matricula);
	}
	
	//Limpa a memória
	free(est);
	
	return 0;
}