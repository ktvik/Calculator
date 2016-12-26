/*
 * Project 1, Calculator I
 *      Write a program that ask for two integers and
 *  calculates the sum and product.
 *  If the integers are valid also calculate the division.
 *
 */

#include <stdio.h>

int main(void)
{
 // Declarations
 int integer_1 = 0, integer_2 = 0, sum = 0, product = 0, division = 0;
 
 // Ask user for input
 printf("Enter two integers: ");
 scanf("%d%d", &integer_1, &integer_2);
 printf("--------------------------------\n");
 
 // Calculate and print to screen
 sum = integer_1 + integer_2;
 printf("Sum: %d\n", sum);
 
 product = integer_1 * integer_2;
 printf("Product: %d\n", product);
 
 if (integer_2 != 0)
  {
  division = integer_2 / integer_1;
  printf("division: %d\n", division);
  }
 
 printf("\n");
 printf("Press any key to quit\n");
 scanf("%*C");
 
 
} // End of main
