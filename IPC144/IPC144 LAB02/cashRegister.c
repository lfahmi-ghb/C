// Student Number: 109742197
// Email:          lfahmi1@myseneca.ca
// Section:        NZB
// Workshop:       2 (in-lab)
//=============================================


#include <stdio.h>
#include <stdlib.h>

int main()
{
	double cash, GST, balance;


	printf("Please enter the amount to be paid: $");
	scanf("%lf", &cash);

	GST = cash * 0.13 + 0.005;
	printf("GST: %.2lf\n", GST);

	balance = GST + cash;
	printf("Balance owing: $%.2lf\n", balance);


	//CALCULATING LOONIES + REMAINING CENTS
	int loonies;
	float cents;

	loonies = balance;
	cents = balance - loonies; //to calculate the cents

	printf("Loonies required: %d, balance owing $%.2f\n", loonies, cents);



	//CALCULATING QUARTERS + REMAINDER
	int quarters;
	float quartRem;

	quarters = (cents / 0.25);
	quartRem = (cents - quarters * 0.25); //to get the quarters amount (.68 /.25)

	printf("Quarters required: %d, balance owing $%.2f\n", quarters, quartRem);


	//  CALCULATING DIMES + REMAINDER
	int dimes;
	float dimesRem;

	dimes = (quartRem / 0.10);
	dimesRem = (quartRem - dimes * 0.10);

	printf("Dimes required: %d, balance owing $%.2f\n", dimes, dimesRem);

	//CALCULATING NICKLES + REMAINDER
	int nickles;
	float nicklesRem;

	nickles = (dimesRem / 0.05);
	nicklesRem = (dimesRem - nickles * 0.05);

	printf("Nickels required: %d, balance owing $%.2f\n", nickles, nicklesRem);

	//CALCULATING PENNIES + REMAINDER
	int pennies;
	float penniesRem;

	pennies = (nicklesRem / 0.01);
	penniesRem = (nicklesRem - pennies * 0.01);

	printf("Pennies required: %d, balance owing $%.2f\n", pennies, penniesRem);



	return 0;

}