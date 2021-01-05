/* ------------------------- */
/* Program for - Nested for */
/* ------------------------- */
#include<stdio.h>
#include<conio.h>

/* Created by Rizky Khapidsyah */

int main() {
	int a, b;
	
	for (a = 1; a <= 5; a++) {
		printf("\n");

		for (b = a; b <= 5; b++)
			printf(" %d ", a);
	}
	
	_getch();
	return 0;
}