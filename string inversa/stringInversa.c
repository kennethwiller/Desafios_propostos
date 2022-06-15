#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define qtdString 30


void inverter(char vet[]) {
	
	int i, aux, fim, tam = strlen(vet); //strlen mostra o tamanho do vetor
	
	fim = tam - 1;
	
	for (i = 0; i < tam/2; i++) {
		aux = vet[i];
		vet[i] = vet[fim];
		vet[fim] = aux;
		fim--;	
	}
	
}

int main(int argc, char *argv[]) {
	
	char palavra[qtdString];
	
	printf("Digite uma cadeia de caracteres: ");
	fgets(palavra, qtdString, stdin);
	
	printf("%s\n", palavra);
	
	inverter(palavra); //chama a função inverter
	
	printf("%s\n", palavra);

	return 0;
}
