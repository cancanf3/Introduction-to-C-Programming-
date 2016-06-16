/*
 *	Author: Jose Peña
 *  UCFID: 4142431
 * 	Date: 06/16/16
 *	Assigment 4: Pattern printer
 */

#include <stdio.h>

int main () {

	/* Program variables and counters */
	int width;
	int height;
	int i, j, z;


	/* Program input */
	printf("What is the width of your fabric?\n");
	scanf("%d", &width);

	/* Verification input */
	while ( width % 6 != 0 || width == 0){
		printf("Please enter a width which is a multiple of 6\n");
		scanf("%d", &width);
	}



	printf("What is the height of your fabric?\n");
	scanf("%d", &height);

	/* Verification input */
	while ( height % 2 != 1 || height < 7 ){
		printf("Please enter an odd height which at least 7\n");
		scanf("%d", &height);
	}




	/* Pre pattern costure */
	printf("\n");
	for ( i = 0 ; i < 2 ; i++ ) {
		for ( j = 0 ; j < width ; j++ ){
			printf("*");
		}
		printf("\n");
	}

	/*  Pattern costure */
	for ( i = 1 ; i <= height - 4 ; i++ ) {

		j = 0;
		/* Odd pattern */
		while ( i % 2 == 1 && j < width/6 ) {
			for ( z = 0 ; z < 3 ; z++ ) {
				printf("*");
			}
			for ( z = 0 ; z < 3 ; z++ ) {
				printf(" ");
			}

			j++;

		}
		/* Even pattern */
		while ( i % 2 == 0 && j < width/6 ) {
			for ( z = 0 ; z < 3 ; z++ ) {
				printf(" ");
			}
			for ( z = 0 ; z < 3 ; z++ ) {
				printf("*");
			}

			j++;

		}
		printf("\n");

	}

	/* Post pattern costure */
	for ( i = 0 ; i < 2 ; i++ ) {
		for ( j = 0 ; j < width ; j++ ){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");



	return 0;
}