#ifndef _STATE_H_
#define _STATE_H_

#include <stdint.h>

#define CV_COUNT 4
#define Q_LENGTH 16
#define TR_COUNT 4

typedef struct {
    int16_t a;
    int16_t b;
    int16_t c;
    int16_t cv[CV_COUNT];
    int16_t cv_off[CV_COUNT];
    int16_t cv_slew[CV_COUNT];
    int16_t d;
    int16_t drunk;
    int16_t drunk_max;
    int16_t drunk_min;
    int16_t drunk_wrap;
    int16_t flip;
    int16_t i;
    int16_t in;
    int16_t m;
    int16_t m_act;
    int16_t o;
    int16_t o_inc;
    int16_t o_min;
    int16_t o_max;
    int16_t o_wrap;
    int16_t p_n;
    int16_t param;
    int16_t q[Q_LENGTH];
    int16_t q_n;
    int16_t scene;
    int16_t t;
    int16_t time;
    int16_t time_act;
    int16_t tr[TR_COUNT];
    int16_t tr_pol[TR_COUNT];
    int16_t tr_time[TR_COUNT];
    int16_t x;
    int16_t y;
    int16_t z;
} scene_variables_t;

typedef struct { scene_variables_t variables; } scene_state_t;

typedef struct {
} exec_state_t;

typedef struct {
} command_state_t;

#endif
