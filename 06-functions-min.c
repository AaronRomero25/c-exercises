#include <stdio.h>

// Practice exercise: writing and calling a simple function.
// Goal: implement a function that returns the smaller of two integers.
// TODOs for you:
// 1) Complete the min_of_two function so it compares a and b and returns the
//    smaller value.
// 2) In main, call min_of_two with the user inputs and print the result.
// Expected outputs students should reach:
// - Inputs: 5 and 9  -> "The smaller number is 5"
// - Inputs: -3 and 4 -> "The smaller number is -3"
// Hint: you can use an if/else inside the function, or use a temporary
// variable to track the minimum.
int min_of_two(int a, int b) {
    // TODO: replace this placeholder return with the correct logic.
    if(a<b){
        return a;
    }
    else return b;
    
}

int main(void) {
    int first = 0;
    int second = 0;

    printf("Enter first integer: \n");
    scanf("%d", &first);

    printf("Enter second integer: \n");
    scanf("%d", &second);

    // TODO: call min_of_two and print the result to the screen.
    int smallest = min_of_two(first, second);

    printf(" The smaller number is %d\n", smallest);
    return 0;
}
