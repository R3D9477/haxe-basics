#include <neko.h>
#include <stdio.h>

int k = 0;

void set_k (value v) {
	if (val_is_int(v))
		k = val_int(v);
}
DEFINE_PRIM(set_k, 1); // function sum with 1 argument

value get_k (void) {
	return alloc_int(k);
}
DEFINE_PRIM(get_k, 0); // function append with 0 arguments

value sum_k (value a)
{
	if(!val_is_int(a))
		return val_null;
	return alloc_int(val_int(a) + k);
}
DEFINE_PRIM(sum_k, 1); // function append with 0 arguments

void show_k (void) {
	printf("k is %i\n", k);
}
DEFINE_PRIM(show_k, 0); // function append with 0 arguments
