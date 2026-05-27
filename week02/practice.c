#include <stdio.h>

int main() {
    int num = 400
    ;
    float pi = 3.141593;
    char ch = 'A';
    int percentage = 33;

    printf("Integer (decimal) : %d\n", num);
    printf("Integer (hex)     : %x\n", num);
    printf("Integer (octal)   : %o\n", num);
    printf("Float (default)   : %f\n", pi);
    printf("Float (2 dp)      : %.2f\n", pi);
    printf("Float (scientific): %e\n", pi);
    printf("Character         : %c\n", ch);
    printf("percentage        : %d%%\n",percentage);

    return 0;
}