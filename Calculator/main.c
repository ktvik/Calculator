//
//  main.c
//  Calculator 2
//
//  Created by Kai Tore Vik on 19/12/2016.
//  Copyright © 2016 Kai Tore Vik. All rights reserved.
//
//
//  Write a program that reads two real numbers (num1 and num2) and an
//  integer (operator). Valid integers are 1, 2, 3, 4 and 5. If the integer is
//  equal to 1 the program shall calculate the sum, for 2 the difference,
//  for 3 the quotient, for 4 the product. The program shall continue to read
//  numbers and calculate until the user enter operator to 5 exit the program.
//

#include <stdio.h>

int main(void)
{
 // variable declarations
 int Num1, Num2, Result, Operator=0;
 
 // Start of menu
 puts("---------------------------------");
 puts("Calulator 2");
 
 // Run the program as long as Operator is differnt from 5
 while (Operator !=5)
  {
  // Menu
  puts("---------------------------------");
  puts("1 Sum");
  puts("2 Difference");
  puts("3 Quotient");
  puts("4 Product");
  puts("5 Exit");
  puts("");
  printf("%s", "Select operator:");
  scanf("%d", &Operator);
  
  // Perform calculation
  switch (Operator)
   {
    case 1: // Sum
    printf("%s","Enter two integers:");
    scanf("%d%d",&Num1,&Num2);
    Result = Num1 + Num2;
    printf("\t%s %d\n","The sum is ", Result);
    break;
    
    case 2: // Difference
    printf("%s","Enter two integers:");
    scanf("%d%d",&Num1,&Num2);Result = Num1 - Num2;
    printf("\t%s %d\n","The difference is ", Result);
    break;
    
    case 3: // Quotient
    printf("%s","Enter two integers:");
    scanf("%d%d",&Num1,&Num2);
    if(Num2 != 0) // Check for division by zero
     {
     // Calculate and print result
     Result = Num1 / Num2;
     printf("\t%s %d\n","The quotient is ", Result);
     }
    else
     {
     puts("\tError: Division by zero!");
     }
    break;
    
    case 4: // Product
    printf("%s","Enter two integers:");
    scanf("%d%d",&Num1,&Num2);
    Result = Num1 * Num2;
    printf("\t%s %d\n","The product is ", Result);
    break;
    
    case 5: // Exit
    puts("---------------------------------");
    puts("Thank you for using Calculator 2!");
    puts("Press any key to exit...");
    puts("---------------------------------");
    
    scanf("%*C)");
    break;
    
    default: // If the user enters a non valid option
    puts("\tPlease select a operator from the menu");
    break;
   } // End switch
  
  
  } // End while
 
 return 0;
 
} // End of main


