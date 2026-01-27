----------------------------------------------------------------------------------------[Question-5]-------------------------------------------------------------------------------------

You are given hours, minutes, and seconds.
Convert the entire time into total seconds.

Important Instructions

Do NOT write the entire logic in main().
Create a function int toSeconds(int hours, int minutes, int seconds) and call it from main().
Input Format

Three space-separated integers: {hours} {minutes} {seconds}

Constraints

0 ≤ hours ≤ 100
0 ≤ minutes < 60
0 ≤ seconds < 60
Output Format

Single line printing the result as:
Total seconds: {res}

Sample Input 0

1 0 0
Sample Output 0

Total seconds: 3600
Sample Input 1

0 10 30
Sample Output 1

Total seconds: 630

----------------------------------------------------------------------------------------[Answer-5]--------------------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int toSeconds(int hours, int minutes, int seconds){
    return hours*60*60+minutes*60+seconds;
}
int main() {
    int hours;
    int minutes;
    int seconds;
    scanf("%d %d %d",&hours,&minutes,&seconds);
    int res = toSeconds( hours,  minutes,  seconds);
    printf("Total seconds: %d", res );
    return 0;
}
