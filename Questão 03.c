#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i,j,qtd,sel,numfim,d;
float num;
char string[50];
char tempStr[50];
char print[50][50];

int main() {
  printf("Digte uma frase: \n\n");
  printf("Entrada: ");
  gets(string);
	printf("\n"); 
  qtd=strlen(string);

  for (i=0; i<qtd; i++){
    if(string[i]==' '){
      //passa
    }
    else{
      tempStr[j]=string[i];
      j++;}
  }
  num=sqrt(j);
  sel = (int)num;
  
  if (sel==num){
    numfim=sel;
  }
  else{
    numfim=sel+1;
  }
  d=0;
  for (i=0; i<numfim; i++){
    for (j=0; j<numfim; j++){
      print[i][j]=tempStr[d];
      d++;
    }
  }
  printf("Saída: ");
  for (i=0; i<numfim; i++){
    for (j=0; j<numfim; j++){
      printf("%c",print[j][i]);
    }
    printf(" ");
  }
}
