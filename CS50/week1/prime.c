#include <stdio.h>
#include <cs50.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);
    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);
    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}
bool prime (int number)
{
    int count = 0;
    if (number == 1)
    {
        return false;
    }
    if (number == 2 || number == 3)
    {
        return true;
    }
    if (number%2 == 0)
    {
        return false;
    }
    if (number%2 == 1)
    {
        for (int i = 3; i < number; i+=2)
        {
            if(number%i == 0)
            {
                return false;
            }
        }
    }
    return true;
}