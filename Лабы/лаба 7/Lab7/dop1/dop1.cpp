#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <math.h>
int is_prime(unsigned num) {
	int prime;
	if (num <= 5 && (num <= 2 || num == 3 || num == 5)) prime = 1;
	else if (~num & 1 || 0 == num % 3 || 0 == num % 5) prime = 0;
	else {
		unsigned n;
		for (n = 3; n * n <= num && num % n; n += 2) { ; }
		prime = n * n > num ? 1 : 0;
	}
	return prime;
}
int is_range(unsigned num) {
	unsigned x = num % 10;
	unsigned y;
	while (num /= 10) {
		y = num % 10;
		if (y > x) return 0;
		x = y;
	}
	return 1;
}
int main(void) {
	setlocale(LC_ALL, "RUS");
	unsigned x, y, n = 1;
	do {
		x = n * n;
		y = (int)log10(x);
		if (2 == y && is_range(x) && is_prime(n)) {
			printf("Это число: %u\n", x);
		}
		n += 2;
	} while (y < 3);
}
