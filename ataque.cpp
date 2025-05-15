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
    int mov[N];
    for(int i = 0; i < N; i++)
    {
        cin >> mov[i]; 

    }
    // movimentos
    /*
    -1 = esquerda
    0 = atira
    1 = direita
    */
    int posi = 5;
    int pmax = 10, pmin = 0;
    bool game = true;
    
    for (int i = 0; i < N; i++)
    {
        if ((bomba[i] == posi) ){
            cout << "Game Over" << endl;
            game = false;
            break;
        } else if ((mov[i] != 0) && (posi < pmax) && (posi > pmin)){
            //movimentando caso nao morra
            posi += mov[i];
        } else if ((mov[i] == 0)){
            //testando e destruindo todas as bombas que ainda vao cair no ponto em que o personagem atirou
            for(int j = i; j < N; j++){
                if(posi == bomba[j]){
                    bomba[j] = -1;
                }
            }
        } 
    }
    
    if(game == true){
        cout << posi << endl;
    }

    return 0;
}