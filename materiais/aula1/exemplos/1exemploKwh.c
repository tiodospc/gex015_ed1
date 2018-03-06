#include <stdio.h>
#include <stdlib.h>

int main() {
        float calc, kwh;
        printf("Escreve seu consumo em Kwh: ");
        scanf("%f", &kwh);
        calc = kwh * 0.245646;
        printf("Seu consumo e: %.2f \n", calc);
}    