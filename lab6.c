/* 
*  Laboratory 6, Part A
*  Author: Jose Peña
*  UCFID: 4142431
*  Title: Accounting
*/

#include <stdio.h>


int main () {

	/* Program Variables */
	int 	num_transaction;
	int 	type_transaction;
	int 	value_transaction;
	int 	id_transaction; 
	int 	accounts[99];
	int 	debts;
	int 	i,j;
	FILE* 	file_in;


	/* Initialized the Array with 0s */
	for (i = 0; i < 100; i++) {
		accounts[i] = 0;
	}
	debts = 0;

	/* Open the File */	
	file_in 	= fopen("account3.txt", "r");
	/* Check if File was openned succesfully */
	if (file_in == NULL) {
		printf("The File doesn't exist! Exit Code: 1\n");
		return 1;
	}

	/* Reading input file and Accounting */
	fscanf(file_in,"%d",&num_transaction);
	for (i = 0; i < num_transaction ; i++) {
		fscanf(file_in, "%d", &type_transaction);
		/* Payment Received */
		if (type_transaction == 1) {
			fscanf(file_in, "%d %d", &id_transaction, &value_transaction);
			accounts[id_transaction] = accounts[id_transaction] 
										+ value_transaction;
		}
		/* Item given to a customer */
		else if (type_transaction == 2) {
			fscanf(file_in, "%d %d", &id_transaction, &value_transaction);
			accounts[id_transaction] = accounts[id_transaction] 
										- value_transaction;
		}
		/* Account Balances */
		else {
			for (j = 0; j < 100; ++j) {
				if (accounts[j] < 0) {
					debts = 1;
					printf("Customer %d, you owe $%d. Please pay immediately!\n"
														, j, accounts[j]*(-1));
				}
			}
			if (debts == 0) {
				printf("All accounts are paid up to date!!!\n");
			}
			debts = 0;
		}


	}
	/* Closing File */
	fclose(file_in);


	return 0;
}