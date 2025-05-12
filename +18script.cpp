#include <iostream>
using namespace std;

int main()
{

    int idade[6];
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> idade[i];
        if (idade[i] > 18)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}