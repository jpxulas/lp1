//Dado um número natural na base binaria, transformá-lo para a base decimal.
//Exemplo: Dado 18 a saída deverá ser 10010


#include <iostream>

using namespace std;

int main()
{

    int BINARIO , FINAL , RESTO = 0;
    int numero[8];

    cout << " Digite o valor do número binario;" << endl;
    cin >> BINARIO;

    for (int i = 0; i < 8; i++)
    {
       numero[i] = BINARIO % 10;
       BINARIO /= 10;
    }
    for (int i = 7; i >= 0; i--) 
    {
       FINAL = (RESTO * 2) + numero[i];
       RESTO = FINAL;
    }
    cout << endl << "Qual é o número equivalente em decimal:" << FINAL << endl;