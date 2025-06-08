using namespace std;


enum Valor {
    As, V1, V2, V3, V4, V5, V6, V7, V8, V9, V10, J, Q, K, Joke
};


enum Naipe {
    Copas, Espadas, Paus, Ouros
};

struct Carta 
{
    Valor valor;
    Naipe naipe;    
};

struct Cartas
{
    int quantidade;
    Carta cartas[54];
};


int main () {
    Valor valor_cartas;    
    Naipe naipe = Paus;

    Carta c = {Q, Ouros};

    Cartas cs = {
        3, 
        {{Q, Ouros}, {V5, Paus}, {As, Copas}}
    };
}
