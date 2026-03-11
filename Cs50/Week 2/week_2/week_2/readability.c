// Inclusão de bibliotecas
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Prototipação
void grade(int letters, int space, int dots);
int letters(string word);
int space(string word);
int dots(string word);

// Início da função principal
int main(void)
{
    int letras, espacos, pontos;
    // Solicitar um texto
    string text = get_string("Text: ");

    // Coleta dos valores necessários para a função grade
    letras = letters(text);
    espacos = space(text);
    pontos = dots(text);

    //
    grade(letras, espacos, pontos);
}

// Essa função pede três entradas(número de letras, espaços e pontos)
// para calcular tudo. Não retorna nada mas mostra o valor para o usuário.
void grade(int letters, int space, int dots)
{

    const float a = 0.0588, b = 0.296, c = 15.8;

    float l = ((float) letters / (space + 1)) * 100;
    float s = ((float) dots / (space + 1)) * 100;

    float index = (((a * l) - (b * s)) - c);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %.0f\n", index);
    }
}

// Essa função calcula o número de letras
int letters(string word)
{
    int i, n, letters = 0;

    for (i = 0, n = strlen(word); i < n; i++)
    {
        if ((word[i] >= 'A' && word[i] <= 'Z') || (word[i] >= 'a' && word[i] <= 'z'))
        {
            letters += 1;
        }
    }
    return letters;
}

// Essa função calcula o número de espaços no texto inserido
int space(string word)
{
    int i, n, space = 0;

    for (i = 0, n = strlen(word); i < n; i++)
    {
        if (word[i] == ' ')
        {
            space += 1;
        }
    }
    return space;
}
// Essa função calcula o número total de pontos(".", "!" ou "?")
int dots(string word)
{
    int i, n, dots = 0;
    for (i = 0, n = strlen(word); i < n; i++)
    {
        if (word[i] == '.' || word[i] == '!' || word[i] == '?')
        {
            dots += 1;
        }
    }
    return dots;
}
