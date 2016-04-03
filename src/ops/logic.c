#include "logic.h"

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

void op_NZ(teletype_t *t) {
	tt_push(t, tt_pop(t) != 0);
}

void op_EZ(teletype_t *t) {
	tt_push(t, tt_pop(t) == 0);
}

void op_AND(teletype_t *t) {
	tt_push(t, tt_pop(t) & tt_pop(t));
}

void op_OR(teletype_t *t) {
	tt_push(t, tt_pop(t) | tt_pop(t));
}

void op_XOR(teletype_t *t) {
	tt_push(t, tt_pop(t) ^ tt_pop(t));
}
