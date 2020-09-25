#include <stdio.h>
#include <stdlib.h>

void permute(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	
	
	int e = 0;
	while (e == 0) {
		int* a = 151;
		int* b = 0;
		int* c = 0;
		int* d;
		while (a >= 150 || b >= 150 || c >= 150) {
			printf("Entrez la longueur \n");
			scanf_s("%u", &a);
			printf("Entrez la largeur \n");
			scanf_s("%u", &b);
			printf("Entrez la hauteur \n");
			scanf_s("%u", &c);
		}

		if (b > a) {
			permute(&a, &b);
		}
		if (c > a) {
			permute(&a, &c);
		}
		if (c > b) {
			permute(&b, &c);
		}

		if (a <= 55 && b <= 35 && c <= 25) {
			printf("VALIDE\n");
		}
		else {
			printf("INVALIDE\n");
		}

		printf("Voulez vous verifier un autre colis ? tapez 1 pour oui, 0 pour non");
		scanf_s("%d", &d);
		if (d == 0) {
			return(EXIT_SUCCESS);
		}
		system("pause");



	}
	return(EXIT_SUCCESS);
}