#ifndef _MATH_VECTOR_FLOAT_H__
#define _MATH_VECTOR_FLOAT_H__

#include<inttypes.h>

void addVecf(float *a, float *b, float *out, uint8_t size);
void subVecf(float *a, float *b, float *out, uint8_t size);
void scaleVecf(float *c, float scale, float *out, uint8_t size);
float dotVecf(float *a, float *b, uint8_t size);
float normfVecf(float *c, uint8_t size);
double normdVecf(float *c, uint8_t size);
void unitfVecf(float *c, float *out, uint8_t size);
void unitdVecf(float *c, double *out, uint8_t size);
void printVecf(float *c, uint8_t size);
void printlnVecf(float *c, uint8_t size);

#endif // _MATH_VECTOR_FLOAT_H__
