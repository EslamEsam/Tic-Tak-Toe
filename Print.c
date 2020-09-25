#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//This is a Tic Tac Toe game made with C language

void isWinning (){

}

void insert (){

}


void Print (){
	
	char sym[9]={'0', '1', '2', '3', '4', '5', '6', '7', '8', };
	
	printf("\n\t\t\t\tT i c	T a c	T o e	Game\n\n");
	printf("\nPlayer 1 : X");
	printf("\nPlayer 2 : O");
	printf("\n\t\t\t       |       |       ");
	printf("\n\t\t\t   %c   |   %c   |   %c   ",sym[0],sym[1],sym[2]);
	printf("\n\t\t\t-------|-------|-------");
	printf("\n\t\t\t   %c   |   %c   |   %c   ",sym[3],sym[4],sym[5]);
	printf("\n\t\t\t-------|-------|-------");
	printf("\n\t\t\t   %c   |   %c   |   %c   ",sym[6],sym[7],sym[8]);
	printf("\n\t\t\t       |       |       ");
	printf("\n\n");

}



int main()
{
int arr[3][3]={};
Print ();
return 0;
}
