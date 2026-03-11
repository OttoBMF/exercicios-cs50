#include <cs50.h>
#include <stdio.h>

// Protótipo
long last_digit(long numero);
long stl_digit(long numero);

int main(void)
{
    int total;
    int num1, num2;
    long numero = 515151;

    num1 = last_digit(numero);
    num2 = stl_digit(numero);
    total = num1+ num2;
    printf("Soma: %i\n", total);
}

long last_digit(long numero)
{
    int x = 1;
    int i, digito;
    int soma = 0;

    for (i = 1; i < numero; i++)
    {
        digito = numero % (10 * x);
        while (digito >= 10)
        {
            digito = digito / 10;
        }
        printf("%i\n", digito);
        i *= 100;
        x *= 100;
        soma += digito;
    }
    printf("Soma: %i\n", soma);
    return soma;
}

long stl_digit(long numero)
{
    int x = 1;
    int i, digito;
    int dsoma = 0;

    for (i = 1; i < numero; i++)
    {
        digito = numero % (100 * x);
        while (digito >= 10)
        {
            digito = digito / 10;
        }
        printf("%i\n", digito);
        i *= 100;
        x *= 100;
        digito = (digito * 2);
        if (digito >= 10)
        {
            digito = (digito / 10) + (digito % 10);
        }
        dsoma += digito;
    }
    printf("Soma: %i\n", dsoma);
    return dsoma;
}

