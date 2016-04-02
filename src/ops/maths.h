#ifndef _OPS_MATHS_H_
#define _OPS_MATHS_H_

#include "state.h"

void op_ADD(teletype_t* t);
void op_SUB(teletype_t* t);
void op_MUL(teletype_t* t);
void op_DIV(teletype_t* t);
void op_MOD(teletype_t* t);

void op_EQ(teletype_t* t);
void op_NE(teletype_t* t);
void op_LT(teletype_t* t);
void op_GT(teletype_t* t);

void op_MIN(teletype_t* t);
void op_MAX(teletype_t* t);
void op_LIM(teletype_t* t);
void op_WRAP(teletype_t* t);

#endif
