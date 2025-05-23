#include <iostream>
#include <string>
using namespace std;

/*Escreva uma função que recebe dois valores inteiros e retorna seu MDC.
int mdc(int, int);*/

int MDC(int a, int b){
if (a > b) {
    if (a%b == 0)
    {
        return b;
    } else {
        return MDC(b, a%b);
    }
} else {
if (b%a == 0)
    {
        return a;
    } else {
        return MDC(a, b%a);
    }
}
    
}

int main()
{
    int N, M;

    cin >> N >> M;

    cout << "O mdc é: " << MDC(N, M) << endl;
    return 0;
}