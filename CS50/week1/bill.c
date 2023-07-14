#include <stdio.h>
#include <string.h>
#include <cs50.h>


float half(float bill, float tax, float tip, int friends);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sales Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");
    int friends = get_int("How many friends? ");

    printf("Payment for each friend is $%.2f \n", half(bill_amount, tax_percent, tip_percent, friends));
}

float half(float bill, float tax, float tip, int friends)
{
    float payment;
    tax = (tax/100)*bill;
    tip = (tip/100)*(bill+tax);
    payment = (bill + tax + tip)/friends;
    return payment;
}