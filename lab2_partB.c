/* 
*  Laboratory 2, Part B
*  Author: Jose Peña
*  UCFID: 4142431
*  Title: Stolen Orange Juice
*/

#include <stdio.h>

int main () {

	int original_Weight;
	int bclass_Weight;
	int aclass_Weight;
	int debt_oz;
	float cost;
	float debt;
	float cost_per_oz;

	printf("\n\nWhat is the weight (in oz.) of the original container of OJ?\n");
	scanf("%d",&original_Weight);

	printf("\n\nWhat is the cost of the original container of OJ in dollars?\n");
	scanf("%f",&cost);

	printf("\n\nWhat was the weight (in oz.) of the container before class?\n");
	scanf("%d",&bclass_Weight);

	printf("\n\nWhat was the weight (in oz.) of the container after class?\n");
	scanf("%d",&aclass_Weight);

	cost_per_oz = cost / original_Weight;
	debt_oz 	= bclass_Weight - aclass_Weight;
	debt 		= debt_oz * cost_per_oz;

	printf("Your roommate owes $%0.2f.\n", debt);



	return 0;
}