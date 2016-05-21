/* Author: Jose Peña
 *  UCFID: 4142431
 *   Date: 05/21/2016
 *  Title: USD Coin Calculator
 */

#include <stdio.h>

int main() {


	/* Consts with the value of the coins */
	static int const Quarter = 25;
	static int const Dime 	 = 10;
	static int const Nickel  = 5;
	static int const Penny   = 1;

	/* Vars to storage the amount of coins */
	int numQuarters;
	int numDimes;
	int numNickels;
	int numPennies;
	int centValue;


	/* Introduction */
	printf("\n\n<==   Welcome to the cents Calculator!  ===>\n\n");
	printf("You're about to introduce the amount of coins you have.\n\n");


	/* Client's interaction part */
	printf("\nPlease, Introduce the amount of Quarters:\t");
	scanf("%d", &numQuarters);

	printf("\n   Please, Introduce the amount of Dimes:\t");
	scanf("%d", &numDimes);

	printf("\n Please, Introduce the amount of Nickels:\t");
	scanf("%d", &numNickels);

	printf("\n Please, Introduce the amount of Pennies:\t");
	scanf("%d", &numPennies);


	/* Calculation part */
	centValue = numQuarters * Quarter + numDimes * Dime + numNickels * Nickel +
				numPennies * Penny;

	printf("\n\nYou have %d cents. \n\n", centValue);

	/* Program termination */
	printf("Thanks for using my calculator\n\n");

	return 0;


}