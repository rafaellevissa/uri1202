#include <stdio.h>
#include <math.h>
#include <string.h>

int fibonacci(int x);

int main(void) {
  int quantidade,i;
  char numero[10000];
  scanf("%d", &quantidade);
  int fibonacciNumber[quantidade];
  for(i=0;i<quantidade;i++){
    scanf("%s",numero);
    int tamanho = strlen(numero);
    int x,digito, decimal=0;
    char bit;
    for (x=0;x<tamanho;x++){
      bit = numero[x];
      digito = (int)(bit) - 48;
      decimal = decimal + digito*pow(2,tamanho - (x+1));
    }
    fibonacciNumber[i]=fibonacci(decimal);    
  }

  for(i=0;i<quantidade;i++){
    printf("0");
    printf("%d\n",fibonacciNumber[i]);
  }

  return 0;
}

int fibonacci(int x){
  int n1 = 1;
  int n2 = 1;
  int resultado,i;
  if(x==1 || x==2){
    resultado=1;
    return resultado;
  }else{
    for(i=2;i<x;i++){
      resultado=n1+n2;
      n1=n2;
      n2=resultado;
    }
    return resultado;
  }
}