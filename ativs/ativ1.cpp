#include <iostream>
using namespace std;

int main () {
int N, i, P;
    cin >> N;
    i = 0;
    P = 1;
    while (i < N)
    {
    cout << P << endl;
        P = 2 * P;
    i++;
    }
return 0;
}
//código de potencias de 2