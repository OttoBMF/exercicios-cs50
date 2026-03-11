#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int hours[];
    int average;
    float total;
    int week = get_int("Number of weeks taking cs50: ");
    for(int i = 0; i <= week; i ++)
    {
        hours[week] = get_int("Week %i HW Hours: ", i);
        total += hours;
        average = total / (week);
    }
    printf("Total: %i\n", total);
    printf("Average: %i\n", average);
}
