#ifndef _OPS_OP_H_
#define _OPS_OP_H_

#include "state.h"

typedef struct {
	const char *name;
	void (*func)(teletype_t *t);
	uint8_t params;
	int8_t returns;
	const char* doc;
} tele_op_t;

#endif
