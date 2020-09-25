#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int i;
    int sum = 0;
    printf("Enter a number!\n");
    scanf(" %d", &number);
    if (number > 1){
        for (i = 1; i < number; i++){
        if (number % i == 0){
            sum = sum + i;
            }
        }
        if (number == sum){
            printf("%d is a perfect number\n", number);
        }
        else{
            printf("%d is not a perfect number\n", number);
        }
    }
    else{
        printf("%d is not a perfect number\n", number);
    }
    main();
    return 0;
}
