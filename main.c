#include <stdio.h>
#include <stdlib.h>

//This program Prints the perfect numbers from 1 to 1000
int main()
{
    int sum = 0 ;
for(int i = 1 ; i <= 1000 ; i++){
        sum = 0;
    for(int j = 1 ; j < i ; j++){
        if(i%j==0){
            sum += j;
        }
    }
    if(sum == i){
        printf (" %d",i);
        printf ("-> perfect number \n");
    }
}
return 0;
}
