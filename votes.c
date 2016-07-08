/* Author: Jose Peña
 *  UCFID: 4142431
 *   Date: 07/8/2016
 *  Title: Vote counting
 */

 #include <stdio.h>

/* Function Prototypes */
void 	createVArray (FILE*, int *, int); 
int		getMaxVote (int *, int);
void 	printSummary (int *, int);


int 	main () {
	/* Program Variables */
	int 	votes[21];
	int 	size;
	int 	i;
	FILE* 	input;
	
	/* Initializing Variables */
	size = 21;
	for (i = 0; i < size; i++)
		votes[i] = 0;
	/* Open input File */
	input = fopen("votes.txt", "r");
	if (input == NULL) {
		printf("The File doesn't exist! Exit Code: 1\n");
		return 1;
	}

	/* Calling Functions */
	createVArray (input, votes, size);
	fclose(input);
	printSummary (votes, size);
	return 0;
}

void createVArray (FILE * input, int *votes, int size) {
	int read;
	/* Reading from the input file */
	do {
		fscanf(input, "%d", &read);
		if (read == 30)
			break;
		votes[read]++;
		votes[0]++;
	}while(1);


}

int	getMaxVote (int *votes, int size) {
	int i,j;
	int highest; 

	highest = 0;
	/* Getting the Highest Value */
	for (i = 1; i < size; i++) {
		if (votes[i] > highest) {
			highest = votes[i];
			j = i;
		}
	}
	return j;
}

void printSummary (int *votes, int size) {
	int i;
	int winner;
	FILE* 	output;

	/* Printing on the output */
	output = fopen("results.txt", "w");
	if (output == NULL) {
		printf("Error with Output file!\n");
	}
	else {
		fprintf(output,"Choice\t\t\tNum Votes\n");
		fprintf(output,"----------------------------------------------\n");
		for (i = 1; i < size; i++) {
			fprintf(output,"%d\t\t\t%d\n", i, votes[i]);
		}
		winner = getMaxVote (votes, size);
		fprintf(output,"----------------------------------------------\n");
		fprintf(output,"Total Votes \t\t\t\t%d\n", votes[0]);
		fprintf(output,"Winning option \t\t\t\t%d\n", winner);
	}
	fclose(output);
}
