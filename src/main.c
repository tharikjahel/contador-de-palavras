/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char vetor[200];
  char c; 
  int i, j=0;
  int aux=0;
  int soma=0;	

  for(j=0;c != '\n'; j++){
	scanf("%c", &c);
	vetor[j]=c;
		
  }

  for(i=0; vetor[i-1] != '\n'; i++){
	if(vetor[i] == ' ' || vetor[i] == '\n' || vetor[i] == '!' || vetor[i] == '-' || vetor[i] == '?' || vetor[i] == '.' || vetor[i] == ',' || vetor[i] == ':'){
		if(vetor[i-1] != ' ' && vetor[i-1] != '\n' && vetor[i-1] != '!' && vetor[i-1] != '-' && vetor[i-1] != '?' && vetor[i-1] != '.' && vetor[i-1] != ',' && vetor[i-1] != ':'){
			if(vetor[i-1] == '0' || vetor[i-1] == '1' || vetor[i-1] == '2' || vetor[i-1] == '3' || vetor[i-1] == '4' || vetor[i-1] == '5' || vetor[i-1] == '6' || vetor[i-1] == '7' || vetor[i-1] == '8' || vetor[i-1] == '9'){
				if(aux==0){
					if((vetor[i] == '.' || vetor[i] == ',') && (vetor[i+1] == '0' || vetor[i+1] == '1' || vetor[i+1] == '2' || vetor[i+1] == '3' || vetor[i+1] == '4' || vetor[i+1] == '5' || vetor[i+1] == '6' || vetor[i+1] == '7' || vetor[i+1] == '8' || vetor[i+1] == '9')){
						aux=1;
					}
				
					if(vetor[i+1] == '0' || vetor[i+1] == '1' || vetor[i+1] == '2' || vetor[i+1] == '3' || vetor[i+1] == '4' || vetor[i+1] == '5' || vetor[i+1] == '6' || vetor[i+1] == '7' || vetor[i+1] == '8' || vetor[i+1] == '9'){
					if(vetor[i+2] == '0' || vetor[i+2] == '1' || vetor[i+2] == '2' || vetor[i+2] == '3' || vetor[i+2] == '4' || vetor[i+2] == '5' || vetor[i+2] == '6' || vetor[i+2] == '7' || vetor[i+2] == '8' || vetor[i+2] == '9'){
						soma++;
					}else{soma++;}
					}else{soma++;}

				}else{aux=0;} 

			}else{soma++;}
	
		}
 	}

  }

	printf("%d", soma);
	return 0;
}

