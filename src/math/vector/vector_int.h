#ifndef _MATH_VECTOR_INT_H__
#define _MATH_VECTOR_INT_H__

#include<inttypes.h>

void addVeci(int *a, int *b, int *out, uint8_t size);
void subVeci(int *a, int *b, int *out, uint8_t size);
void scaleVeci(int *c, int scale, int *out, uint8_t size);
int dotVeci(int *a, int *b, uint8_t size);
float normfVeci(int *c, uint8_t size);
double normdVeci(int *c, uint8_t size);
void unitfVeci(int *c, float *out, uint8_t size);
void unitdVeci(int *c, double *out, uint8_t size);
void printVeci(int *c, uint8_t size);

#endif // _MATH_VECTOR_INT_H__
