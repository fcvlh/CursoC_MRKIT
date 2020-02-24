#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Utilizar funções

// Programa que calcule o quadrado de números inteiros

// Solicita ao usuário números inteiros e vai retornando o quadrado dos mesmos

// Condição para encerrar o programa, digitar o número zero

// Utilizando o laço for

// Funções auxiliares
void display();
int leitura();
void square();
 
int main(int argc, char *argv[]) {
	int valor;
	
	for (display(); valor = leitura(); display()) {
		square(valor);
	}
	return 0;
}

void display() {
	printf("Digite 0 para sair\n");
	printf("Ou informe um inteiro para calcular o seu quadrado\n");
}

int leitura() {
	int t;
	scanf("%d", &t);
	getchar();
	return t;
}

void square(int numero) {
	printf("O quadrado do número %d é %d\n", numero, (numero*numero));
}
