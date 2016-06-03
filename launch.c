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


 	/* User Input */
 	printf("\n\nWhat is the average temperature?\n\n");
 	scanf("%d", &avg_temp);

 	printf("What is the lowest temperature in last 24 hours?\n\n");
 	scanf("%d", &lowest_temp);

 	printf("Has the temperature been over 99°F for more than");
 	printf(" 30 minutes? Please answer Y for yes and N for no\n\n");
 	scanf(" %c", &above_99);

 	printf("Is it raining currently? Please answer Y for yes and N for no\n\n");
 	scanf(" %c", &raining);


 	/* Program Output */
 	if (avg_temp > 41 && lowest_temp > 32 && (above_99 == 'N' || 
 		above_99 == 'n') && (raining == 'N' || raining == 'n')) {
 		printf("\n\nIt is a go. The shuttle will be launched as scheduled.\n\n");
 	}
 	else if (avg_temp <= 41) {
 		printf("\n\nThe shuttle launch has been cancelled because");
 		printf(" the average temperature is below 41 degrees\n");
 	}
 	else {
 		printf("\n\nThe shuttle launch has been cancelled because:\n\n");
 		if(lowest_temp <= 32){
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