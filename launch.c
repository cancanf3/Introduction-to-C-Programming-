#include <stdio.h>
/*
 *	Author: Jose Peña
 *  UCFID: 4142431
 * 	Date: 06/03/16
 *	Assigment 3: Weather Check
 */

 int main () {

 	/* Program Variables */
 	int avg_temp;
 	int lowest_temp;
 	char above_99;
 	char raining;
 	int errors; 

 	/* User Input */
 	errors = 0;
 	printf("\n\nWhat is the average temperature?\n\n");
 	scanf("%d", &avg_temp);
 	if (avg_temp < 41) {
 		errors++; 
 	}

 	printf("What is the lowest temperature in last 24 hours?\n\n");
 	scanf("%d", &lowest_temp);
 	if (lowest_temp < 32){
 		errors++;
 	}

 	printf("Has the temperature been over 99°F for more than");
 	printf(" 30 minutes? Please answer Y for yes and N for no\n\n");
 	scanf(" %c", &above_99);
 	if (above_99 != 'N' && above_99 != 'n'){
 		errors++;
 	}

 	printf("Is it raining currently? Please answer Y for yes and N for no\n\n");
 	scanf(" %c", &raining);
 	if (raining != 'N' && raining != 'n'){
 		errors++;
 	}

 	/* Program Output */
 	if (errors == 0) {
 		printf("\n\nIt is a go. The shuttle will be launched as scheduled.\n\n");
 	}
 	else if (errors == 1) {
 		printf("\n\nThe shuttle launch has been cancelled because");
 		if (avg_temp < 41){
 			printf(" the average temperature is below 41 degrees\n");
 		}
 		else if(lowest_temp < 32){
 			printf(" the temperature has dropped below freezing in the last 24 hours\n");
 		}
 		else if(above_99 != 'N' && above_99 != 'n') {
 			printf(" the temperature has been over 99°F for more than 30 minutes\n");
 		}
 		else {
 			printf(" it is raining\n");
 		}

 	}
 	else {
 		printf("\n\nThe shuttle launch has been cancelled because:\n\n");
 		if (avg_temp < 41){
 			printf("The average temperature is below 41 degrees\n\n");
 		}
 		if(lowest_temp < 32){
 			printf("The temperature has dropped below freezing in the last 24 hours\n\n");
 		}
 		if(above_99 != 'N' && above_99 != 'n') {
 			printf("The temperature has been over 99°F for more than 30 minutes\n\n");
 		}
 		if(raining != 'N' && raining != 'n') {
 			printf("It is raining\n\n");
 		}
 	}

 	return 0;
 }