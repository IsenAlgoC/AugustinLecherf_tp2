#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 0;
	printf("Entrez une année avant l'an 10000\n");
	scanf_s("%d", &a);
	while (a > 10000) {
		printf("essayer une année entre 0 et 10000");
		scanf_s("%d", &a);
	}
	if (a % 4 == 0) {
		printf("cette annee est bissextile");
		}
	else {
		printf("cette annee n'est pas bissextile");
		}
	
}