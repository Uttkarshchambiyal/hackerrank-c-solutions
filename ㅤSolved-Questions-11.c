----------------------------------------------------------------------------------------------[Question-11]---------------------------------------------------------------------------------

Some C data types, their format specifiers, and their most common bit widths are as follows:

Int ("%d"): 32 Bit integer
Long ("%ld"): 64 bit integer
Char ("%c"): Character type
Float ("%f"): 32 bit real value
Double ("%lf"): 64 bit real value
Reading: To read a data type, use the following syntax:

scanf("format_specifier", &val)
For example, to read a character followed by a double:

char ch;
double d;
scanf("%c %lf", &ch, &d);
For the moment, we can ignore the spacing between format specifiers.

Printing: To print a data type, use the following syntax:

printf("format_specifier", val)
For example, to print a character followed by a double:

char ch = 'd';
double d = 234.432;
printf("%c %f", ch, d);
Input Format

Input consists of the following space-separated values: int, long, char, float, and double, respectively.

Constraints

N/A

Output Format

Print each element on a new line in the same order it was received as input.

Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

Sample Input 0

3 12345678912345 a 334.23 14049.30493
Sample Output 0

3
12345678912345
a
334.230
14049.304930000
Explanation 0

Print int 3, followed by long 12345678912345, followed by char a, followed by float 334.23, followed by double 14049.304930000.

----------------------------------------------------------------------------------------------[Answer-11]-----------------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    long num1;
    char a;
    float num2;
    double num3;
scanf("%d %ld %c %f %lf", &num, &num1 , &a , &num2 , &num3);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", num, num1 , a , num2 , num3);
    
  
    return 0;
}
