#include<stdio.h>
int main()
{
    double total_amount, loan, interest, number_of_year, monthly_amount;

    printf("Enter loan: ");
    scanf("%lf", &loan);

    printf("Interest: ");
    scanf("%lf", &interest);

    printf("Number of year: ");
    scanf("%lf", &number_of_year);

    total_amount = loan + loan * interest * number_of_year / 100.00;
    monthly_amount = total_amount / (number_of_year * 12);

    printf("Total amount: %lf\n", total_amount);
    printf("Monthly amount: %lf\n", monthly_amount);

    return 0;
}
