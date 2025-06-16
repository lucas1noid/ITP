#include <iostream>
using namespace std;

/*Um número inteiro é chamado de 'perfeito' se ele é igual a soma de seus
divisores. Por exemplo, 6 é 'perfeito', pois 6 = 1 + 2 + 3. Dado um
número inteiro positivo N, imprimir todos os números perfeitos
menores que N.*/

//soma dos divisores primeiro

int main () {
int N;
cin >> N;
int soma = 0;
for (int i = 1; i < N; i++)
{
    if (N % i == 0)
        {
        soma = soma + i;
        }
    
}

cout << soma << endl;

if (N == soma)
{
    cout << "é um número perfeito" << endl;
} else {
    cout << "não é perfeito" << endl;
}

return 0;
}