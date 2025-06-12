/*
Os mapas de altitudes são usados em diversas áreas da computação, como em simulações, sistemas
de informação geográfica (SIG) e jogos.

Você foi chamado para implementar um novo jogo, no qual o jogador precisa encontrar um segredo
escondido no ambiente. O segredo é uma senha formada por letras escondidas nos vales do terreno.

Nesse jogo, um vale é definido como um ponto do terreno que é menor que todos os seus
vizinhos imediatos (cima, baixo, esquerda, direita e nas diagonais). A partir da posição (linha
e coluna) de cada vale, é possível saber o índice (através da fórmula largura * linha + coluna)
da letra a ser usada em uma "chave de decodificação". A junção de todas as letras correspondentes
aos vales do terreno forma a senha do segredo. A sequência das letras segue a ordem de leitura
do terreno, de cima para baixo e da esquerda para a direita.

Por exemplo, considere o seguinte terreno:
```
1 0 3
4 5 6
7 8 4
```
Apenas os pontos das posições (0, 1) e (2, 2) são vales, pois:
- O ponto (0, 1) com valor 0 é menor que seus vizinhos: 1, 3, 4, 5, 6.
- O ponto (2, 2) com valor 4 é menor que seus vizinhos: 5, 6, 8.

Assim, como o terreno tem largura de 3, teremos os seguintes índices correspondentes aos vales:
- Para o ponto (0, 1): 3 * 0 + 1 = 1
- Para o ponto (2, 2): 3 * 2 + 2 = 8

Digamos que a chave de decodificação seja "eosqtaupiw", então a senha do segredo será formada
pelas letras nos índices 1, que é 'o', e 8, que é 'i'. Logo, o resultado é a senha "oi".

Escreva uma função que recebe um terreno (mesmo tipo definido na atividade "Terreno") e uma chave
de decodificação, e retorna a senha procurada pelo jogador. Se não houver vales, a função deve
retornar uma string vazia.

OBS: Se o índice correspondente a um vale for maior que o tamanho da chave de decodificação, esse
índice deve ser desconsiderado.

DICA: Quebre o problema em problemas menores! Por exemplo, você pode quebrar no subproblema de
verificar se um ponto do terreno é um vale. Crie uma função para isso, teste se ela funciona e
depois use essa função no problema principal.
*/


#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
using namespace std;

// mesmo tipo definido na atividade "Terreno"
struct Terreno {
    int profundidade;
    int largura;
    int altitudes[500][500];
};


// Como sugerido na dica do enunciado, é melhor quebrar o problema em partes menores.
// Esta função verifica se um ponto (i, j) do terreno é um vale.
bool eh_vale(const Terreno &terreno, int i, int j) {
  if (terreno.profundidade == 1 && terreno.largura == 1) {
    return false; // Terreno 1x1 não pode ter vales
  }
  
  // Verifica os vizinhos os 9 vizinhos (cima, baixo, esquerda, direita e diagonais)
  // fazendo um laço duplo para percorrer tanto no i quanto no j
  // Outra solução seria sair comparando com cada vizinho individualmente, mas
  // o laço duplo é mais compacto e fácil de entender.
  for (int di = -1; di <= 1; ++di) {   // di varia de -1 a 1
    for (int dj = -1; dj <= 1; ++dj) { // dj varia de -1 a 1
      if (di != 0 || dj != 0) { // quero só os vizinhos e não o próprio ponto
        int vi = i + di; // posição do vizinho com deslocamento em i
        int vj = j + dj; // e com deslocamento em j
        // só faz algo se o vizinho estiver dentro dos limites do terreno
        if (vi >= 0 && vi < terreno.profundidade && vj >= 0 && vj < terreno.largura) {
          // se o vizinho for menor ou igual ao ponto atual, não é um vale
          if (terreno.altitudes[vi][vj] <= terreno.altitudes[i][j]) {
            return false;
          }
        }
      }
    }
  }
  // se nenhum vizinho foi menor ou igual, então é um vale
  return true;
}

string senha(const Terreno& terreno, const string& chave) {
  string codigo = ""; // a senha começa vazia
  
  // percorre todos os pontos do terreno
  for (int i = 0; i < terreno.profundidade; ++i) {
    for (int j = 0; j < terreno.largura; ++j) {
      // sempre que for um vale, adiciona a letra correspondente da chave
      if (eh_vale(terreno, i, j)) {
        int indice = terreno.largura * i + j;
        // se o índice for menor que o tamanho da chave, adiciona a letra na senha
        if (indice < chave.size()) {
          codigo += chave[indice];
        }
      }
    }
  }
  return codigo;
} 

// --- Testes ---
// Você pode definir novos testes para a sua função aqui

// Mas esta parte não pode ser alterada!
TEST_CASE("Testa a senha formada por um terreno e uma chave de decodificação") {
  Terreno t1 = {3, 3, {{1, 0, 3}, {4, 5, 6}, {7, 8, 4}}}; // Terreno 3x3
  Terreno t2 = {2, 2, {{1, 2}, {3, 1}}};       // Terreno 2x2 sem vales (vizinhos nas diagonais são iguais)
  Terreno t3 = {1, 1, {{5}}};                  // Terreno 1x1 não tem vale
  Terreno t4 = {2, 3, {{1, 0, 3}, {4, 5, 6}}}; // Terreno 2x3 com um vale 

  CHECK(senha(t1, "eosqtaupiw") == "oi");
  CHECK(senha(t1, "abcde") == "b");      // Testa com chave menor que número de vales
  CHECK(senha(t1, "") == "");            // Testa com chave vazia
  CHECK(senha(t2, "dshf") == "");        // Terreno 2x2 sem vales
  CHECK(senha(t3, "cjksfdj") == "");     // Terreno 1x1 não tem vale
  CHECK(senha(t4, "eosqtaupiw") == "o"); // Terreno 2x3 com um vale
}