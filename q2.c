#include <stdio.h>

int main () {
	int a, b, c, max;
	
	printf("Enter 3 numbers as a,b, and c");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	max = a;
	
	if(b > max) {
		max = b;
	}
	
	if(c > max) {
		max = c;
	}
	
	printf("The maximum number is: %d\n", max);
	
	return 0;
}
