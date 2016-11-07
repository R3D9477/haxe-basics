#include <stdio.h>

int k = 0;

void set_k (int v) {
	k = v;
}

int get_k (void) {
	return k;
}

int sum_k (int a) {
	return a + k;
}

void show_k (void) {
	printf("k is %i\n", k);
}
