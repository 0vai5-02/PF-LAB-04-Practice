#include<stdio.h>
int main()
{
	int unit;
	float final_bill;
	printf(" Enter Units Consumed: ");
	scanf("%d", &unit);
	
	if(unit<=50){
		final_bill=unit*0.5;
		printf("Your Total Bill is: %.2f" ,final_bill*1.2);
	}
	else if(unit>50 && unit<=100)
	{
		final_bill=unit*0.75;
		printf("Your Total Bill is: %.2f" ,final_bill*1.2);
	}
	else if(unit>100 && unit<=200){
		final_bill=unit*1.2;
		printf("Your Total Bill is: %.2f" ,final_bill*1.2);
	}
	else if(unit>200){
		final_bill=unit*1.5;
		printf("Your Total Bill is: %.2f" ,final_bill*1.2);
	}
	return 0;
}
