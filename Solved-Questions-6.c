-----------------------------------------------------------------------------------[Questions-6]-----------------------------------------------------------------------------------------

Given two integers, extract their last digits and print the sum of those digits.

Important Instructions

Do NOT write the entire logic in main().
Write a function int sumLastDigits(int a, int b) and call it from main().
Input Format

Two integers: {a} {b}

Constraints

0 ≤ a, b ≤ 10⁹
Output Format

Single line printing the result as: The sum of last digits is: {res}

Sample Input 0

42 59
Sample Output 0

The sum of last digits is: 11
Sample Input 1

100 9
Sample Output 1

The sum of last digits is: 9

-------------------------------------------------------------------------------------[Answer-6]-------------------------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sumLastDigits(int num1, int num2){
    return num1%10+num2%10;
}

int main() {
    int num1;
    int num2;
    scanf("%d %d", &num1 , &num2 );
    int res = sumLastDigits( num1 , num2);
    printf("The sum of last digits is: %d", res );
  
    return 0;
}
