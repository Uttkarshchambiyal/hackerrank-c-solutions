---------------------------------------------------------------------[Question-21]-----------------------------------------------------------------------------------------------------------

Write a program that takes a floating-point number and prints it without decimal values.

Input Format

Single float.

Constraints

N/A

Output Format

Single line printing the result as: Rounded Value = {value}

Sample Input 0

3.14
Sample Output 0

Rounded Value = 3
Sample Input 1

10.48
Sample Output 1

Rounded Value = 10
Sample Input 2

-8.3
Sample Output 2

Rounded Value = -8*/

  
------------------------------------------------------------------------[Answer-21]-----------------------------------------------------------------------------------------------------------


  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float value;
    scanf("%f",&value);
    printf("Rounded Value = %.0f",value);
    return 0;
}


