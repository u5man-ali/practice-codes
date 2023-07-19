#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

float calc_hours(int hours[], int weeks, char output); //declaring the function calc_hours

int main(void)
{
    int weeks = get_int("Number of weeks taking CS50: "); //getting the number of weeks from user
    int hours[weeks]; //declaring integer array with appropriate length

    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i); //getting input of hours studied in each week
    }

    char output;
    do
    {
        output = toupper(get_char("Enter T for total hours, A for average hours per week: ")); //getting the input for selector to calculate average or total hours.
    }
    while (output != 'T' && output != 'A'); //checking the condition for correct input

    printf("%.1f hours\n", calc_hours(hours, weeks, output)); //output of the program along with the called function which calculates the value
}

// TODO: complete the calc_hours function
float calc_hours(int hours[], int weeks, char output)
{
    float result = 0; //declaring float type for the output result
    for (int i=0; i<weeks; i++)
    {
        result += hours[i]; //calculating total
    }
    if(output == 'A') //check the output character
    {
        result = result/weeks; //calculating average only if condition is true
    }
    return result;
}