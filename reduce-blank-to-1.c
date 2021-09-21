#include <stdio.h>

int main() {
    // variable for input
    int input;
    // getchars the input and then checks if it is not eof
    // if u getchar the variable, it will scan the next value if not the first
    while((input = getchar()) != EOF) {
        // check if current input is blank
        if(input == ' ') {
            // print the blank
            putchar(input);
            // getchars the input and checks if it is blank
            while((input = getchar()) == ' '); // if not blank then the loop will break
            // since the getchar after breaking is not blank it will print the char
            putchar(input);
        } else {
            // print the char
            putchar(input);
        }
    }
    return 0;
}