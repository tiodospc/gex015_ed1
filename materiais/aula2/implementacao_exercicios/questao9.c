//questao9.c

#include <stdio.h>
#include <stdlib.h>

void somaNumeros(int *soma, int n1, int n2);
 
int main() {
	int n1, n2, soma;
   
	printf("Informe o número N1: ");
	scanf("%d", &n1);
	printf("Informe o número N2: ");
	scanf("%d", &n2);   
 
	somaNumeros(&soma, n1, n2);
	printf("A soma dos números é: %d\n", soma);
 
	return 0;
}

void somaNumeros(int *soma, int n1, int n2) {
   *soma = n1 + n2;
}