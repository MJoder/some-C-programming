/* MOGANEDI SEROBANYE JOSEPH*/
/* 4017402 */
/* Question 1 */

#include <stdio.h>

int main(){


    int n, count = 0;
    float input;
    printf("Enter an Integer: ");

    /*asking the user to input value if non-integer provide 5 chances*/
    while (scanf("%f", &input) != 1 || (int)input != input){

        count++;
        if (count == 5){
            /*output after 5 chances*/
            printf("you have entered a non-integer on 5 occasions, program existing\n");
            return 1;
        }
        printf("Invalid input enter an integer: ");
        while (getchar() != '\n'); /*do nothing*/
    }

    n = (int)input;
    int factorial1 = 1;
    int factorial2 = 1;
    int factorial3 = 1;

    for(int i=1; i<=n; i++){
        factorial1 *= i;
    }
    for (int i = 0;  i <= n+1; i++) {
        factorial2 *= i;
    }
    for (int i = 0; i < n+2; i++) {
        factorial3 *= i;
    }

    /*print out the sum*/
    int sum = factorial1 + (n+1) + factorial3;
    printf("the sum of the three conservative factorial is %d.\n", sum);
    return 0;
}
