#include <stdio.h>
/*
 *	Author: Jose Peña
 *  UCFID: 4142431
 * 	Date: 05/30/16
 *	Assigment 2: Tax refund calculator
 */

/* Macros for constant values in the program */
#define dependent_allocation 3000
#define personal_allowance 5000 


int main () {

	/* Program Variables */
	float 	salary;
	float 	tax_due;
	float 	tax_paid;
	float 	returning;
	int 	dependents;
	


	/* Program messages */
	printf("\nWelcome to my EasyTax program.\n\n");
	printf("Please enter your annual income\n\n");
	printf("the tax paid for the year\n\n");
	printf("and the number of your dependents\n\n\n\n");

	/* User input */
	scanf("%f",&salary);
	printf("\n");
	scanf("%f",&tax_paid);
	printf("\n");
	scanf("%d",&dependents);

	/* Calculation */
	tax_due = (salary - personal_allowance - 
			  dependents * dependent_allocation) * 0.25;

	/* Program output */
	printf("\n\n\nHere is your tax summary:\n\n");
	printf("You made $%0.2f this year\n\n", salary);
	printf("You have claimed for %d dependents\n\n",dependents);
	printf("Your tax due was $%0.0f\n\n",tax_due);
	printf("You paid $%0.2f in tax\n\n", tax_paid);
	
	if (tax_paid > tax_due) {
		returning = tax_paid - tax_due;
		printf("Congratulations! You are due a refund of %0.2f\n", returning);
	}
	else if(tax_paid < tax_due){
		returning = tax_due - tax_paid;
		printf("You owe the government $%0.2f\n", returning);
	}
	else {
		printf("You do not owe the government and there is no refund due.\n");
	}



	return 0;
}