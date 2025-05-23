#include <iostream>
#include <string>
using namespace std;

/*Escreva uma função que recebe um vetor de inteiros e o número de elementos
dele e retornar o maior valor do vetor.
int max(int[], int);*/

int max(int vetor[], int N)
{
    int maior = vetor[0];
    for (int i = 1; i < N; i++)
    {
        if (vetor[i] > vetor[i - 1])
        {
            maior = vetor[i];
        }
    }
return maior;
}

int main()
{
    int N;
    cin >> N;
    int vetor[N];

    for (int i = 0; i < N; i++)
    {
        cin >> vetor[i];
    }

    cout << "o maior valor é: " << max(vetor, N) << endl;

    return 0;
}