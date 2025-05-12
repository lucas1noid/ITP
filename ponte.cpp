#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int pontos[N];

    for (int i = 0; i < N; i++)
    {
        cin >> pontos[i];
    }
    // leu entradas

    int maiorP = 0;
    for (int i = 0; i < N; i++)
    {
        if (maiorP < pontos[i])
        {
            maiorP = pontos[i];
        }
    }

    int inicio = 0, fim = 0;

    for (int i = 0; i < N; i++)
    {
        if (pontos[i] == maiorP)
        {
            inicio = i;
            break;
        }
    }
    for (int i = N; i > 0; i--)
    {
        if (pontos[i] == maiorP)
        {
            fim = i;
            break;
        }
    }
    cout << fim - inicio - 1 << endl;

    return 0;
}
