#include <cs50.h>
#include <stdio.h>

int i, x;
int number;

int main(void)
{
    // loop while para confirmar se o número é positivo
    while (number <= 0)
    {

        number = get_int("Height: ");
    }

    x = number;

    while (number > 0)
    {

        for (i = (number - 1); i > 0; i--)
        {

            printf(" ");
        }
        for (i = 0; i <= (x - number); i++)
        {

            printf("#");
        }
        printf("  ");

        for (i = 0; i <= (x - number); i++)
        {

            printf("#");
        }
        printf("\n");

        number--;
    }
}
