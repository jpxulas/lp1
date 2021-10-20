//Dado um número natural na base decimal, transformá-lo para a base binária.
//Exemplo: Dado 18 a saída deverá ser 10010

#include <iostream>

using namespace std;

int main()
{

    int DECIMAL;
    short BINARIO[8];

    cout << " Digite o valor do número decimal;" << endl;
    cin >> DECIMAL;

    for (int i = 0; i < 8; i++)
    {
       BINARIO[i] = DECIMAL % 2;
       DECIMAL /= 2; 

    }
    cout << "Digite o número binario:" << endl;

    for (int i = 7; i >= 0; i--) 
    {
      cout << BINARIO[i];
    }

   cout << endl;
}