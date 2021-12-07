/* Escreva um procedimento que, para 4 parâmetros de entrada (X, Y, Z, P), onde cada argumento é um valor real, troque entre si os valores de X e Y se P = 1, entre Y e Z se P = 2 e entre X e Z se P = 3 */


#include <stdio.h>
#include <stdlib.h>

void TrocaNumero (float *x, float *y, float *z, float p){
	float aux;
	if(p == 1){
		aux = *x;
		*x = *y;
		*y = aux;
	}else if (p == 2){
		aux = *y;
		*y = *z;
		*z = aux;
	}else if (p == 3){
		aux = *x;
		*x = *z;
		*z = aux;
	}
}

int main(int argc, char *argv[]) {
	float x, y, z, p;
	
	//define valor para as variáveis
	printf("Digite o valor de P: ");
	scanf("%f", &p);
	
	printf("\nDigite o valor de X: ");
	scanf("%f", &x);
	
	printf("\nDigite o valor de Y: ");
	scanf("%f", &y);
	
	printf("\nDigite o valor de Z: ");
	scanf("%f", &z);	
	
	//imprime valor original das variáveis
	printf("\n p=%f, x=%f, y=%f e z=%f", p, x, y, z);
	
	TrocaNumero(&x, &y, &z, p);
	
	//imprime valor trocado das variáveis
	printf("\n p=%f, x=%f, y=%f e z=%f", p, x, y, z);
	
	return 0;
}

