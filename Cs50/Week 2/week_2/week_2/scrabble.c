// Inclusão de Bibliotecas
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Declaração da lista de pontos
const int POINTS[] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                      1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// Prototipação
int score(string player);
void compare(int p1, int p2);

// Início da função principal(main)
int main(void)
{
    // Declaração das variáveis que armazenam o resultado da função com valores digitados pelo
    // usuário
    int p1, p2;

    // Código principal
    // Solicita input
    string player_1 = get_string("Input: ");
    string player_2 = get_string("Input: ");

    // Armazena o resultado da função
    p1 = score(player_1);
    p2 = score(player_2);

    // Compara os resultados
    compare(p1, p2);
}

// Função que computa a pontuação dos jogadores
int score(string player)
{
    int score = 0;

    for (int i = 0, n = strlen(player); i < n; i++)
    {
        if (player[i] >= 'A' && player[i] <= 'Z')
        {
            score += POINTS[player[i] - 65];
        }
        else if (player[i] >= 'a' && player[i] <= 'z')
        {
            score += POINTS[player[i] - 97];
        }
    }
    return score;
}
// Função que compara os resultados e anuncia o vencedor
void compare(int p1, int p2)
{
    if (p1 > p2)
    {
        printf("Player 1 wins!\n");
    }
    else if (p2 > p1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
