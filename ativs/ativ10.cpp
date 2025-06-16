#include <iostream>
using namespace std;

/*Dado um número inteiro positivo n, verificar se o primeiro e o último
dígito deste número são iguais. Caso sejam iguais imprima 1 (um) caso
não seja imprima 0 (zero).*/

//separar os algarismos de um número
int main () {
int N, unum, pnum;
cin >> N;

    unum = N % 10;

    while (N > 10)
    {
    N = N / 10;
    } 
    pnum = N;
    if (unum == pnum)
    {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
    

return 0;
}