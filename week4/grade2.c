 #include <stdio.h> 
  
int main(void) {
int score ;
char grade ;


printf("ENTER YOUR SOCRE 0-100:");
scanf("%d",&score);

if(score<0 || score>100){
printf("Invalid score");

}

switch (score/10){
    case 10: // 100
    case 9 : //  99
       grade = 'A';
       printf("grade:%C\nMessage:Excellent\n",grade);
    break;

    case 8: //80-89
       grade ='B';
       printf("grade:%c\nMessage:very good\n",grade);
       break;

    case 7: // 70-79
    case 6: // 60-69
       grade = 'C';
       printf("grade:%c\nMessage:good\n",grade);
       break;

    case 5: // 50-59
       grade = 'D';
       printf("grade:%c\nMessage:Pass\n",grade);
       break;

    default : // 0-49 -  case 4,3,2,1,0
       grade = 'F';
       printf("grade:%c\nMessage: Fail\n",grade);
       break;
}
return 0;
}