/* 
*  Laboratory 3, Part B
*  Author: Jose Peña
*  UCFID: 4142431
*  Title: Time for a Video Game?
*/

#include <stdio.h>

int main () {

	int	current_hour;
	int current_minute;
	int game_time;
	int hw_time;
	int due_hour;
	int due_minute;
	int time_left;
	int minute_left;


	printf("Please enter the current hour and minute, separated by space.\n");
	scanf("%d %d",&current_hour, &current_minute);

	printf("How many minutes will the video game take to play?\n");
	scanf("%d", &game_time);

	printf("How many minutes will your homework take?\n");
	scanf("%d", &hw_time);

	printf("Please enter the hour and minute the homework is due.\n");
	scanf("%d %d",&due_hour, &due_minute);

	time_left 	= due_hour - current_hour;
	time_left 	= time_left * 60;
	minute_left = due_minute - current_minute;
	time_left 	= time_left + minute_left;


	if ( time_left >= game_time + hw_time ){
		printf("Great, you can play the game and still finish your homework.\n");
	}
	else {
		printf("Sorry, no game for you. Just do your homework\n");
	}


	return 0;
}