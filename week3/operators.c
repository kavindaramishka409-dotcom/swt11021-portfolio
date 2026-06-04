 #include <stdio.h>

int main() {
    
    int a = 20;
    int b = 15;
    int c = 10;

    // Arithmetic operators
    printf("\nArithmetic Operators:\n");
    printf("Addition of a & b: %d\n", a+b);
    printf("Subtraction of a & b: %d\n", a-b);
    printf("Multiplication of a & b: %d\n", a*b);
    printf("Division of a & b: %d\n", a/b);
    printf("Remainder of a & b: %d\n", a%b);

    // Relational operators
    printf("\nRelational Operators:\n");
    printf("a==b : %d\n", a==b); // equal
    printf("a!=b : %d\n", a!=b); // not equal
    printf("a>b  : %d\n", a>b);  // greater than
    printf("a<b  : %d\n", a<b);  // less than
    printf("a>=b : %d\n", a>=b); // greater than or equal
    printf("a<=b : %d\n", a<=b); // less than or equal

    // Logical operators
   printf("\nLogical Operators:\n");
   printf("a&&b : %d\n", a&&b); // AND
   printf("a||b : %d\n", a||b); // OR
   printf("!b   : %d\n", !b);   // NOT b
   printf("!c   : %d\n", !c);   // NOT c


    // Bitwise operators
   printf("\nbitwise Operators:\n");
   printf("a&b : %d\n", a&b);   // AND
   printf("a|b : %d\n", a|b);   // OR
   printf("a^b : %d\n", a^b);   // XOR
   printf("~a : %d\n", ~a);     // NOT
   printf("a<<2 : %d\n", a<<2); // Left shift by 2
   printf("a>>1 : %d\n", a>>1); // Right shift by 1

   // Conditional operator

   printf("\nconditional Operators:\n");
   printf("a>b ? a : b : %d\n", a>b ? a : b);  // Ternary
    
    return 0;
}