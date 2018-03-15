//questao4.c

#include <stdio.h>
#include <stdlib.h>

void calcula_quadrado (int lado, float *area, float *perimetro);

int main() {
	int lado;
	float area, perimetro;
	
	printf("Informe o lado: ");
	scanf("%d", &lado);
	
	calcula_quadrado(lado, &area, &perimetro);
    
	printf("O quadrado de lado %d possuí área de %.2f e perímetro de %.2f.\n", lado, area, perimetro);
	return 0;
}

void calcula_quadrado (int lado, float *area, float *perimetro) {
	*area = lado * lado;
	*perimetro = lado * 4;
}