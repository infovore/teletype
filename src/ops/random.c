#include "random.h"

#include <stdlib.h> // rand

void op_RAND(teletype_t *t) {
	int16_t a = tt_pop(t);
	if(a == -1)
		tt_push(t, 0);
	else
		tt_push(t, rand() % (a+1));
}

void op_RRAND(teletype_t *t) {
	int16_t a = tt_pop(t);
	int16_t b = tt_pop(t);

	int16_t min, max;
	if(a < b) {
		min = a;
		max = b;
	}
	else {
		min = b;
		max = a;
	}

	int16_t range = max - min + 1;
	if(range == 0) tt_push(t, a);
	else
		tt_push(t, rand() % range + min);
}

void op_TOSS(teletype_t *t) {
	tt_push(t, rand() & 1);
}
