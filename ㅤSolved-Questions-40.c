------------------------------------------------------------------------------------------QUESTION-40------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

ou and your friend decided to pull off a heist at a heavily guarded bank vault. The vault is protected by a 10-digit passcode, each digit ranging from 0 to 9. However, the configuration is not as simple as just remembering the passcode. The vault's passcode is not straightforward — three wrong digits are randomly placed at three different positions.

Your friend, using some sophisticated tool, has managed to decode the correct digits and their positions. He tells you the exact positions (0-indexed) of the incorrect digits and the number by which the dial must be rotated to correct them.

Your task is to apply these changes and return the final passcode that will successfully open the vault.

Note: After the number 9, the dial wraps around back to 0.

Input Format

Space separated 10-digit vault configuration with 3 wrong digits.
Three pairs in new line provided, each pair on a new line. Each pair contains:
The index of the incorrect digit (0-indexed).
The number by which the dial must be rotated to correct it.
Constraints

All inputs are digits from 0 to 9

Output Format

Print the final 10-digit space separated passcode with the corrected digits at their respective positions which opens the vault.

Sample Input 0

3 1 4 7 5 4 2 9 5 4
3 5
7 4
1 5
Sample Output 0

3 6 4 2 5 4 2 3 5 4
Sample Input 1

9 8 7 6 5 4 3 2 1 0
0 3
4 1
8 2
Sample Output 1

2 8 7 6 6 4 3 2 3 0

------------------------------------------------------------------------------------------ANSWER-40------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main() {

int num0 , num1 , num2 , num3 , num4 , num5 , num6 , num7 , num8 , num9 , index1 , index2 , index3 , change1 , change2 , change3;
    scanf("%d %d %d %d %d %d %d %d %d %d",&num0 , &num1 , &num2 , &num3 , &num4 , &num5 , &num6 , &num7 , &num8 , &num9);
    scanf("%d %d",&index1,&change1);
    scanf("%d %d",&index2,&change2);
    scanf("%d %d",&index3,&change3);
    if (index1==0){num0=(num0+change1)%10;}
    else if(index1==1){ num1=(num1+change1)%10;}
    else if(index1==2){ num2=(num2+change1)%10;}
    else if(index1==3){ num3=(num3+change1)%10;}
    else if(index1==4){ num4=(num4+change1)%10;}
    else if(index1==5){ num5=(num5+change1)%10;}
    else if(index1==6){ num6=(num6+change1)%10;}
    else if(index1==7){ num7=(num7+change1)%10;}
    else if(index1==8){ num8=(num8+change1)%10;}
    else if(index1==9){ num9=(num9+change1)%10;}
    
    if (index2==0){num0=(num0+change2)%10;}
    else if(index2==1){ num1=(num1+change2)%10;}
    else if(index2==2){ num2=(num2+change2)%10;}
    else if(index2==3){ num3=(num3+change2)%10;}
    else if(index2==4){ num4=(num4+change2)%10;}
    else if(index2==5){ num5=(num5+change2)%10;}
    else if(index2==6){ num6=(num6+change2)%10;}
    else if(index2==7){ num7=(num7+change2)%10;}
    else if(index2==8){ num8=(num8+change2)%10;}
    else if(index2==9){ num9=(num9+change2)%10;}
    
    if (index3==0){num0=(num0+change3)%10;}
    else if(index3==1){ num1=(num1+change3)%10;}
    else if(index3==2){ num2=(num2+change3)%10;}
    else if(index3==3){ num3=(num3+change3)%10;}
    else if(index3==4){ num4=(num4+change3)%10;}
    else if(index3==5){ num5=(num5+change3)%10;}
    else if(index3==6){ num6=(num6+change3)%10;}
    else if(index3==7){ num7=(num7+change3)%10;}
    else if(index3==8){ num8=(num8+change3)%10;}
    else if(index3==9){ num9=(num9+change3)%10;}
     
    printf("%d %d %d %d %d %d %d %d %d %d", num0 , num1 , num2 , num3 , num4 , num5 , num6 , num7 , num8 , num9);
    
    return 0;
}
