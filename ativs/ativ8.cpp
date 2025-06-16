#include <iostream>
using namespace std;

/*Dado um inteiro N, imprimir as figuras a seguir com lados de tamanho
N (caracteres)*/

int main () {
int N;
cin >> N;
for (int i = 1; i <= N; i++)
{
    for (int j = 1; j <= i; j++)
    {
        if (j == 1 or j == i or i == N)
            {
            cout << "* ";
            } else 
                {
                cout << "  ";
                }
        
    }
    cout << endl;
}

return 0;
}