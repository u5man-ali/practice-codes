// this code takes an int between 1 and 8 and prints a double sided pyramid of that height
#include <cs50.h>
#include <stdio.h>
//declaring mario function
void mario(int);
//get height of the pyramid from user
int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    mario(height);
}
//print pyramid of the height
void mario(int height)
{
    for (int j = 1; j <= height; j++)
    {
        for (int i = height; i > j; i--) //initial space of the line
        {
            printf(" ");
        }
        for (int i = 0; i < j; i++)
        {
            printf("#"); // printing 1st group of hashes before the gap
        }
        printf("  "); // printing the gap
        for (int i = 0; i < j; i++)
        {
            printf("#"); // printing 2nd group of hashes after the gap
        }
        printf("\n");
    }
}