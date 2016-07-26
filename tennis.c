#include <stdio.h>
/*
 *	Author: Jose Peña
 *  UCFID: 4142431
 * 	Date: 07/25/16
 *	Assigment 8: Tennis 
 */

/* Predefine Array 2D's dimensions */
 #define ROWS 12
 #define COLUMN 8

/* Function Prototypes */
 void 	makeArray ( int scores[ROWS][COLUMN], FILE *input);
 void 	displayMenu ();
 int 	getScore ( int scores[ROWS][COLUMN], int month, int tournament);
 int 	getMonthMax ( int scores[ROWS][COLUMN], int month );
 float 	getMonthAvg ( int scores[ROWS][COLUMN], int month );
 int 	getYearMax  ( int scores[ROWS][COLUMN] );
 float	getYearAvg  ( int scores[ROWS][COLUMN] );
 int 	toursMissed ( int scores[ROWS][COLUMN] );
 void 	printArray  ( int scores[ROWS][COLUMN] );
 void 	processRequest (int scores[ROWS][COLUMN], int choice );


 int main () { 

 	/* Program Variables */
 	int scores[ROWS][COLUMN];
 	FILE *input;
 	int choice;

 	input = fopen("scores.txt","r");
 	makeArray(scores,input);

 	/* Loop to always repeat the menu */
 	do {
 		displayMenu();
 		scanf("%d", &choice);
 		processRequest(scores, choice);

 	} while ( choice != 0 );
 	return 0;
 }

 void displayMenu () {
 	printf("\n\nWhat would you like to do?\n");
 	printf("---------------------------------------\n");
 	printf("Select From options 1-7 or 0 to stop\n");
 	printf("Select 1 to get the score for a specific game\n");
 	printf("Select 2 to get the max score for a specific month\n");
 	printf("Select 3 to get the avergare score for a specific month\n");
 	printf("Select 4 to get the max score for the year\n");
 	printf("Select 5 to get the average score for the year\n");
 	printf("Select 6 to get the number of tournaments missed for the year\n");
 	printf("Select 7 to print all scores for the year =\n");
 	printf("Select 0 to stop\n");
 	printf("---------------------------------------\n");

 }

 void makeArray ( int scores[ROWS][COLUMN], FILE *input) {
 	int aux,i,j;

 	for ( i = 0 ; i < 12 ; i++ ) {
 		for ( j = 0 ; j < 8 ; j++ ) {
 			fscanf(input,"%d", &aux);

 			/* Not really needed, because it is known that the file has 96 ints */
 			if (aux == 999)
 				break;
 			scores[i][j] = aux;
 		}
 	}
 }

 int getScore ( int scores[ROWS][COLUMN], int month, int tournament) {
 	return scores[month-1][tournament-1];
 }

 int getMonthMax ( int scores[ROWS][COLUMN], int month ) {
 	int max,i;
 	max = 0;
 	for ( i = 0; i < COLUMN; i++) {
 		if (max < scores[month-1][i]) {
 			max = scores[month-1][i];
 		}
 	}

 	return max;
 }

 float getMonthAvg ( int scores[ROWS][COLUMN], int month ) {
 	int i;
 	float result;
 	result = 0;
 	for ( i = 0; i < COLUMN; i++) {
 		result += scores[month-1][i];
 	}
 	return result/8;
 }

 int 	getYearMax  ( int scores[ROWS][COLUMN] ) {
 	int max,i,j;
 	max = 0;
 	for ( i = 0 ; i < 12 ; i++ ) {
 		for ( j = 0 ; j < 8 ; j++ ) {
 			if (max < scores[i][j])
 				max = scores[i][j];
 		}
 	}
 	return max;
 }

 float	getYearAvg  ( int scores[ROWS][COLUMN] ) {
 	int i,j;
 	float avg;
 	avg = 0;
 	for ( i = 0 ; i < 12 ; i++ ) {
 		for ( j = 0 ; j < 8 ; j++ ) {
 			avg += scores[i][j];
 		}
 	}
 	return avg/96;
 }

 int 	toursMissed ( int scores[ROWS][COLUMN] ) {
 	int missed,i,j;
 	missed = 0;
 	for ( i = 0 ; i < 12 ; i++ ) {
 		for ( j = 0 ; j < 8 ; j++ ) {
 			if ( scores[i][j] == 0)
 				missed++;
 		}
 	}
 	return missed;
 }

 void 	printArray  ( int scores[ROWS][COLUMN] ) {
 	int i,j;
 	for ( i = 0 ; i < 12 ; i++ ) {
 		for ( j = 0 ; j < 8 ; j++ ) {
 			printf("%d\t",scores[i][j]);		
 		}
 		printf("\n");
 	}
 }


  void 	processRequest (int scores[ROWS][COLUMN], int choice ) {
  	int month, tournament, result;
 	float result1;
  	switch(choice) {
 		case 1 :
 			printf("Please enter the month and the game\n");
 			scanf("%d %d", &month, &tournament);
 			if (month > 12 || month < 0 || tournament > 8 || tournament < 0) {
 				printf("Incorrect month or Game input\n"); 
 				break;
 			}
 			result = getScore(scores, month, tournament);
 			printf("The score for Tournament %d is %d \n",tournament, result);
 			break;
 		case 2 :
 			printf("Please enter the month\n");
 			scanf("%d", &month);
 			 if (month > 12 || month < 0) {
 				printf("Incorrect month input\n"); 
 				break;
 			}
 			result = getMonthMax(scores,month);
 			printf("The max score for month %d is %d \n",month, result);
 			break;
 		case 3 :
 			printf("Please enter the month\n");
 			scanf("%d", &month);
 			if (month > 12 || month < 0) {
 				printf("Incorrect month input\n"); 
 				break;
 			}
 			result1 = getMonthAvg(scores,month);
 			printf("The average score for month %d is %0.2f\n",month,result1 );
 			break;
 		case 4 :
 			result = getYearMax(scores);
 			printf("The max score for the year is %d\n", result);
 			break;
 		case 5 :
 			result1 = getYearAvg(scores);
 			printf("The average score for the year is %0.2f\n",result1);
 			break;
 		case 6 :
 			result = toursMissed(scores);
 			printf("The number of tournaments missed for the year is %d\n",result);
 			break;
 		case 7 :
 			printf("The scores for the year are:\n");
 			printArray(scores);
 			break;
 	}
  }