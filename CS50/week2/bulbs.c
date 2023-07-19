#include <cs50.h>
#include <stdio.h>
#include <string.h>


void print_bulb(int bit);

int main(void)
{
    string message = get_string("Message: ");// take input message from the user
    int length = strlen(message); //measure the length of the input string
    int binary[length][8]; //2 dimensional array for byte storage with word length of 8 bits
    int decimal[length]; //decimal array to store ASCII values
    for (int i = 0; i<length; i++)
    {
        decimal[i] = message[i]; //extracting ASCII value
        for(int j=7; j>=0; j--)
        {
            binary[i][j] = decimal[i]%2; //storing bits starting with least significant bit 7 first
            decimal[i] = decimal[i]/2; //overwriting the halved value in decimal array
        }
        for (int j=0; j<8; j++) //array reading loop
        {
            print_bulb(binary[i][j]); //function called to print the bulb based on bit value
            //printf("%i ", binary[i][j]); //used to print the bit values 8 bits per line
        }
        printf("\n"); //new line for every 8 bits printed
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}