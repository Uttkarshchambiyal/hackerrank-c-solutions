-----------------------------------------------------------------------------------------[Question-4]------------------------------------------------------------------------------------

Write a program that takes two lowercase characters and prints how many letters apart they are in the alphabet.

Input Format

Two lowercase characters char1 and char2 separated by space.

Constraints

Input letters are lowercase a–z
char1 always comes before char2 in alphabetical order
Use ASCII arithmetic only
Output Format

Single line printing the result as:
The distance between {char1} and {char2} is {value}

Sample Input 0

a c
Sample Output 0

The distance between a and c is 2
Sample Input 1

b f
Sample Output 1

The distance between b and f is 4
Sample Input 2

m n
Sample Output 2

The distance between m and n is 1

-----------------------------------------------------------------------------------------[Answer-4]------------------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     char lower1;
     char lower2;
    scanf("%c ",&lower1);
    scanf("%c",&lower2);
    printf("The distance between %c and %c is %d",lower1,lower2,lower2-lower1);
    return 0;
}
