#include <stdio.h>
#include <stdlib.h>

//This program converts Dollar to Egyptian Pound

int main()
{
   float Dollar_Price,Dollars,Result;
   printf("Enter today's Dollar price = ");
   scanf("%f",&Dollar_Price);
   printf("Enter the amount of money you want to convert = ");
   scanf("%f",&Dollars);

   Result=Dollar_Price*Dollars;

   printf("Your money = %f",Result);
}
