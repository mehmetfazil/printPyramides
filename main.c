#include<stdio.h>

void printBlank(int numberOfBlanks){
	for(;numberOfBlanks;numberOfBlanks--)
		printf(" ");

}

void printStar(int numberOfRows){
	for(;numberOfRows;numberOfRows--)
		printf("*");
}

int main(){
	
	int pyramide, blanks, stars, row = 0 ;
	printf("How long pyramide do you want to print: ");
	scanf("%d", &pyramide);
	while(row < pyramide) {
		blanks = row;
		stars = 2 * (pyramide - row);
		stars = stars - 1;
		printBlank(blanks);
		printStar(stars);
		row = row + 1;
		printf("\n");
	
	}
	anykey();
	return 0;
}
