#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// aPLICA��ES N�O CONVECIONAIS DO LA�O FOR
// utilizar mais uma vari�vel no la�o for
// Imprimir os n�meros pares de 0 a 100
int main(int argc, char *argv[]) {
	int i, j;
	for (i=0,j=0;i+j<=100;i++,j++){
		printf("%d\n", i+j);
	}
	return 0;
}
