#include <iostream>
using namespace std;

/*Dados dois números inteiros positivos A e B, representando a fração
A/B, imprimir a fração irredutível de A/B.*/
int main () {
int A,B;

cout << "Digite o numerador (A): ";
cin >> A;
cout << "Digite o denominador (B): ";
cin >> B;

int div;
if (A > B)
    {
    div = B;
} else {
    div = A;
}

return 0;
}

//inacabado