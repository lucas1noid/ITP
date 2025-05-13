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

    int moda = 0;
    for (int i = 0; i < N; i++)
    {
        int temp = 0;
        for (int j = 0; j < N; j++)
        {
            if (a[i] == a[j])
            {
                temp++;
            }
        }
        if (temp > moda)
        {
            moda = a[i];
        }
    }
    cout << moda << endl;
    return 0;
}