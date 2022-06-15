#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int numInform, f1 = 0,f2 = 1,f3; //f1 equivale ao primeiro elemento, f2 ao segundo elemento, f3 a soma entre o f1 e o f2.
	
	printf("--------------------------------\n");
	printf("-    ALGORITMO DE FIBONACCI    -\n");
	printf("--------------------------------\n\n");
	
	
	printf("Informe um número: ");
	scanf("%i", &numInform);
	
	if (numInform < 0) {
		printf("Número inválido!");
	} else {
		
		printf ("0  1 ");
		
		while (f2 < numInform) {
			f3 = f2 + f1; 
			printf(" %i ", f3);
			
			f1=f2; //variável f1 passa a receber o valor de f2
			f2=f3; 
			
			
			if (f3 == numInform) {
				printf("\n\nNumero pertence\n");
			}
		}
		
		if (f3 != numInform) {
			printf("\n\nNão pertence");
		}
		
		printf("\n\n");
		return 0;
	}
		
	
}
