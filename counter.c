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



	/* Client's interaction part */
	printf("\nPlease enter the number of quarters.\n\n");
	scanf("%d", &numQuarters);

	printf("\nPlease enter the number of dimes.\n\n");
	scanf("%d", &numDimes);

	printf("\nPlease enter the number of nickels.\n\n");
	scanf("%d", &numNickels);

	printf("\nPlease enter the number of pennies.\n\n");
	scanf("%d", &numPennies);


	/* Calculation part */
	centValue = numQuarters * Quarter + numDimes * Dime + numNickels * Nickel +
				numPennies * Penny;

	printf("\nYou have %d cents \n\n", centValue);

	/* Program termination */

	return 0;


}