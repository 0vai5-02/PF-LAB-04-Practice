#include <stdio.h>

int main() {
   int snack_types, qty, i;
   char choice;
   int total_bill = 0;

   printf("\tABC Restaurant Online Order Placement\n");
   printf("\t\t\tWELCOME!\n\n");
   printf("Please select from the following Menu\n");
   printf("B= Burger\n");
   printf("F= French Fries\n");
   printf("P= Pizza\n");
   printf("S= Sandwiches\n\n");

   printf("How many types of snacks you need to order: ");
   scanf("%d", &snack_types);

   if (snack_types == 1 || snack_types == 2) {
       printf("---------------------------------------------\n");
       printf("You have ordered!\n");

       for (i = 1; i <= snack_types; i++) {
           if (i == 1) {
               printf("Enter first Snack you want to order: ");
           } else {
               printf("Enter second Snack you want to order: ");
           }
           scanf(" %c", &choice);

           printf("Please provide quantity: ");
           scanf("%d", &qty);

           switch (choice) {
               case 'B':
               case 'b':
                   printf("%d Burger (s) value %d PKR\n", qty, qty * 200);
                   total_bill += qty * 200;
                   break;
               case 'F':
               case 'f':
                   printf("%d French Fries (s) value %d PKR\n", qty, qty * 50);
                   total_bill += qty * 50;
                   break;
               case 'P':
               case 'p':
                   printf("%d pizza (s) value %d PKR\n", qty, qty * 500);
                   total_bill += qty * 500;
                   break;
               case 'S':
               case 's':
                   printf("%d Sandwiches (s) value %d PKR\n", qty, qty * 150);
                   total_bill += qty * 150;
                   break;
               default:
                   printf("Invalid snack choice selected.\n");
                   break;
           }
       }

       printf("Total: %d PKR\n", total_bill);
       printf("Thank you for your order... have a nice day.\n");
   } else {
       printf("Invalid input! You can only order 1 or 2 types of snacks.\n");
   }

   return 0;
}
