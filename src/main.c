/* Contador de palavras
 *
 * Renato Cunha Berribille R.A.: 157149
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

char c;
char conta;

int Q=0, f=0;
c = 0;
conta = 0;
 
while (c != '\n') {
 
	scanf("%c", &c);
 
	if (c == '.' || c == ',' || c == ':' || c == ';' || c == ' ' || c == '!' || c == '?' || c == '-' || c == '\n'){
		if ((conta >= 'a' && conta <= 'z') || (conta >= 'A' && conta <= 'Z')){
			Q++;
		}
		if (conta >= '0' && conta <= '9'){
			if (c == '.' || c == ','){ 
				f = 1; 
			}
			else{
				f = 0; 
			}   
		Q++;
		}
	}
 
 
	conta = c;
 
	if (f == 1 && (conta >= '0' && conta <= '9')){
		Q--;
		f=0;
	}
 
}
   printf("%d\n", Q);
   return 0;
}
