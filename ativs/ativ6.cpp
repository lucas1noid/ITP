#include <iostream>
using namespace std;

int main () {
    int N, V, count = 0;
    cin >> N;
    cin >> V;
    for (int i = 0; i < N; i++)
        {
           int num;
           cin >> num;
           
            if (num == V)
            {
            count++;
            }
        } 
        cout << count << endl;
return 0;
}

/*Dados dois valores inteiros N e V e uma sequência de N valores
inteiros, imprimir quantas vezes V aparece na sequência.*/
