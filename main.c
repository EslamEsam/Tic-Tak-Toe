#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//This is a Tic Tac Toe game made with C language

int main()    // here to run the main function and display who will win
{
    char arr[3][3]={0};
    int row,column,i,j=0;
    int check = 0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            arr[i][j]=0;
        }
    }
for (int k = 0 ; k < 9 ; k++){
    print (arr);
    insert(row,column,arr);
    print(arr);
    check = isWinning(arr);
    if(check == 1 || check == 2){
        break;
    }
}
if(check == 1)
        printf("Player 1 has won the game ");

else if(check == 2)
        printf("Player 2 has won the game ");

else
        printf("DRAW");
    return 0;
}




void insert(int row,int column,char arr[3][3])   //here to get the input from the user
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

void print (char sym[3][3]){     // here to print the Values

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

int isWinning (char arr[3][3]){

    //here to Check X win
if (arr[0][0]=='x' && arr[0][1]=='x' && arr[0][2]=='x')
    return 1;

if (arr[1][0]=='x' && arr[1][1]=='x' && arr[1][2]=='x')
    return 1;

if (arr[2][0]=='x' && arr[2][1]=='x' && arr[2][2]=='x')
    return 1;

if (arr[0][0]=='x' && arr[1][0]=='x' && arr[2][0]=='x')
    return 1;

if (arr[0][1]=='x' && arr[1][1]=='x' && arr[2][1]=='x')
    return 1;

if (arr[0][2]=='x' && arr[1][2]=='x' && arr[2][2]=='x')
    return 1;

if (arr[0][0]=='x' && arr[1][1]=='x' && arr[2][2]=='x')
    return 1;

if (arr[0][2]=='x' && arr[1][1]=='x' && arr[2][0]=='x')
    return 1;

    //here to Check O win

if (arr[0][0]=='o' && arr[0][1]=='o' && arr[0][2]=='o')
    return 2;

if (arr[1][0]=='o' && arr[1][1]=='o' && arr[1][2]=='o')
    return 2;

if (arr[2][0]=='o' && arr[2][1]=='o' && arr[2][2]=='o')
    return 2;

if (arr[0][0]=='o' && arr[1][0]=='o' && arr[2][0]=='o')
    return 2;

if (arr[0][1]=='o' && arr[1][1]=='o' && arr[2][1]=='o')
    return 2;

if (arr[0][2]=='o' && arr[1][2]=='o' && arr[2][2]=='o')
    return 2;

if (arr[0][0]=='o' && arr[1][1]=='o' && arr[2][2]=='o')
    return 2;

if (arr[0][2]=='o' && arr[1][1]=='o' && arr[2][0]=='o')
    return 2;


}

