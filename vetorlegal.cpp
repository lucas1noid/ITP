#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int a[N];

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    // leu entradas
    int chato = 0;
    for (int i = 1; i < N; i++)
    {
        if((a[i] - a[i-1])% 2 != 0 )
        {
        chato++;
        } 

    }
    if (chato > 0)
    {
        cout << "é chato" << endl;
    } else {
        cout << "é legal" << endl;
    }
    
    return 0;
}
