#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = rand() % 100;
	int* a;
	//printf("%p",&n);
	printf("donnez un nombre");
	scanf_s("%d", &a);
	while (n != a) {
		if (n > a) {
			printf("trop petit");
			scanf_s("%d", &a);
		}
		if (n < a) {
			printf("trop grand");
			scanf_s("%d", &a);
		}

	}
	printf("bravo");
}


	
