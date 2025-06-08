#include <iostream>
#include <string>
using namespace std;

/*
Matrizes de String

Na linguagem c vetores de caractere são strings, para criar um vetor de strings usamos uma matriz de caracteres, mas e uma matriz de strings? Projete uma estrutura para guardar uma matriz de até 10 x 10  strings de 20 caracteres no máximo! A estrutura deve conter os tamanhos atuais da matriz.

Usando a estrutura planejada, escreva uma função que recebe a matriz de strings como argumento e encontra, dentro da matriz a menor string armazenada. A funçao deve retornar uma struct no formato abaixo:

struct res{
  char str[20];
  int pos_l, pos_c;
};
O retorno deve conter a string encontrada, bem como sua posição na matriz de strings recebida (pos_l, pos_c).

Seu programa receberá como entrada os tamanhos da matriz de strings bem como a lista das strings que compõem a matriz. O programa deve armazenar as strings lidas na estrutura criada e usar a função implementada para encontrar a menor string imprimir seu valor e sua posição na matriz. Nesse programa, mantenha todas as impressões (printfs) no main.

*/

struct _matrizstr
{
    char str[20];
    int pos_l; 
    int pos_c;
};

_matrizstr menor;

void funcaofind(string matriz[10][10], int l, int c)
{ 
    menor.pos_c = 0;
    menor.pos_l = 0;
    
    for (int i = 0; i < l ; i++)
    {
        for (int j = 0; j < c ; j++)
        {
            if (matriz[menor.pos_l][menor.pos_c].size() >= matriz[i][j].size())
            {
                menor.pos_l = i;
                menor.pos_c = j;
                for (int k = 0; k < 20; k++)
                {
                    menor.str[k] = (matriz[i][j])[k];
                }
                
            }
        }
    }
}

int main () {

int L, C;
cin >> L >> C;

string matriz[10][10];
for (int i = 0; i < L; i++)
{
    for (int j = 0; j < C ; j++)
    {
        cin >> matriz[i][j];
    }
}

funcaofind(matriz, L, C);

cout << menor.pos_l << " " << menor.pos_c << endl;
cout << menor.str << endl;

return 0;
}