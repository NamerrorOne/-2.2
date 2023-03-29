#include <iostream>

main() {
	int a, b;
	printf("a=");
	scanf("%i", &a);
	printf("b=");
	scanf("%i", &b);
	
	if(a>b) {
		printf("Bolshe");	
	} else if(a<b) {
		printf("Menwe");
	} else {
		printf("RavnbI");
	}
	
}
