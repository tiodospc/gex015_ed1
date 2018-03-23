/*
 * principal.c Programa que testa a TAD Lista.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "lista.h"

int main(int argc, char **argv) {
	Lista *lista;

	/* cria a lista */
	lista = lista_cria();

	/* cria dados para inserir */
	float x = 1.0, y = 2.5;

	/* insere os dois pontos */
	lista = lista_insere(lista, x);
	printf("X (1.0) inserido...\n");
	lista = lista_insere(lista, y);
	printf("Y (2.5) inserido...\n");

	/* testa se estão na lista */
	if(lista_busca(lista, x) != NULL) {
		printf("Hoooray! Ao buscar encontrei X (1.0)...\n");
	} else {
		printf("ERRO! Ao buscar nao encontrei X (1.0)...\n");
	}
	
	if (lista_busca(lista, y) != NULL) {
		printf("Hoooray! Ao buscar encontrei Y (2.5)...\n");
	} else {
		printf("ERRO! Ao buscar nao encontrei Y (2.5)...\n");
	}

	/* remove um elemento da lista e testa se ele esta na lista */
	float z = 5.0;
	lista = lista_insere(lista, z);
	printf("Z (5.0) inserido...\n");
	
	float w = 3.3;
	lista = lista_insere(lista, w);
	printf("W (3.3) inserido...\n");
	
	printf("Impressão comum...\n");
	lista_imprime(lista);
	
	lista = lista_remove(lista, y);
	if(lista_busca(lista, y) == NULL) {
		printf("Hoooray! Ao remover não encontrei Y (2.5)...\n");
	} else {
		printf("ERRO! Ao remover nao encontrei Y (2.5)...\n");
	}
	
	lista = lista_remove(lista, z);
	if(lista_busca(lista, z) == NULL) {
		printf("Hoooray! Ao remover não encontrei Z (5.0)...\n");
	} else {
		printf("ERRO! Ao remover nao encontrei Z (5.0)...\n");
	}
	
	printf("Impressão recursiva...\n");
	lista_imprime_rec(lista);
	
	lista_destroi(lista);
	printf("Tudo Ok\n");

	return 0;
}
