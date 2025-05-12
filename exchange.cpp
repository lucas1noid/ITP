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
    
    // apenas primeiro termo

    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
   
   //resto
   for (int j =0; j < N - 1 ; j++){ 
    for (int i = j+1; i < N ; i++)
    {
        int temp = a[j];
        if (a[j] > a[i])
        {
            a[j] = a[i];
            a[i] = temp;
        } 

    }
    for (int i = 0; i < N; i++)
    {
    cout << a[i] << " ";
    }
     cout << endl;
    
   }
    return 0;
}