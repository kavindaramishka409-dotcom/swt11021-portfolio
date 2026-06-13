#include <stdio.h>
int main(){
int x = 5;
// Bug 1: Use '==' for comparison, not '=' which is for assignment
if (x == 0) {
    printf("Zero\n");
}
else {
    printf("Non-zero\n");
}

switch (x) {
    case 5:
        printf("Five\n");
        // Bug 2: Missing break causes fall through to case 6
        break;
    case 6:
        printf("Six\n");
        break;
}
return 0;
}