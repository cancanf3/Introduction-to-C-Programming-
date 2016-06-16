/* 
*  Laboratory 3, Part A
*  Author: Jose Peña
*  UCFID: 4142431
*  Title: Orange Juice BOGOs 
*/

#include <stdio.h>

int main () {

	float	cost;
	int 	containers;
	printf("\n\nWhat is the cost of one container of OJ in dollars?\n\n\n");
	scanf("%f",&cost);

	printf("How many containers are you buying?\n\n\n");
	scanf("%d",&containers);


	containers = containers/2 + containers % 2;
	cost 	   = cost * containers;

	printf("The total cost is $%0.2f\n", cost);



	return 0;

}
