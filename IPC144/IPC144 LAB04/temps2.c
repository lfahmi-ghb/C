// Student Number: 109742197
//Name: Lara Fahmi
// Email:          lfahmi1@myseneca.ca
// Section:        NZB
// Workshop:       4 (home)
//=============================================

#include <stdio.h>
#include <stdlib.h>

int main() {
	int days, i, aveDay;
	int highDay[50], lowDay[50];
	int highSum = 0; 
	int lowSum = 0;
	double average = 0;

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");

	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &days);
	printf("\n");

	while (days > 10 || days < 3) {

		printf("Invalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &days);
		printf("\n");

	}


	for (i = 0; i < days; i++) {

		printf("Day %d - High: ", i + 1);
		scanf("%d", &highDay[i]);
		printf("Day %d - Low: ", i + 1);
		scanf("%d", &lowDay[i]);

	}

	printf("\n");
	printf("Day  Hi  Low\n");

	for (i = 0; i < days; i++)
		printf("%d    %d    %d\n", i + 1, highDay[i], lowDay[i]);


	//CALCULATING THE HIGHEST AND LOWEST TEMPS
	int highest, lowest;
	highest = highDay[0];
	lowest = lowDay[0];

		for (i = 0; i < days; i++) {
				if (highest < highDay[i])
					highest = highDay[i];

		}

		for (i = 0; i < days; i++) {
				if (lowest > lowDay[i])
				lowest = lowDay[i];
		}

	printf("\n");
	printf("The highest temperature was %d, on day %d\n", highest, days - 3);
	printf("The lowest temperature was %d, on day %d", lowest, days - 1);
	printf("\n");


	
	//CALCULATING THE MEAN
	printf("\n");
	printf("Enter a number between 1 and %d to see the average temperature for the entered number of days, enter a negative number to exit: ", days);
	scanf("%d", &aveDay);


	while (aveDay > days || aveDay == 0)
	{

		printf("\nInvalid entry, please enter a number between 1 and %d, inclusive: ", days);
		scanf("%d", &aveDay);


		while (aveDay <= days && aveDay > 0) {


			for (i = 0; i < aveDay; i++) {

				highSum += highDay[i];
				lowSum += lowDay[i];
				average = (double)(highSum + lowSum) / (aveDay * 2);

			}

			
			printf("\nThe average temperature up to day %d is: %.2lf", aveDay, average);
			printf("\n");
			printf("\nEnter a number between 1 and %d to see the average temperature for the entered number of days, enter a negative number to exit: ", days);
			scanf("%d", &aveDay);

			highSum = 0, lowSum = 0, average = 0;


		}


	}


	if (aveDay < 0) {
		printf("\n");
				printf("Goodbye!");
				printf("\n");
			}

	return 0;
}

