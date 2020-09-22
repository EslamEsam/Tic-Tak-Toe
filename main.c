
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//This program Prints the perfect numbers from 1 to 1000
int main()
{
    bool loop = true;
    char ans ;
    int sum = 0 ,num;
    while(loop == true){
    printf("Enter the number : ");
    scanf(" %d",&num);
for(int i = 1 ; i <= num ; i++){
        sum = 0;
    for(int j = 1 ; j < i ; j++){
        if(i%j==0){
            sum += j;
        }
    }
    }
        if(sum == num){
        printf (" %d",num);
        printf ("-> perfect number \n");
    }
    else{
        printf (" %d",num);
        printf ("-> is not a perfect number \n");

}
printf("Do you want to check another number ? ");
    scanf(" %c",&ans);
    if (ans == 'y' || ans == 'Y' )
        loop = true;
    else
        loop = false;
}
return 0;
}
