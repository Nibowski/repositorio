#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i,j,qtd,compara, del, list,dl,soma;
char num[2];
int lista1[50];
int lista2[50];
char numeros[50];

int main() {
  soma=0;
  printf("Digte uma sequência de números de 0 a 9 separados por vírgula: \n\n");
  printf("Entrada: ");
	scanf("%s",numeros);
	printf("\n"); 
  qtd=strlen(numeros);
  dl=0;
  for(i=0;i<qtd;i++){
    if(isdigit(numeros[i])){ //só deixa passar o que seria numerico
      num[0]=numeros[i];
      int list = atoi(num); //passa de string para numerico
      lista1[dl]=list;
      lista2[dl]=list;
      dl++;}
  }
  for (i=0;i<dl;i++){
    for (j=i;j<dl;j++){
      if (lista1[i]>lista2[j]){
        compara=lista1[i]-lista2[j];
      }
      else{
        compara=lista2[j]-lista1[i];
      }
      if (compara==2){ //verifica se a diferença é de 2 que foi o valor escolhido
        soma++;
        //printf("[%d , %d] - ",lista1[i],lista2[j]);
      }
    }
  }
  printf("\n\nsaída %d",soma);
}
  
