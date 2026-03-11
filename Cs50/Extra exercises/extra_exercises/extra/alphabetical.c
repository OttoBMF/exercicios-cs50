#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Input: ");

    for(int i = 0, n = strlen(text); i < n; i++)
    {
        if(text[i] > text[i + 1] && text[i + 1] != 0)
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");

}
