#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*Escreva uma função que calcula a distância entre dois pontos 2D. Será necessário usar a
função matemática sqrt() para a raiz quadrada (use #include <cmath>)
float distance(float x1, float y1, float x2, float y2);*/

float distancia(float x1, float y1, float x2, float y2)
{
    float x=0, y=0, h=0;
    x = x1 - x2;
    y = y1 - y2;
    h = sqrt(x*x + y*y);
    return h;
}

int main()
{

    float x1, y1, x2, y2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    cout << distancia(x1, y1, x2, y2) << endl;

            return 0;
}