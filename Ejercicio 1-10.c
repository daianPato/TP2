/* Toma la entrada y en la salida reemplaza cada tabulación por \t,
 * cada backspace por \b, y cada backslash por \\
 * Daian Lucas Ezequiel Pato
 * 20/04/2015
 */
 
#include <stdio.h>
 
int main ()
{
	int t;
	while ( (caracter = getchar()) != EOF ) {
		if (t == '\t')
 			 printf("\\t");
 		if (t == '\b')
 		 	 printf("\\b");
 		 if (t == '\\')
 		 {
 			 printf("\\");
 		 	 printf("\\");
 		 }
 		if (t !='\t' && t !='\\' && t == '\b'){
 		 			 putchar(t);
	}
return 0;
}
