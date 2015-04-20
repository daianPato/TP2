/* Toma la entrada y en la salida reemplaza cada tabulación por \t,
 * cada backspace por \b, y cada backslash por \\
 * Daian Lucas Ezequiel Pato
 * 20/04/2015
 */
 
#include <stdio.h>
 
int main ()
{
	int caracter;
	while ( (caracter = getchar()) != EOF ) {
		if (caracter == '\t') {
			printf("\t");
		} else if (caracter == '\b') {
			printf("\b");
		} else if (caracter == '/') {
			printf ("/");
		} else {
			putchar(caracter);
		}
	}
return 0;
}
