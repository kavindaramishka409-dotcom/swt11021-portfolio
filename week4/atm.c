 #include <stdio.h>

 int main() {

int option;
float balance = 250000.00;
float amount;

printf("========= SEUL ATM===========\n");
printf("1.check Balance\n");
printf("2.Deposit\n");
printf("3.Withdraw\n");
printf("4.Exit\n");
printf("select option: ");
scanf("%d", &option);

switch(option){
    case 1 : 
          printf("currnet Balnce:%.2f LKR\n", balance);
          break;
    
    case 2 :
          printf("Enter amount to Deposit:%.2f LKR\n",amount);
          scanf("%f",&amount);
          balance = balance + amount ;
            printf("New balance: %.2f LKR \n ",balance);
          break;
  
    case 3 :
         printf("Enter amount to Withdraw:%.2f LKR\n",amount);
         scanf("%f",&amount);
         if (amount<= balance){
            balance = balance - amount ;
            printf("New balance: %.2f LKR\n",balance);

         }
         else{
            printf("Insufficient  funds \n");
         }
         break;
        
    case 4 :
        printf("Good bye \n");
        break;

    default:
        printf("Invalid option/n");
        break;
    
}







return 0;
 }