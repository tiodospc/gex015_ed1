//questao3.c

#include <stdio.h>
#include <stdlib.h>

/* matriz identidade - todos elementos diagonal principal são 1 
 * e os demais elementos da matriz são 0 */

int matriz_identidade(int* mat, int n);

int main(int argc, char** argv) {
	int *mat, n, i, j, d, retorno;
    
	//Leitura da ordem da matriz
	printf("Digite o número de linhas/colunas da matriz: ");
	scanf("%d",&n);
    
	//Alocação da matriz
	mat = (int *)malloc(n * n * sizeof(int));
	if (!mat) {
		printf("\nMemória Insuficiente!\n");
		return 0;
	}
    
	printf("\nDigite a matriz:\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			d = i*n+j;
			printf("Digite o valor [%d][%d]: ", i, j);
			scanf("%d", mat + d);
		}
	}
    
	retorno = matriz_identidade(mat,n);
	if(retorno)
		printf("A matriz é identidade.\n");
	else
		printf("A matriz NÂO é identidade.\n");
    
	free(mat);
	return 0;
}


int matriz_identidade(int* mat, int n){
	int i, j, d;
	int qtd_diag = 0, cont_diag = 0;
	int qtd_nao_diag = 0, cont_nao_diag = 0;
	
	//Percorre a matriz
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			
			if(i == j) { //Diagonal principal
				qtd_diag++;
				d=i*n+j;
				if(*(mat+d) == 1)
					cont_diag++;  
			
			} else { //Demais valores
				qtd_nao_diag++;
				d=i*n+j;
				if(*(mat+ d) == 0)
					cont_nao_diag++;  
			}
		}
	}
    
	if(qtd_diag == cont_diag && qtd_nao_diag == cont_nao_diag) 
		return 1;

	return 0;   
}