//questao8.c

#include <stdio.h>
#include <stdlib.h>

int somaNumeros(int* n1, int* n2);
 
int main() {
	int n1, n2, soma;
   
	printf("Informe o número N1: ");
	scanf("%d", &n1);
	printf("Informe o número N2: ");
	scanf("%d", &n2);   
 
	soma = somaNumeros(&n1, &n2);
	printf("A soma dos números é: %d\n", soma);
 
	return 0;
}

int somaNumeros(int* n1, int* n2) {
   int soma = *n1 + *n2;
   return soma;
}