//questao7.c

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1, n2, *p_n1, *p_n2, soma;
   
	printf("Informe o número N1: ");
	scanf("%d", &n1);
	printf("Informe o número N2: ");
	scanf("%d", &n2);   
 
	p_n1 = &n1;
	p_n2 = &n2;
 
	soma = *p_n1 + *p_n2;
	printf("A soma dos números é: %d\n", soma);
 
	return 0;
}