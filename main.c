
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//this program reads 20 number from the user and display the unique ones and their sum

int sum(int arr[]){
    int sum = 0 ;
for(int i = 0 ; i < 20 ; i++){
    sum += arr[i];
}
return sum;
}

int main()
{
bool check=false;
int num,result;
int arr[20]={};
printf("Enter the numbers : ");
for(int i = 0 ; i < 20 ;i++){       //here to get the numbers and check if it exits or not
    check = false;
    scanf(" %d",&num);
    for(int j = 0 ; j < 20 ; j++){
        if(num==arr[j])
            check = true;

    }
if(check==false)
    arr[i]=num;

}

printf("The unique number are :");
for(int i = 0 ; i < 20 ; i++){
if (arr[i]==0)
    continue;
else
    printf("%d \n",arr[i]);
}
result = sum (arr);
printf("Their sum = %d",result);

return 0;
}
