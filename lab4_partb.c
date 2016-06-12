/* 
*  Laboratory 4, Part B
*  Author: Jose Peña
*  UCFID: 4142431
*  Title: Difficulty with the Registrar
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

	/* Program Variables */
	int random_number;
	int user_pick; 

	/* Function that generate a seed from the current time */
	srand(time(NULL));
	random_number =	rand() % (500-5000)+500;

	/* Program */
	while(1) {
		printf("\n\nHow much do you think you owe?\n");
		scanf("%d", &user_pick);

		if (user_pick < random_number) {
			printf("\n\nYes, you owe more than %d dollars.\n",user_pick);
		}
		else {
			printf("\n\nNo, you do not owe more than %d dollars.\n", user_pick);
		}

		if (user_pick == random_number) {
			printf("\n\nCongratulations for figuring out you owe %d dollars.\n", user_pick);
			break;
		}
	}


	return 0;
}