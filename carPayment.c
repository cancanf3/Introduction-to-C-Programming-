#include <stdio.h>
/*
 *	Author: Jose Peña
 *  UCFID: 4142431
 * 	Date: 06/26/16
 *	Assigment 5: Car Financing 
 */

/* Calculates Finance amount */
float getFinanceAmt (float carCost,float deposit) {
	return carCost - deposit;
}
/* Calculates Interest Rate depening on creditscore */
float getInterestRate (int creditScore) {
	if (creditScore > 800) {
		return 0;
 	}
 	else if (creditScore > 750) {
 		return 0.02;
 	}
 	else if (creditScore > 700) {
 		return 0.03;
 	}
 	else if (creditScore > 650) {
 		return 0.07;
 	}
 	else {
 		return 0.1;
 	}
}
/* Calculates interest */
float getInterest (float financed, float interestRate) {
 	return financed * interestRate;
}
/* Calculates monthly payment */
float calculatePayment (float interest, float financed, int yearsFinancing) {
 	return (financed+interest)/(yearsFinancing*12);
}

/* Main function of the program*/
int main () {

	/* Program Variables */
	int 	costumerID;
	int 	creditScore;
	int 	yearsFinancing;
	float 	carCost;
	float 	deposit;
	float   financed;
	float   interestRate;
	float	interest;
	float 	monthlyPayment;  
	FILE* 	file_in;
	FILE* 	file_out;

	/* Open input.txt/output.txt files */
	file_in 	= fopen("input.txt", "r");
	file_out 	= fopen("output.txt", "w");

	/* Checking if files opened succesfully */
	if (file_in != NULL && file_out != NULL) {
		fscanf(file_in,"%d %d %f %f %d",&costumerID, &creditScore, 
										&carCost, &deposit, &yearsFinancing);
		while(costumerID != 0)	{
			financed 		= getFinanceAmt(carCost,deposit);
			interestRate	= getInterestRate(creditScore); 
			interest 		= getInterest(financed, interestRate);
			monthlyPayment  = calculatePayment(interest, financed, yearsFinancing);
			fprintf(file_out,"%d %0.2f\n\n",costumerID, monthlyPayment);
			fscanf(file_in,"%d %d %f %f %d",&costumerID, &creditScore, 
										&carCost, &deposit, &yearsFinancing);

		}
		fclose(file_in);
		fclose(file_out);
	}
	else {
		printf("The input.txt/output.txt could not be opened. Exitcode: 1\n");
		return 1;
	}
	return 0;
}