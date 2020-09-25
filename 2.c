#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number;
	printf("Enter The Number: ");
	scanf(" %d", &number);
    
    int i, per, sum=0;
    for(i=1; i<256; i++)
	{
		per=number%i;
    	if (per == 0)
		{
			sum = sum + i;
		} 	
	}
	if ( sum == number)
	{
		 printf(" %d Is A Perfect Number", number);  
	}
	else
	{
		 printf(" %d Is Not A Perfect Number", number);		
	}

    return 0;
    
}
