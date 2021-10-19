//Dizemos que um inteiro positivo n é perfeito se for igual à soma de seus divisores positivos diferentes de n.

//Exemplo: 6 é perfeito, pois 1+2+3 = 6.

//Dado um inteiro positivo n, verificar se n é perfeito.

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

int num, n;

int main(){
    scanf("%d",&num);

    for (int i=1; i <= num/2; i++)
    {
        if (num%2==0)
        {
            n+=1;
        }
        
    }
    if (n==num)
    {
        printf("n eh perfeito");
    }
    else{
        printf("n neh perfeito");
    }
    
    


}