#include <stdio.h>
#include <stdlib.h>

int main() {
      int idade; 
	  printf("Qual a sua idade? ");
      scanf("%d", &idade);
      if(idade >= 18 && idade <=70)
            printf("Voce deve votar!");
      else if(idade <= 15)
            printf("Nao pode votar");
      else
            printf("Voto facultativo");
 
      printf("\n\n");
      return 0;
}