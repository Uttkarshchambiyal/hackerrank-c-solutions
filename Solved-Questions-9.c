------------------------------------------------------------------------------------[Question-9]------------------------------------------------------------------------------------------

Given a 3-digit number ABC, extract and print A, B, and C separately.

Important Instructions

Do NOT write the entire logic in main().
Create a function void split(int n) and call it from main().
Input Format

A single 3-digit integer {ABC}

Constraints

100 ≤ n ≤ 999
Output Format

Single line printing the output as: {A} {B} {C}

Sample Input 0

456
Sample Output 0

4 5 6
Sample Input 1

902
Sample Output 1

9 0 2

------------------------------------------------------------------------------------[Answer-9]--------------------------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void split(int n){
    printf("%d %d %d",n/100%10,n/10%10,n%10);
    return ;
}
int main() {
    int n;
     scanf("%d", &n );
     split(n);
    return 0;
}
