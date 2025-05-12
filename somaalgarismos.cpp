#include <iostream>
using namespace std;

int main () {
int N;
cin >> N;

int soma = 0;

while (N >= 1)
{
    soma += N % 10;
    N = N / 10;
}


cout << soma << endl;

return 0;
}