#include <iostream>
using namespace std;

int main () {
    int N;
    cin >> N;
    int soma = 0;
    for (int i = 0; i <= N; i++)
        {
            soma += i;  
        }
        /*teste numerador*/ cout << soma << endl;
    int resultado = 0;
    resultado = soma / N;
        cout << resultado << endl;
    return 0;
}

/*Dado um valor inteiro N e uma sequência de N valores inteiros,
imprimir a média dos valores da sequência*/
