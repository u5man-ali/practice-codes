//this file takes in starting and ending population sizes and calculates the years of growth
#include <cs50.h>
#include <stdio.h>

int years_calculator(int);

int main(void)
{
    // TODO: Prompt for start size
    int start;
    int end;
    int years = 0;
    do
    {
        start = get_int("Starting population size? ");
    }
    while (start < 9);

    // TODO: Prompt for end size
    do
    {
        end = get_int("Ending population size? ");
    }
    while (end < start);
    // TODO: Calculate number of years until we reach threshold
    while (start < end)
    {
        start = years_calculator(start);
        years++;
    }
    // TODO: Print number of years
    printf("Years: %i \n", years);
}

int years_calculator(int start)
{
    int born = start/3;
    int died = start/4;
    start = start + born - died;
    return start;
}