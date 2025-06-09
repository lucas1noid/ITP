#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum Foco {
    idh, pop
};

int tam = 0;
double media_idh = 0;
int long media_pop = 0;

struct _pais
{
    char sigla[4];
    int long populacao;
    double idh;
};

void addpaises(_pais seq[254]){
for (int i = 0; i < 254; i++)
{
    cin >> seq[i].sigla;
     if (seq[i].sigla[0] == '-')
    {
        break;
    }
    tam++;
    cin >> seq[i].populacao;
    cin >> seq[i].idh;
}

}

void media(Foco f, _pais seq[254]){
    
    if (f == idh)
{   
    for (int i = 0; i < tam; i++)
    {
    media_idh += seq[i].idh;  
    }
    media_idh = media_idh/tam;

} else {
    for (int i = 0; i < tam; i++)
    {
    media_pop += seq[i].populacao;  
    }
    media_pop = media_pop/tam;
}
};


int main (){
   
    _pais paises[254];
    
    addpaises(paises);
    
    media(idh, paises);
    
    media(pop, paises);

    for (int i = 0; i < tam; i++)
    {
        //cout << media_idh  << " " << paises[i].idh << " " << media_pop << " " << paises[i].populacao << "\n";
        if (media_idh > paises[i].idh && media_pop < paises[i].populacao)
        {
           cout << paises[i].sigla << endl;
        }
        
    }  
    return 0;
}