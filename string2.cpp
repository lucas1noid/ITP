#include <iostream>
#include <string>
using namespace std;

/*Escreva um programa que leia uma string e 
envie para a saída as letras
iniciais de cada palavra em maiúscula e 
as demais em minúscula*/
int main () {
    string str;
    
    getline(cin, str);
    
    int p = 0;

    str[0] = toupper(str[0]);
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            str[i + 1] = toupper(str[i + 1]);
        
        }
        
    }
         
    cout << str << endl;

    return 0;
}