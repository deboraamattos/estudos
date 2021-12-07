/* Escreva uma função que recebe um número inteiro n>0 e devolve o número de dígitos de n e o primeiro dígito de n. */

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

