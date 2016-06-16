/* 
*  Laboratory 2, Part A
*  Author: Jose Peña
*  UCFID: 4142431
*  Title: Calories Tracker
*/


#include <stdio.h>
#define CALS_PER_GR_PROTEIN 4
#define CALS_PER_GR_CARB 4 
#define CALS_PER_GR_FAT 9

int main () {

	int proteins;
	int carbs;
	int fats;
	int calories;

	printf("\n\nHow many grams of protein did you eat?\n");
	scanf("%d",&proteins);

	printf("\n\nHow many grams of carbohydrates did you eat?\n");
	scanf("%d",&carbs);

	printf("\n\nHow many grams of fat did you eat?\n");
	scanf("%d",&fats);

	calories = proteins * CALS_PER_GR_PROTEIN + carbs * CALS_PER_GR_CARB 
				+ fats * CALS_PER_GR_FAT;

	printf("You ate %d calories of food.\n", calories);




	return 0;
}	