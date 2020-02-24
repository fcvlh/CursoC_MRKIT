#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Global variables
	int numero01;
	float numero02;
	char caractere;*/
int main(int argc, char *argv[]) {
	/*
	%c - Show char
	%d - Show decimal
	%i - Show integer
	%e - Show a cientific number with a lower e
	%E - Show a cientific number with a UPPER E
	%f - Show a float dot decimal format
	%g - Uses %e or %f, which be smaller
	%G - The same than %g, lower e case choice %e
	%o - Show a octal notation
	%s - Show a string
	%u - Show a non signal decimal
	%x - Show a hexadecimal number with lower letters
	%X - Show a hexadecimal number with UPPER letters
	%% - Show a '%' character
	%p - Show a pointer
	*/
	/*Local variables*/
	//int numero01=15;
	//unsigned int numero01=15; => unsigned numero01=15; // o int pode ser omitido
	signed int numero01=15;

	float numero02=22.5;
	
	//char caractere='W';
	char caractere=49; // Print ascii character
	
	printf("%d\n", numero01);
	printf("%.2f\n", numero02);
	printf("%c\n", caractere);
	printf("\n\n");
	return 0;
}
