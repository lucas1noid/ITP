#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int matriz[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int k = 0; k < N; k++)
        {
            cin >> matriz[i][k];
        }
    }
    
    bool identidade = true;
    for (int i = 0; i < N; i++)
    {
        for (int k = 0; k < N; k++)
        {
            if (i == k && matriz[i][k] != 1)
            {
                identidade = false;
                break;
            }
            if (i != k && matriz[i][k] != 0)
            {
                identidade = false;
                break;
            }
            
        }
        if (identidade == false)
        {
            break;
        }
    }
    if (identidade == true)
    {
        cout << "identidade" << endl;
    } else {
        cout << "não é identidade" << endl;
    }
    return 0;
}
