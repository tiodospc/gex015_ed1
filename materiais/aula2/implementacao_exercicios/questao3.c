//questao3.c

#include <stdio.h>
#include <string.h>

void imprime (char *v, int n);

int main() {
	char palavra[50];
    
	printf("Digite a palavra: ");
	scanf("%s", palavra);
	
	imprime(palavra, strlen(palavra));
	
	printf("\n");
	return 0;
}

void imprime (char *v, int n) {
	char *c; 
	for (c = v; c < v + n; c++){ 
		printf ("%c", *c); 
	}
}