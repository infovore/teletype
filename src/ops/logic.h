#ifndef _OPS_LOGIC_H_
#define _OPS_LOGIC_H_

#include "state.h"

void op_EQ(teletype_t* t);
void op_NE(teletype_t* t);
void op_LT(teletype_t* t);
void op_GT(teletype_t* t);
void op_NZ(teletype_t* t);
void op_EZ(teletype_t* t);
void op_AND(teletype_t* t);
void op_OR(teletype_t* t);
void op_XOR(teletype_t* t);

#endif
