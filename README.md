# some-C-programming

Part 1 - The C program includes a main function that uses a loop to prompt the user for input until they enter
         an integer or reach the limit of five non-integer entries. It also checks whether the input is an
         integer or not using the is_integer function. If the user enters an integer, it calculates the sum
         of three consecutive factorials and prints the result. If the user enters non-integer input five times,
         it displays the specified message and exits the program.

Part/QUESTION 2 - The C program initializes a double, an int, and a char with arbitrary values. Subsequently, it declares and initializes
         pointers to each of these variables. The program then proceeds to print the hexadecimal addresses, values, and memory
         sizes (in bytes) of the original variables and their corresponding pointers. This includes addresses presented in the
         format "0x_______", values displayed with proper formatting specifiers for char, int, and double, and memory sizes obtained
         using the sizeof operator. The output is organized to clearly present the memory-related characteristics of each variable and
         pointer, offering a comprehensive view of their locations in memory, stored values, and allocated sizes.

part/QUESTION 2 - The C program initializes a character variable c with the value 'Z' and declares a pointer to a character cp pointing to the address
         of c. The program prints the initial address and the value of the character pointed to by cp. It then employs pointer arithmetic by incrementing
         the pointer cp by 1, reflecting the size of a char. The program prints the updated address of cp, demonstrating the effect of pointer arithmetic.
         However, it refrains from printing the value of *cp after the increment, cautioning that the pointer might now point to memory not allocated for the
         program. The code serves as a concise illustration of how pointer arithmetic works with a char variable and encourages exploration of similar operations
         with different data types, such as int and double, to understand their respective sizes in memory.
