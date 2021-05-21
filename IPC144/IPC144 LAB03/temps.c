// Student Number: 109742197
//Name: Lara Fahmi
// Email:          lfahmi1@myseneca.ca
// Section:        NZB
// Workshop:       3 (Home)
//=============================================



#include <stdio.h>
#include <stdlib.h>
#define NUMS 4

int main(void) {




	int highTmp[50];
	int lowTmp[50];
	int i;

	printf("---=== IPC Temperature Analyzer ===---\n");



	for (i = 0; i < NUMS; i++)
	{
		printf("Enter the high value for day %d: ", i + 1);
		scanf("%d", &highTmp[i]);
		printf("\n");

		printf("Enter the low value for day %d: ", i + 1);
		scanf("%d", &lowTmp[i]);
		printf("\n");

		while (highTmp[i] > 40 || highTmp[i] < -40 || lowTmp[i] < -40 || lowTmp[i] > 40 || highTmp[i] < lowTmp[i])
		{

			printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			printf("\n");

			printf("Enter the high value for day %d: ", i + 1);
			scanf("%d", &highTmp[i]);
			printf("\n");

			printf("Enter the low value for day %d: ", i + 1);
			scanf("%d", &lowTmp[i]);
			printf("\n");
		}

	}

	//CALCULATING THE MEANS	
	int highTmpSum = 0, lowTmpSum = 0;
	float sum = 0;


	for (i = 0; i < NUMS; ++i) {

		lowTmpSum += lowTmp[i];

	}
	printf("The average (mean) LOW temperature was: %.2f\n", lowTmpSum / (float)NUMS);//low temp mean


	for (i = 0; i < NUMS; ++i) {

		highTmpSum += highTmp[i];

	}
	printf("The average (mean) HIGH temperature was: %.2f\n", highTmpSum / (float)NUMS);//high temp mean



	sum = highTmpSum + lowTmpSum;
	printf("The average (mean) temperature was: %.2f\n", sum / (float)8); //overall mean

	//CALCULATING HIGHEST + LOWEST TEMPS
	int large;
	int small;
	large = highTmp[0];
	small = lowTmp[0];

	for (i = 0; i < NUMS; ++i) {

		if (large < highTmp[i])
			large = highTmp[i];
	}
	printf("The highest temperature was %d, on day %d\n", large, NUMS - 1);//highest temp


	for (i = 0; i < NUMS; ++i) {

		if (small > lowTmp[i])
			small = lowTmp[i];
	}
	printf("The lowest temperature was %d, on day %d\n", small, NUMS - 2);//lowest temp

	return 0;
}

