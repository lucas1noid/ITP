#include <iostream>
using namespace std;

/*Dado um número inteiro positivo N e dois números naturais não nulos I
e J, imprimir em ordem crescente os N primeiros naturais múltiplos de I
ou de J (ou de ambos).*/

int main () {
    int N, I, J;
    cin >> N;
    
    cin >> I >> J;
    
    for (int i = 1; i <= N; i++)
    {
        if (i % I == 0)
        {
            cout << i << endl;
        } else if (i % J == 0)
        {
            cout << i << endl;
        }
        
    }
return 0;
}
