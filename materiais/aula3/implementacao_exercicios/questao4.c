//questao4.c

#include <stdio.h>
#include <stdlib.h>

/* matriz identidade - todos elementos diagonal principal são 1 
 * e os demais elementos da matriz são 0 */

int matriz_identidade(int** mat, int n);

int main(int argc, char** argv) {
	int **mat, n, i, j, retorno;
    
	//Leitura da ordem da matriz
	printf("Digite o número de linhas/colunas da matriz: ");
	scanf("%d",&n);
    
	//Alocação da matriz
	mat = (int **)malloc(n * sizeof(int*));
	if (!mat) {
		printf("\nMemória Insuficiente!\n");
		return 0;
	}
	
	for(i=0;i<n;i++) {
		mat[i] = (int *)malloc(n * sizeof(int));
		if(! mat[i]) {
			printf("\nMemória Insuficiente!\n");
			return 0;
		}
	}
    
	printf("\nDigite a matriz:\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("Digite o valor [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
    
	retorno = matriz_identidade(mat,n);
	if(retorno)
		printf("A matriz é identidade.\n");
	else
		printf("A matriz NÂO é identidade.\n");
    
	//Libera a matriz
	for(i=0;i<n;i++)
		free(mat[i]);
	free(mat);
	
	return 0;
}


int matriz_identidade(int** mat, int n){
	int i, j;
	int qtd_diag = 0, cont_diag = 0;
	int qtd_nao_diag = 0, cont_nao_diag = 0;
	
	//Percorre a matriz
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			
			if(i == j) { //Diagonal principal
				qtd_diag++;
				if(mat[i][j] == 1)
					cont_diag++;  
			
			} else { //Demais valores
				qtd_nao_diag++;
				if(mat[i][j] == 0)
					cont_nao_diag++;  
			}
		}
	}
    
	if(qtd_diag == cont_diag && qtd_nao_diag == cont_nao_diag) 
		return 1;

	return 0;   
}