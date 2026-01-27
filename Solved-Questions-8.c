--------------------------------------------------------------------------------------------------[Questions-8]-------------------------------------------------------------------------

in C, every data type has a specific range of values it can store. Write a program to display the minimum and maximum values for the following data types:

Integer types:
- short int
- int
- long int
- long long int
- unsigned short int
- unsigned int
- unsigned long int
- unsigned long long int

Character types:
- char
- unsigned char

Floating-point types:
- float
- double
- long double

Your task is to print the minimum and maximum values for each type using constants from limits.h and float.h.

Print the ranges in the exact format shown below (each on a new line):
short: {min} to {max}
int: {min} to {max}
long: {min} to {max}
long long: {min} to {max}
unsigned short: 0 to {max}
unsigned int: 0 to {max}
unsigned long: 0 to {max}
unsigned long long: 0 to {max}
char: {min} to {max}
unsigned char: 0 to {max}
float: {min} to {max}
double: {min} to {max}
long double: {min} to {max}

Input Format

No input is required for this problem.

Constraints

Use predefined macros from limits.h and float.h
Do not hardcode any value manually.
The program must compile and run successfully on a standard C compiler.
Output Format

Expected Output

short: -32768 to 32767
int: -2147483648 to 2147483647
long: -9223372036854775808 to 9223372036854775807
long long: -9223372036854775808 to 9223372036854775807
unsigned short: 0 to 65535
unsigned int: 0 to 4294967295
unsigned long: 0 to 18446744073709551615
unsigned long long: 0 to 18446744073709551615
char: -128 to 127
unsigned char: 0 to 255
float: 1.175494e-38 to 3.402823e+38
double: 2.225074e-308 to 1.797693e+308
long double: 3.362103e-4932 to 1.189731e+4932

Note: Values may vary slightly depending on compiler and architecture.

Sample Output 0

short: -32768 to 32767
int: -2147483648 to 2147483647
long: -9223372036854775808 to 9223372036854775807
long long: -9223372036854775808 to 9223372036854775807
unsigned short: 0 to 65535
unsigned int: 0 to 4294967295
unsigned long: 0 to 18446744073709551615
unsigned long long: 0 to 18446744073709551615
char: -128 to 127
unsigned char: 0 to 255
float: 1.175494e-38 to 3.402823e+38
double: 2.225074e-308 to 1.797693e+308
long double: 3.362103e-4932 to 1.189731e+4932

--------------------------------------------------------------------------------------------------[Answer-8]----------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main() {
    
    printf("short: %d to %d\n",SHRT_MIN,SHRT_MAX);
    printf("int: %d to %d\n",INT_MIN,INT_MAX);
    printf("long: %ld to %ld\n",LONG_MIN,LONG_MAX);
    printf("long long: %lld to %lld\n",LLONG_MIN,LLONG_MAX);
    printf("unsigned short: %u to %u\n",0,USHRT_MAX);
    printf("unsigned int: %u to %u\n",0,UINT_MAX);
    printf("unsigned long: %lu to %lu\n", 0UL,ULONG_MAX);
    printf("unsigned long long: %llu to %llu\n",0ULL,ULLONG_MAX);
    printf("char: %d to %d\n",CHAR_MIN,CHAR_MAX);
    printf("unsigned char: %u to %u\n",0,UCHAR_MAX);
    printf("float: %e to %e\n",FLT_MIN,FLT_MAX);
    printf("double: %e to %e\n",DBL_MIN,DBL_MAX);
    printf("long double: %Le to %Le",LDBL_MIN,LDBL_MAX);
    return 0;
}
