#include "main.h"
/**
 *print_number - prints an integer.
 *only using the putchar function.
 *noarrays and pointers.
 *@n: integer to be printed.
 *
 *Return: void.
 */
void print_number(int n) {
    // Check if number is negative
    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    // If number is greater than 0, print out each digit
    if (n > 0) {
        // Get the last digit
        char lastDigit = n % 10;

        // Recurse until only one digit is left
        if (n / 10 != 0)
            print_number(n / 10);

        // Print the last digit
        _putchar(lastDigit + '0');
    }
}
