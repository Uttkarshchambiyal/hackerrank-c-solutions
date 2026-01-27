---------------------------------------------------------------------------------------------[Question-29]----------------------------------------------------------------------------------------------

Write a program to find the minimum of two integers a and b without using any comparison operators (<, >, <=, >=). Use only bitwise operators and logical operators to determine which number is smaller.

Input Format

Two space-separated integers a and b.
Constraints

−10^9 ≤ a,b ≤ 10^9
Output Format

Print the smaller of the two integers.
Sample Input 0

5 3
Sample Output 0

3
Sample Input 1

-7 2
Sample Output 1

-7


---------------------------------------------------------------------------------------------[Answer-29]-------------------------------------------------------------------------------------------------


#include <stdio.h>

int main() {
int a, b ,sub;
    scanf("%d %d",&a,&b);
    sub = a - b;
    if (sub>>31==0){
        printf("%d",b);
    }
    else {
        printf("%d",a);
    }
    return 0;
}
