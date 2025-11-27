#include <stdio.h>

// Practice exercise: if/else with arithmetic.
// Goal: read an integer and report whether it is zero, even, or odd.
// TODOs for you:
// 1) After reading number, use an if/else chain to check three cases:
//    - number is zero
//    - number is even (divisible by 2)
//    - number is odd (everything else)
// 2) Print a different line for each case.
// Expected example outputs:
// - Input: 0  -> "Zero is even."
// - Input: 7  -> "7 is odd."
// - Input: 42 -> "42 is even."
// Hint: use the remainder operator % to test divisibility by 2.
int main(void) {
    int number = 0;

    printf("Enter an integer: \n");
    scanf("%d", &number);
    int remainder = number % 2;
    // Add your if/else statements here to print the correct message.
    if (number == 0){
        printf("The number is Zero\n");
    }
    else if (remainder==0){
        printf("The number is even\n");
    }
    else{
        printf("The number is odd\n");
    }
    return 0;
}
