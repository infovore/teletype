#include "maths.h"

#include <stdlib.h>

#include "state.h"


void op_ADD(teletype_t *t) {
	tt_push(t, tt_pop(t) + tt_pop(t));
}

void op_SUB(teletype_t *t) {
	tt_push(t, tt_pop(t) - tt_pop(t));
}

void op_MUL(teletype_t *t) {
	tt_push(t, tt_pop(t) * tt_pop(t));
}

void op_DIV(teletype_t *t) {
	tt_push(t, tt_pop(t) / tt_pop(t));
}

void op_MOD(teletype_t *t) {
	tt_push(t, tt_pop(t) % tt_pop(t));
}

void op_RSH(teletype_t *t) {
	tt_push(t, tt_pop(t) >> tt_pop(t));
}

void op_LSH(teletype_t *t) {
	tt_push(t, tt_pop(t) << tt_pop(t));
}


void op_EQ(teletype_t *t) {
	tt_push(t, tt_pop(t) == tt_pop(t));
}

void op_NE(teletype_t *t) {
	tt_push(t, tt_pop(t) != tt_pop(t));
}

void op_LT(teletype_t *t) {
	tt_push(t, tt_pop(t) < tt_pop(t));
}

void op_GT(teletype_t *t) {
	tt_push(t, tt_pop(t) > tt_pop(t));
}

void op_MIN(teletype_t *t) {
	int16_t a = tt_pop(t);
	int16_t b = tt_pop(t);
	if (b > a) tt_push(t, a);
	else tt_push(t, b);
}

void op_MAX(teletype_t *t) {
	int16_t a = tt_pop(t);
	int16_t b = tt_pop(t);
	if (a > b) tt_push(t, a);
	else tt_push(t, b);
}

void op_LIM(teletype_t *t) {
	int16_t i = tt_pop(t);
	int16_t a = tt_pop(t);
	int16_t b = tt_pop(t);
	if (i < a) tt_push(t, a);
	else if (i > b) tt_push(t, b);
	else tt_push(t, i);
}

void op_WRAP(teletype_t *t) {
	int16_t i = tt_pop(t);
	int16_t a = tt_pop(t);
	int16_t b = tt_pop(t);
	if (a < b) {
		int16_t c = b - a + 1;
		while (i >= b) i -= c;
		while (i < a) i += c;
	}
	else {
		int16_t c = a - b + 1;
		while (i >= a) i -= c;
		while (i < b) i += c;
	}
	tt_push(t, i);
}


void op_QT(teletype_t *t) {
	// this rounds negative numbers rather than quantize (choose closer)
	int16_t b = tt_pop(t);
	int16_t a = tt_pop(t);

	int16_t c = b / a;
	int16_t d = c * a;
	int16_t e = (c+1) * a;

	if (abs(b-d) < abs(b-e)) tt_push(t, d);
	else tt_push(t, e);
}

void op_AVG(teletype_t *t) {
	tt_push(t, (tt_pop(t) + tt_pop(t)) >> 1);
}


