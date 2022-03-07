#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i,j,temp,qtd,list,dl,sel;
float dd;
char num[2];
int lista1[50];
char numeros[50];

int main() {
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
      dl++;}
  }
  i=0;j=0;
  for (i=0; i<dl; i++){ //ordenar do menor para o maior
    for (j=i+1; j<dl; j++) {
      if (lista1[i] > lista1[j]) {
        temp = lista1[i];
        lista1[i] = lista1[j];
        lista1[j] = temp;}}}
  
  if (dl%2==0){
    printf("A quantidade de números é par \n");
  }
  
 else{
    dd=dl/2;
    sel = (int)dd;
   printf("saída %d ",lista1[sel]);
  }
}
