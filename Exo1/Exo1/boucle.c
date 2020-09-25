#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int m;
	int somme = 0;
	printf("entrer une valeur de m : ");
	scanf_s("%u", &m);
	while (m > 360) {
		printf("essayer un nombre < a 360");
		printf("entrer une valeur de m : ");
		scanf_s("%u", &m);
	}
	for (n = 1; n <= m; n++) {
		somme = somme + n;
	}
	printf("La valeur de la somme est %u", somme);
	printf(" n=%u \n", n);
	
	
	int a = 0;
	int b = 1;
	while (b < 101) {
		a = a + b;
		b = b + 1;
		if (65535 - a < b) {
			printf("trop grand");
			printf("%u", b);
			return(EXIT_SUCCESS);
		}
	}
	printf("La valeur de la somme est %u", a);
	printf(" b=%u\n", b);


	int x = 1;
	int y = 0;
	do {
		y = y + x;
		x = x + 1;
	} while (x < 101);
	printf("La valeur de la somme est %u", y);
	printf(" x=%u \n", x);

}
