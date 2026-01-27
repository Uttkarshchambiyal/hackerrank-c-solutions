---------------------------------------------------------------------------------------[Question-2]---------------------------------------------------------------------------------------

Write a C program that takes a single lowercase English letter as input and prints its corresponding uppercase letter.

Use the ASCII value method to perform the conversion.

Input Format

A single lowercase character charLower.

Constraints

Input must be a lowercase English alphabet ('a' to 'z').
Do not use built-in string or character functions like toupper() or strupr().
Conversion must be done using ASCII value arithmetic.
Output Format

A single line in the format:

The uppercase of {charLower} is {charUpper}

Sample Input 0

a
Sample Output 0

The uppercase of a is A
Sample Input 1

z
Sample Output 1

The uppercase of z is Z
Sample Input 2

g
Sample Output 2

The uppercase of g is G

---------------------------------------------------------------------------------------[Answer-2]---------------------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char lower;
    scanf("%c",&lower);
        printf("The uppercase of %c is %c",lower, lower-32);
    return 0;
}
