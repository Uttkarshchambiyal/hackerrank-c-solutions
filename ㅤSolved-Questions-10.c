------------------------------------------------------------------------------------[Question-10]----------------------------------------------------------------------------------------


Write a program that takes an integer as input and print its half value as a floating-point number with 2 decimals.

Input Format

Single integer.

Constraints

Input can be positive or negative integer.
Output should use float division.
Output Format

Print the data in the given format: Half of {num} is {halfValue}

Sample Input 0

10
Sample Output 0

Half of 10 is 5.00
Sample Input 1

7
Sample Output 1

Half of 7 is 3.50
Sample Input 2

-8
Sample Output 2

Half of -8 is -4.00


------------------------------------------------------------------------------------[Answer-10]-----------------------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
float num;
    scanf("%f",&num);
    printf("Half of %.0f is %.2f",num,num/2);
    return 0;
}
