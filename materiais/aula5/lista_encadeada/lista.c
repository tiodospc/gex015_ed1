#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

/* define a struct TAD lista */
struct lista {
	float info;         /* dado */
	struct lista *prox; /* ponteiro para o proximo elemento */
};

/* cria lista vazia */
Lista* lista_cria(void) 
{
	return NULL;
}

/* retorna se a lista esta vazia (true), ou false caso contrario */
bool lista_vazia( Lista* l )
{
	return (l == NULL);
}

/* insere no comeco da lista, retorna a lista atualizada */
Lista* lista_insere( Lista* l, float info )
{
	//TODO Implementar 
	return l;
}

/* busca um elemento na lista e retorna-o caso ele seja encontrado */
Lista* lista_busca( Lista* l, float info )
{
	Lista* p = l;
	while(p != NULL) {
		if(p->info == info)
			return p;
		p = p->prox;
	}
	
	return NULL;
}

/* percorre os elementos, imprimindo-os */
void lista_imprime( Lista* l ) 
{
	//TODO Implementar
}

/* percorre os elementos recursivamente, imprimindo-os */
void lista_imprime_rec( Lista* l ) 
{
	//TODO Implementar 
}

/* remove da lista o elemento que contem 'info'. Se lista ficar vazia, retorna NULL.
   Se nao encontrou, retorna a lista 'l'.
   Senao, o elemento removido deve ser liberrado com free.
*/
Lista* lista_remove( Lista* l, float info )
{
	//Implementar 
}

/* libera a memória de cada nó da lista. */
void lista_destroi( Lista* l )
{
	Lista* elem = l;
	while( lista_vazia(elem) == false ){
		Lista* t = elem->prox;
		free(elem);
		elem = t;
	}
}
