//Gere dois vetores de 10 posições de forma lógica onde o valor a ser armazenado
//em cada posição seja correspondente aos cálculos abaixo


#include <stdio.h>
#include <stdlib.h>

int cont, aux, fat;

void fatorial(cont){
    printf("entre com um valor para saber o seu fatorial: ");
    scanf("%d",&cont);
    fat=1;
    while (cont>1)
    {
     
      fat=fat*cont;
      cont--;
   
    
        
    }
    printf("%d---",fat);
}

int main(){

    int fat[]={6};
    int fib[]={6};
    

}