#include <cs50.h>
#include <stdio.h>

float bill, tax, tip, total;

int main(void)
{
    bill = get_float("Bill before the tax and tip: ");
    tax = get_float("Sale tax percent: ");
    // atualização do total com o aumento da taxa
    bill = bill * (1 + (tax / 100));
    tip = get_float("Tip percent: ");
    // atualização do total com a gorjeta
    bill = bill * (1 + (tip / 100));
    // divisão do total para cada consumidor
    total = (bill / 2);
    printf("You will owe $%.2f each!\n", total);
}
