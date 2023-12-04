/*MOGANEDI SEROBANYE JOSEPH*/
/*4017402*/
/*QUESTION 2*/

#include <stdio.h>

int main() {

    char CHAR = 'A';
    int INT = 320;
    double DOUBLE = 2.997925;

    /**/
    char* char_ptr = &CHAR;
    int* int_ptr = &INT;
    double* double_ptr = &DOUBLE;

    /*print out the address*/
    printf("The address of char is 0x%x\n", &CHAR);
    printf("The address of int is 0x%x\n", &INT);
    printf("The address of double is 0x%x\n", &DOUBLE);
    printf("The address of char* is 0x%x\n", &char_ptr);
    printf("The address of int* is 0x%x\n", &int_ptr);
    printf("The address of double is 0x%x\n", &double_ptr);
    printf("\n");

    /*print out the values*/
    printf("The value of char is %c\n", CHAR);
    printf("The value of int is %d\n", INT);
    printf("The value of double is %lf\n", DOUBLE);
    printf("The value of char* is 0x%x\n", char_ptr);
    printf("The value of int* is 0x%x\n", int_ptr);
    printf("The value of double* is 0x%x\n", double_ptr);
    printf("\n");

    /*print out the sizes of the bytes*/
    printf("The size of char is %zu bytes\n", sizeof(CHAR));
    printf("The size of int is %zu bytes\n", sizeof(INT));
    printf("The size of double is %zu bytes\n", sizeof(DOUBLE));
    printf("The size of char* is %zu bytes\n", sizeof(char_ptr));
    printf("The size of int* is %zu bytes\n", sizeof(int_ptr));
    printf("The size of double* is %zu bytes\n", sizeof(double_ptr));

    return 0;
}
