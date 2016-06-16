#include <stdio.h>

int main () {

 int slices, party1, party2;
  printf("How many slices of pizza did you start with?\n");
  scanf("%d", &slices);
  printf("How many people were at the first party?\n");
  scanf("%d", &party1);
  printf("How many people were at the second party?\n");
  scanf("%d", &party2);

  slices = slices % party1;
  printf("%d\n", slices);

  slices = slices % party2;
  printf("%d\n", slices);


	return 0;

}