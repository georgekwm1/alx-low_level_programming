#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char letter;

    for (letter = 'a' ; letter <= 'z' ; letter++) {
        if (letter == 'c'|| letter == 'q'){
            putchar(32);
        }
	putchar(letter);  
    }
    putchar('\n');
    return 0;
}
