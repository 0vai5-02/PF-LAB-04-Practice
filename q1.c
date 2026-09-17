#include <stdio.h>

int main () {
	int time;
	
	printf("Enter the time: ");
	scanf("%d", &time);
	
	if(time >= 5 && time <= 11) {
		printf("Good Morning");
	} else if (time >= 12 && time <= 18) {
		printf("Good Afternoon");
	} else if(time >= 19 && time <= 24 ) {
		printf("Good Evening");
	}else {
		printf("The time entered is not catered in the 24-Hour Time Format.");
	} 
	
	return 0;
}
