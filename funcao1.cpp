#include <iostream>
#include <string>
using namespace std;
/*Escreva uma função que recebe dois parâmetros, um float B e outro inteiro não
negativo P e retorna a potência B^P
.
float power(float, int);*/
int elevado(float B, int P)
{
    float pot=B;
    for (int i = 1; i < P; i++)
    {
    pot = pot*B;
    }
    
        return pot;
}
int main()
{
    float B;
    int P;
    cin >> B >> P;

    cout << elevado(B, P) << endl;
    
    return 0;
}