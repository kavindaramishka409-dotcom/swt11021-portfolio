 #include <stdio.h>
 int main () {
    int num1, num2; 
    printf("** MiNi Calculator **\n");

    printf("ENTER FIRST NUM : \n");
    scanf("%d", &num1 );

    printf("ENTER FIRST NUM :\n");
    scanf("%d", &num2);

    printf("\n");
    printf("+ : %d \n", num1 + num2);
    printf("- : %d \n", num1 - num2);
    printf("* :%d \n",  num1 * num2);

    git add week03/
git commit -m "Week 03: operators, bitwise, precedence, calculator"
git push origin main

    return 0;



 }