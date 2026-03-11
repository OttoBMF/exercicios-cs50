// inclusão das bibliotecas
#include <cs50.h>
#include <stdio.h>

// declaração das variáveis
int coins, change;

// inicialização do código
int main(void)
{
    // loop while para repetir o if de dentro
    while (true)
    {
        // if para verificar que o troco é maior que zero
        if (change <= 0)
        {
            // pergunta qual o valor do troco
            change = get_int("Change owed: ");
        }
        else
        {
            break;
        }
    }
    // pergunta se o troco restante é maior que 25 centavos
    if (change >= 25)
    {
        coins += (change / 25);
        change %= 25;
    }
    // pergunta se o troco restante é maior que 10 centavos
    if (change >= 10)
    {
        coins += (change / 10);
        change %= 10;
    }
    // pergunta se o troco restante é maior que 5 centavos
    if (change >= 5)
    {
        coins += (change / 5);
        change %= 5;
    }
    // pergunta se o troco restante é maior que 1 centavo
    if (change >= 1)
    {
        coins += (change / 1);
        change %= 1;
    }
    // exibe a quantidade de moedas totais utilizadas no troco
    printf("%i\n", coins);
}
