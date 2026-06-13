 #include <stdio.h> 
  
int main(void) {
int score ;



printf("ENTER YOUR SOCRE 0-100:");
scanf("%d",&score);

if(score<0 || score>100)
printf("Invalid score");

else if (score>=90)
printf("grade  : A\nMASSAGE:Excellent");

else if (score>=75)
printf("grade  : B\nMASSAGE:very Good");

else if (score>=60)
printf("grade  : C\nMASSAGE:Good");

else if (score>=50)
printf("grade  : D\nMASSAGE:Pass");

else
printf("grade  : F\nMASSAGE:Fail");












return 0;
}