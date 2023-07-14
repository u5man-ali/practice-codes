#include <stdio.h>
#include <string.h>


float half(float bill, float tax, float tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sales Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("$%.2f \n", half(bill_amount, tax_percent, tip_percent));
}

float half(float bill, float tax, float tip)
{
    float payment;
    tax = (tax/100)*bill;
    tip = (tip/100)*(bill+tax);
    payment = (bill + tax + tip)/2;
    return payment;
}