--------------------------------------------------------------[Question-51]--------------------------------------------------------------------


  Write a program that prints all the numbers between 1 and 100 (inclusive) that are divisible by both 3 and 5.

Input Format

N/A

Constraints

N/A

Output Format

Print all the numbers between 1 and 100 (inclusive) that are divisible by both 3 and 5, each number in a new line.



  ----------------------------------------------------------[Answer-51]-----------------------------------------------------------------------

  #include <stdio.h>

int main() {
    for(int i=15; i<=100; i+=15){
        printf("%d\n",i);
    }
    return 0;
}
