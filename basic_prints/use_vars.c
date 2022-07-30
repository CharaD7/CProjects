#include <stdio.h>

/**
 * main - The main body of the program
 *
 * purpose - The program adds the values of two integer variables
 * vars - num1 : int
 *        num2 : int
 *
 * return 0 : Always(0)
 */

int main() {
  // Declaring and initializing integer variables
  int num1 = 12;
  int num2 = 26;

  // Print the sum of the two numbers directly in the print statement
  printf("The sum of %d and %d is %d", num1, num2, num1 + num2);

  int sum = num1 + num2;

  // Second approach to printing the sum
  printf("\n"); // Prints a new empty line

  printf("Sum of the two numbers is: %d", sum);

  printf("\n"); // Prints a new empty line

  return 0;
}
