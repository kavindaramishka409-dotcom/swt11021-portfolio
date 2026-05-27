#include <stdio.h>

int main() {
    char name[20];
    int number;
    double GPA;
    int year;

    

    printf("Enter your initial: ");
    scanf("%[^\n]", &name);

    printf("Enter your registration number: ");
    scanf("%d", &number);

    printf("Enter your GPA: ");
    scanf("%lf", &GPA);

    printf("Enter your year: ");
    scanf(" %d", &year);

    


    printf("--------------------------------------------\n");
    printf("initial : %s\n", name);
    printf("registration number: %d\n", number);
    printf("GPA   : %f\n", GPA);
    printf("year  : %d\n", year);

    return 0;
}