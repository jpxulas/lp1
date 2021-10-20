// Dizemos que um número natural n é palíndromo se
//o 1º algarismo de n é igual ao seu último algarismo,
//o 2º algarismo de n é igual ao penúltimo algarismo,
//e assim sucessivamente.
//O mesmo pode acontecer com algumas palavras, quando a ordem dos caracteres seguem a mesma regra acima

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){

    char palavra[30];
    int i, tam, diferentes = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    if (conferePalidromo() == true)
    {
        /* code */
    }
    

}

bool conferePalidromo(palavra){
    
    int tamanho;
    int i, j;

    tamanho = strlen(palavra)-1;
    i=0;
    j=0;

    while (tamanho >= i)
    {
        if (palavra[i] != palavra[tamanho])
            j++;
        i++;
        tamanho--;

        if (j==0)
            return true;
        else 
            return false;

        
    }
    


}