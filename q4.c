# include <stdio.h>

int main () {
	int sizeOfCup, manual;
	float totalTime;
	char typeOfCoffee;
	
	printf("Enter the type of Coffee you are willing to get, W for White and B for Black: \n");
	scanf("%c", &typeOfCoffee);
	
	printf("Enter the Size of the cup, For a single cup enter 1 and 2 for double: \n");
	scanf("%d", &sizeOfCup);
	
	printf("Enter if you want your coffee to be made manual, Enter 1 for Yes and 0 for No ");
	scanf("%d", &manual);
	
	switch (typeOfCoffee) {
		case 'B':
		case 'b':
			printf("1. Put Water (20 mins)\n");
           printf("2. Add Sugar (20 mins)\n");
           printf("3. Mix Well (25 mins)\n");
           printf("4. Add Coffee (15 mins)\n");
           printf("5. Mix Well (25 mins)\n");
           break;
       case 'W':
       case 'w':
       	printf("1. Put Water (15 mins)\n");
           printf("2. Add Sugar (15 mins)\n");
           printf("3. Mix Well (20 mins)\n");
           printf("4. Add Coffee (2 mins)\n");
           printf("5. Add Milk (4 mins)\n");
           printf("6. Mix Well (20 mins)\n");
           break;
	};
	
	if(typeOfCoffee == 'B' || typeOfCoffee == 'b') {
		totalTime = 20 + 20 + 25+ 15+25;
	} else if (typeOfCoffee == 'w' || typeOfCoffee == 'W') {
		totalTime = 15 + 15+20+2+4+20;
	} else {
		totalTime = 0;
	}
	
	if(sizeOfCup == 2) {
		totalTime = totalTime * (1.5);
	};
	
	if(totalTime > 0) {
		printf("The total time to make a coffe is: %.2f", totalTime, "Mins");
	} else {
		printf("Irrelavant Coffee");
	}
	
	return 0;
	
	
}
