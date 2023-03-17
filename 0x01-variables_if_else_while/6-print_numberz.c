#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    n = 0;

    while (n<10){
        putchar(n + '0');
        n++;
    }
    putchar('\n');
    return 0;
}
