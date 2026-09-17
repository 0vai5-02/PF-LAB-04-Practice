#include <stdio.h>

int main () {
	int price, discount, amountSaved, finalAmount;
	
	printf("enter the total bill: \n");
	scanf("%d", &price);
		
	if(price < 2000 && price > 500) {
		discount = 5;
		finalAmount = price - (price * 0.05);
		amountSaved = price - finalAmount;
	} else if (price > 2000 & price < 4000) {
		discount = 10;
		finalAmount = price - (price * 0.1);
		amountSaved = price - finalAmount;
	} else if (price > 4000 & price < 6000) {
		discount = 20;
		finalAmount = price - (price * 0.2);
		amountSaved = price - finalAmount;
	} else {
		discount = 35;
		finalAmount = price - (price * 0.35);
		amountSaved = price - finalAmount;
	}
	
	printf("The Inital Amount: %d", price);
	printf("\nthe Discount: %d", discount);
	printf("\nThe Amount saved: %d", amountSaved);
	printf("\nThe amount after discount is: %d", finalAmount);
	
	return 0;
	
}
