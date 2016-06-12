/* 
*  Laboratory 4, Part A
*  Author: Jose Peña
*  UCFID: 4142431
*  Title: Stolen Orange Juice
*/

#include <stdio.h>

int main () {

	/* Variables of the Program */
	int 	oz;
	int 	times;
	int 	oz_taken;
	float 	oj_cost;
	float 	cost_per_oz;
	float 	dollar_cost;
	float 	acomulative;
	
	/* Program Input */
	/* User will be asked about OJ information */
	printf("\n\nWhat is the weight (in oz.) of the original container of OJ?\n");
	scanf("%d",&oz);

	printf("\n\nWhat is the cost of the original container of OJ in dollars?\n");
	scanf("%f",&oj_cost);

	printf("\n\nHow many times did your roommate take your juice?\n");
	scanf("%d",&times);

	/* Program Calculation and Program Output */
	cost_per_oz = oj_cost / oz;
	acomulative = 0;

	while (times > 0) {
		printf("\n\nHow much juice did your roommate take this time (in oz.)?\n");
		scanf("%d",&oz_taken);
		acomulative = acomulative + oz_taken * cost_per_oz;

		if (acomulative >= 10) {
			printf("\n\nYour roommate owes you $10.00.\n");
			acomulative = acomulative - 10;
		}
		times--;

	}

	printf("\n\nYour roommate owes you $%0.2f\n",acomulative);




	return 0;


}