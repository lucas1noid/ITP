using namespace std;

bool functem(int valor, int seq[], int tam)
{
    if (tam == 1)
    {
        if (seq[0] == valor)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if (valor == seq[tam / 2])
    {
        return true;
    }

    if (valor < seq[tam / 2])
    {
        return functem(valor, seq, tam/2);
    } else {
        return functem(valor, seq + tam/2, tam/2);
    }
}
