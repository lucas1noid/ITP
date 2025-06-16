#include <iostream>
using namespace std;

/*Dado um valor inteiro N, imprimir todos os números primos menores
ou igual a N.*/

int main () {
    int N;
    cin >> N;
    for (int i = 1; i < N; i++)
    {
        int div = 0;
        for (int o = 1; o <= i; o++)
        {
            if (i % o == 0) {
            div++;
            }
        }
        if (div == 2)
        {
        cout << i << endl;
        }
    }
    

return 0;
}