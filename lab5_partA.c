/* 
*  Laboratory 5, Part A
*  Author: Jose Peña
*  UCFID: 4142431
*  Title: Wall Painting
*/

#include <stdio.h>

int main () {

	/* Program Variables */
	int rows;
	int stars;
	int cpy_stars;
	int i,j;

	/* Program input */
	printf("How many rows for your star design?\n");
	scanf("%d", &rows);

	printf("How many stars on the first row?\n");
	scanf("%d", &stars);
	cpy_stars = stars;

	/* Calculation part */
	/* Outter loop just repeat the inner loop 
	 * The if center the stars-1 and interchange between the stars numbers
	 */
	for (i = 0; i < rows ; i++) {
		for(j = 0 ; j < cpy_stars ; j++){
			printf("* ");
		}
		printf("\n");
		if (stars == cpy_stars) {
			cpy_stars--;
			printf(" ");
		}
		else {
			cpy_stars = stars;
		}
	}

	return 0;




}