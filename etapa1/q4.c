//Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto
//mandou criar uma ficha para cada mercadoria com o nome, preço de compra, preço de venda. Fazer um
//algoritmo que:
//Determine e escreva quantas mercadorias proporcionam :
//a) Lucro < 20 % b) 20% <= Lucro <= 30% c) Lucro > 30%

#include <stdio.h>
#include <stdlib.h>


int i, cont=0;
int b,n,m; //contadores dos resultados

struct produto
{
    char name[50];
    float precoC;
    float precoV;

};

struct produto item[20];


void cadastro(struct produto item[cont]){
    do
    {
        printf("Adicionar produto?\n");
        
        printf("Nome do Produto:");
        scanf("%s",&item[cont].name[50]);

        printf("Preco de compra: ");
        scanf("%f",&item[cont].precoC);

        printf("Preco de venda: ");
        scanf("%f",&item[cont].precoV);

        printf("\n");
        printf("Produco cadastrado com sucesso\n");
        printf("==============================\n");
        cont++;

        printf("Digite 1 para continuar ou 0 para sair.");
        scanf("%d",&i);
        cont++;
    }
    while  (i != 0);

   printf("Teste \n");
   printf("%s \n", item[0].name);
   printf("%s \n", item[1].name);


}


void calculoLucro(struct produto item[]){
    float lucro;
    float porcent;

 
    lucro    = item[cont].precoV-item[cont].precoC;
    printf("%.2f",lucro);
    porcent  = item[cont].precoV/lucro;
    
    if (porcent < 0.2)
    {
      b++;
    }

    if (porcent >= 0.2 && porcent <= 0.3)
    {
        n++;
    }
    
    if (porcent > 0.3)
    {
        m++;
    }

    printf("Menos de 20 por cento de lucro: %d",b);
    printf("Mais de 20 e menos de 30 por cento de lucro: %d",n);
    printf("Mais de 30 por cento de lucro: %d",m);

}

int sair() {
  exit(1);
  return 1;}

int main () {
	struct produto item[cont];
	int opcao =0;
	
	while (opcao != 3){
		printf ("\n\n################# MENU ###############");
		printf ("\n1 - Cadastra produtos");
		printf ("\n2 - Calcular Lucro e exibir produtos");
		printf ("\n3 - Sair");
		printf ("\nQual a sua opcao? "); 
		scanf ("%d", &opcao); 
		

		switch (opcao){
			case 1: cadastro (item);
					break; 
			case 2: calculoLucro (item);
					break;
      case 3: sair();

			default: 
					printf ("\nOpcao invalida!");
        }
    }
}
