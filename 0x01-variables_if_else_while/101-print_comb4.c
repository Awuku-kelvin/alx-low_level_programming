#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if the last digit of a random number is
 * greater than or less than 5, or is zero..
(*
 * Return: 0 on success
 */
#include <stdio.h>

int main() {
    for (int i = 0; i <= 2; i++) { 
        for (int j = i+1; j <= 3; j++) { 
            for (int k = j+1; k <= 4; k++) { 
                int code = i*100 + j*10 + k; 
                if (code != 123 && code != 132 && code != 213 && code != 231 && code != 312 && code != 321) {
                    putchar('0' + i);
                    putchar('0' + j); 
                    putchar('0' + k); 
                    if (code != 420) { 
                        putchar(', ');
                    }
                }
            }
        }
    }
    putchar('\n');
    return 0;
}
