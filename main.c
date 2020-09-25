#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//This is a Tic Tac Toe game made with C language

void isWinning (){

}

void insert(int row,int column,char arr[3][3])
{
    char player;
    printf("\nx or o?\n");
    scanf(" %c", &player);
    printf("choose the position: which row?\n");
    scanf(" %d", &row);
    printf("choose the position: which column?\n");
    scanf(" %d", &column);
    if (arr[row][column]=='x' || arr[row][column]=='o'){
        printf("this cell is not available!\n");
        insert(row,column,arr);
    }
    else{
        arr[row][column] = player;
    }
}

void print (char sym[3][3]){

	printf("\n\t\t\t\tT i c	T a c	T o e	Game\n\n");
	printf("\nPlayer 1 : X");
	printf("\nPlayer 2 : O");
	printf("\n\t\t\t       |       |       ");
	printf("\n\t\t\t   %c   |   %c   |   %c   ",sym[0][0],sym[0][1],sym[0][2]);
	printf("\n\t\t\t-------|-------|-------");
	printf("\n\t\t\t   %c   |   %c   |   %c   ",sym[1][0],sym[1][1],sym[1][2]);
	printf("\n\t\t\t-------|-------|-------");
	printf("\n\t\t\t   %c   |   %c   |   %c   ",sym[2][0],sym[2][1],sym[2][2]);
	printf("\n\t\t\t       |       |       ");
	printf("\n\n");

}


int main()
{
    char arr[3][3]={0};
    int row,column,i,j=0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            arr[i][j]=0;
        }
    }

    print (arr);
    insert(row,column,arr);
    print(arr);

    return 0;
}
