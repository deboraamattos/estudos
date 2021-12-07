/* Escreva uma fun��o que recebe um n�mero inteiro n>0 e devolve o n�mero de d�gitos de n e o primeiro d�gito de n. */

#include <stdio.h>
#include <stdlib.h>

int digitos(int n, int *primeiroDigito){
    int count = 1;
   
    if(n < 10){
        *primeiroDigito = n;
    }else{
        while(n >= 10){
            n = n / 10;
            if(n < 10){
                *primeiroDigito = n;
            }
            count++;
        }
    }
    
    
    return count;
}

int main(){
    int n = 0, qtdeDigitos = 0, primeiroDigito = 0;
    
    printf("\nDigite um numero inteiro: ");
    scanf("%i",&n);
    
    qtdeDigitos = digitos(n, &primeiroDigito);
    
    printf("\nA quantidade de digitos eh: %i", qtdeDigitos);
    printf("\nO primeiro digito eh: %i", primeiroDigito);
    
    return 0;
}

