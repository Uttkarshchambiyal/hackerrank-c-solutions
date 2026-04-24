-----------------------------------------------------[QUestion-47]----------------------------------------------------------------------------


  You are given a 4-digit integer N.

Your task is to rearrange its digits in descending order, using only if-else statements.

Note:

You must not use arrays, loops, sorting functions, built-in sort utilities, or library functions.

Instead, manually compare the digits using nested if-else conditions and determine their order from largest to smallest.

Finally, print the rearranged digits without spaces.

Input Format

A single integer: {N}

Constraints

1000 ≤ N ≤ 9999
N is always a 4-digit integer.
Only if-else statements may be used for comparisons.
No loops, no arrays, no sorting algorithms, no built-in functions like sort/max/min.
Output Format

Print the four digits of N, rearranged in descending order, without spaces.

Sample Input 0

2583
Sample Output 0

8532
Sample Input 1

2222
Sample Output 1

2222
Sample Input 2

9012
Sample Output 2

9210

----------------------------------------------------------------[Answer-47]---------------------------------------------------------------------


  #include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);   

    int w = N % 10;         
    int x = (N / 10) % 10;   
    int y = (N / 100) % 10;  
    int z = N / 1000;        

    int first, second, third, fourth;


    if (w >= x && w >= y && w >= z) {
        first = w;               
        if (x >= y && x >= z) {
            second = x;
            if (y >= z) {
                third = y;
                fourth = z;
            } else {
                third = z;
                fourth = y;
            }
        } else if (y >= x && y >= z) {
            second = y;
            if (x >= z) {
                third = x;
                fourth = z;
            } else {
                third = z;
                fourth = x;
            }
        } else {
            second = z;
            if (x >= y) {
                third = x;
                fourth = y;
            } else {
                third = y;
                fourth = x;
            }
        }
    } else if (x >= w && x >= y && x >= z) {
        first = x;                
        if (w >= y && w >= z) {
            second = w;
            if (y >= z) {
                third = y;
                fourth = z;
            } else {
                third = z;
                fourth = y;
            }
        } else if (y >= w && y >= z) {
            second = y;
            if (w >= z) {
                third = w;
                fourth = z;
            } else {
                third = z;
                fourth = w;
            }
        } else {
            second = z;
            if (w >= y) {
                third = w;
                fourth = y;
            } else {
                third = y;
                fourth = w;
            }
        }
    } else if (y >= w && y >= x && y >= z) {
        first = y;               
        if (w >= x && w >= z) {
            second = w;
            if (x >= z) {
                third = x;
                fourth = z;
            } else {
                third = z;
                fourth = x;
            }
        } else if (x >= w && x >= z) {
            second = x;
            if (w >= z) {
                third = w;
                fourth = z;
            } else {
                third = z;
                fourth = w;
            }
        } else {
            second = z;
            if (w >= x) {
                third = w;
                fourth = x;
            } else {
                third = x;
                fourth = w;
            }
        }
    } else {
        first = z;                
        if (w >= x && w >= y) {
            second = w;
            if (x >= y) {
                third = x;
                fourth = y;
            } else {
                third = y;
                fourth = x;
            }
        } else if (x >= w && x >= y) {
            second = x;
            if (w >= y) {
                third = w;
                fourth = y;
            } else {
                third = y;
                fourth = w;
            }
        } else {
            second = y;
            if (w >= x) {
                third = w;
                fourth = x;
            } else {
                third = x;
                fourth = w;
            }
        }
    }

    printf("%d%d%d%d", first, second, third, fourth);

    return 0;
}
