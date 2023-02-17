#include <stdio.h>

int main() {
    for (int i = 0; i <= 8; i++) {
        int first_digit = i / 3;
        int second_digit = i % 3;
        if (first_digit != second_digit) { 
            putchar('0' + first_digit); 
            putchar('0' + second_digit); 
            if (i != 8) {
                putchar(', ');
            }
        }
    }
    putchar('\n'); 
    return 0;
}
