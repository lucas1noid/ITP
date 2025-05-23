#include <iostream>
#include <string>
using namespace std;

/*Escreva uma função que recebe dois conjuntos de tamanho N e M, representados por
vetores de números inteiros, e retorna verdadeiro se há interseção entre os conjuntos ou
falso se são conjuntos disjuntos.
bool hasIntersection(int n, int a[], int m, int b[]);*/

bool intersec(int N, int a[], int M, int b[])
{ 
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (a[i] == b[j])
            {
            return true;
            }
              
        }
        
    }
    return false;
}

int main()
{
    int N, M;
    cin >> N >> M;

    int a[N], b[M];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < M; i++)
    {
        cin >> b[i];
    }
    if (intersec(N, a, M, b) == 0)
    {
        cout << "é falso" << endl;
    } else {
        cout << "é verdadeiro" << endl;
    }
}