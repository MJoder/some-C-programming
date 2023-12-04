/*MOGANEDI SEROBANYE JOSEPH*/
/*4017402*/
/*Question 3*/

#include <stdio.h>

int main(){

    char c = 'Z';
    char *cp = &c;
    printf("cp is %p\n", cp);
    printf("The character at cp is %c\n", *cp);

    /*Pointer arithmetic - see what cp+2 is*/
    cp = cp+2;
    printf("cp is %p\n\n", cp);


    int x = 5;
    int *xp = &x;
    printf("xp is %p\n", cp);
    printf("The integer at xp is %d\n", *xp);

    /*Pointer arithmetic - see what xp+2 is */
    xp = xp+2;
    printf("xp is %p\n\n", xp);

    double d = 9.67;
    double *dp = &d;
    printf("dp is %p\n", dp);
    printf("The double at dp is %f\n", *xp);

    /*Pointer arithmetic - see what dp +2 is*/
    dp = dp + 2;
    printf("dp is 0x%08x\n\n", dp);


    return 0;
}