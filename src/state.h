#ifndef _STATE_H_
#define _STATE_H_

#include <stdbool.h>
#include <stdint.h>

#define STACK_SIZE 8

typedef struct {
  int16_t values[STACK_SIZE];
  int16_t top;
} teletype_stack_t;


typedef struct {
  teletype_stack_t stack;
} teletype_t;

static inline int16_t tt_pop(teletype_t *t) {
	t->stack.top--;
	return t->stack.values[t->stack.top];
}

static inline void tt_push(teletype_t *t, int16_t data) {
	t->stack.values[t->stack.top] = data;
	t->stack.top++;
}

static inline void tt_stack_clear(teletype_t *t) {
  t->stack.top = 0;
}

static inline int16_t tt_stack_size(teletype_t *t) {
	return t->stack.top;
}

#endif
