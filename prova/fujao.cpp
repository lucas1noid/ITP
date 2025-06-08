#include <iostream>
using namespace std;

int main() {
    // complete o código
    int N;

    cin >> N;
    
    int bomba[N];
    
    for(int i = 0; i < N; i++)
    {
        cin >> bomba[i]; 
    }
    //onde vao cair as bombas
    
    int posi = 5;
    int pmax = 10, pmin = 0;
    bool game = true;
    
    for (int i = 0; i < N; i++)
    {
        if(bomba[i] < posi && posi < pmax){
            posi += 1;
        } else if (bomba[i] > posi && posi > pmin){
            posi -= 1;
        } else if (bomba[i] == posi){
            cout << "Game Over" << endl;
            game = false;
            break;
        }
    }
    
    if(game == true){
        cout << posi << endl;
    }

    return 0;
}
