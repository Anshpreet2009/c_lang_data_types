#include <stdio.h>   //include standard input output library header
#include <stdbool.h> //include standard boolean library header

int main() // main function of the program
{
    char symbol1 = '!'; // this data type holds a single character
    char symbol2 = '@'; // Its value can be set to '\0' to represent the null character
    char symbol3 = '#';

    char name1[] = "Papyrus"; // this data type holds an array of characters (string)
    char name2[] = "Sans";    // Its value can be set to "" to represent an empty string
    char name3[] = "Undyne";

    int int1 = 18; // this data type holds whole numbers
    int int2 = 30; // Its value can be set to 0 to represent zero
    int int3 = -25;

    float dec1 = 3.14; // this data type holds decimal numbers with single precision
    float dec2 = 2.71; // Its value can be set to 0.0f to represent zero
    float dec3 = 1.5;

    double precise1 = 3.141592653589793; // this data type holds decimal numbers with double the precision of a float
    double precise2 = 2.718281828459045;
    double precise3 = 1.618033988749895;

    bool in_college = false; // this data type holds a false value (boolean)
    bool employed = 1;       // booleans can also be represented as integers (0 for false, 1 for true)
    bool in_school = true;   // this data type holds a true value (boolean)

    printf("symbols: \n");
    printf("%c\n", symbol1); // print the symbol and go to a new line
    printf("%c\n", symbol2);
    printf("%c\n", symbol3);

    printf("names: \n");
    printf("%s\n", name1); // print the string
    printf("%s\n", name2);
    printf("%s\n", name3);

    printf("integers: \n");
    printf("%3d\n", int1);   // print the integer with a minimum width of 3(minimum number of characters to be printed)
    printf("%-4d\n", int2);  // print the integer with a minimum width of 4, left-aligned
    printf("%+05d\n", int3); // print the integer with a minimum width of 5, padded with leading zeros, and always show the sign

    printf("decimals: \n");
    printf("%.2f\n", dec1);  // print the float with 2 decimal places
    printf("%.4f\n", dec2);  // print the float with 4 decimal places
    printf("%7.1f\n", dec3); // print the float with 1 decimal place, minimum width of 7

    printf("precise decimals: \n");
    printf("%.15lf\n", precise1); // print the double with 15 decimal places
    printf("%.15lf\n", precise2);
    printf("%.15lf\n", precise3);

    printf("booleans: \n");
    printf("%d\n", in_school); // print the boolean as an integer
    printf("%d\n", employed);
    printf("%d\n", in_college);

    return 0;
}

