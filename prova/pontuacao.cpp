#include <iostream>
using namespace std;

int main() {
    // identifique as variáveis que você vai precisar
    // declare as variáveis com seus respectivos tipos
    // não se esqueça de inicializar as variáveis ou lê-las da entrada

    // execute um laço para ler as bombas
    // e ir acumulando o valor das bombas na pontuação do jogador

    // envie a pontuação para a saída
    int N;
    
    cin >> N;

    int bomba[N];

    int pontos = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> bomba[i];
        if (bomba[i] == 1)
        {
        pontos += 10;
        } else if (bomba[i] == 2)
            {
                pontos += 50;
            } else {
                pontos += 90;
            }
    } 
    
    cout << pontos << endl;
 
    return 0;
}
