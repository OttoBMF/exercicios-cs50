#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, n;
    string text = get_string("Text: ");
    for(n = strlen(text), i = n; i >= 0; i--)
    {
        printf("%c", text[i]);
    }
    printf("\n");
}
