/* Escreva uma fun??o que tem como par?metros de entrada e sa?da tr?s n?meros inteiros, dia, m?s e ano, representando uma data, e modifica esses inteiros de forma que eles representem o dia seguinte */


#include <stdio.h>
#include <stdlib.h>

int verifica_bissexto(int x){
    if(x%400==0 || x%4==0 && x%100!=0)
        return 1;
    else
        return 0;
}

int calcula_proximo_dia(int *dia, int *mes, int *ano){
    int ano_bissexto = 0;
    
    ano_bissexto = verifica_bissexto(*ano);
    
    if(*dia == 31 && *mes == 12){ 
        *ano = *ano + 1;
        *dia = 1;
        *mes = 1;
    }else if ((*mes == 1 || *mes == 3 || *mes == 5 || *mes == 7 ||
         *mes == 8 || *mes == 10 || *mes == 12) && *dia <= 31 ){ 
        if(*dia == 31){ 
            *dia = 1;
            *mes = *mes + 1;
        }else{ 
            *dia = *dia + 1;
        }
    }else if(*mes == 2){ 
        if (ano_bissexto == 1 && *dia == 29){ 
            *dia = 1;
            *mes = *mes + 1;
        }else if (ano_bissexto == 0 && *dia == 28){ 
            *dia = 1;
            *mes = *mes + 1;
        }else if ((ano_bissexto == 0 && *dia == 29) || *dia > 29){ 
            return 0;
        }else{ // acrescenta 1 dia apenas
            *dia = *dia + 1;
        }
    }else if (*dia == 30){
        *dia = 1;
        *mes = *mes + 1;
    }else if (*dia < 30){ 
        *dia = *dia + 1;
    }else{
        return 0; 
    }
    
    return 1;
    
}


int main(void){

    int ano = 0, mes = 0, dia = 0;
    
    printf("Digite o dia: "); 
    scanf("%d",&dia);
    
    printf("\nDigite o mes: "); 
    scanf("%d",&mes);
    
    printf("\nDigite o ano: "); 
    scanf("%d",&ano);
    
    if (calcula_proximo_dia(&dia, &mes, &ano) == 0){
        printf("\nA data informada eh invalida");
    }else{
        printf("\nDia seguinte: ");
        printf("Dia: %i - Mes: %i - Ano: %i", dia, mes, ano);
    }
        
    return 0;
}

