//Faça um programa que calcule o fatorial de um numero informado pelo usuario. Obs: O fatorial de 0 é 1.

#include <stdio.h>
#include <stdlib.h>

int cont, aux, fat;

int main(){
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