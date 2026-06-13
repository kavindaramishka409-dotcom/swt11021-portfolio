 #include <stdio.h> 
  
int main(void){
    int day;
    
    printf("enter day 1-7: ");
    scanf("%d",&day);

    if(day<1 || day> 7){
    printf("Invalid ");
    return 0;
    }

    switch (day){
       case 1:
           printf("monday\nWeekday\n");
           break;
    
       case 2 :
          printf("tuesday\nweekday\n");
          break;
       case 3:
          printf("wednesday\nweekday\n");
          break;
       case 4 :
          printf("thursday\nweekday\n");
          break;
       case 5:
          printf("friday\nweekday\n");
          break;
       case 6:
          printf("saturday\nweekend\n");
          break;
       case 7:
          printf("sunday\nweekend\n");
          break;

       }

    
return 0;
}
