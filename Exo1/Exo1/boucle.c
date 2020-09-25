#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int m;
	int somme = 0;
	printf("entrer une valeur de n : ");
	scanf_s("%u", &m);
	for (n = 1; n <= m; n++) {
		somme = somme + n;
	}
	printf("La valeur de la somme est %d", somme);
	printf(" n=%d \n", n);
	
	
	int a = 0;
	int b = 1;
	while (b < 101) {
		a = a + b;
		b = b + 1;
		if (65535 - a < b) {
			return(EXIT_SUCCESS);
		}
	}
	printf("La valeur de la somme est %d", a);
	printf(" b=%d \n", b);


	int x = 1;
	int y = 0;
	do {
		y = y + x;
		x = x + 1;
	} while (x < 101);
	printf("La valeur de la somme est %d", y);
	printf(" x=%d \n", x);

}
