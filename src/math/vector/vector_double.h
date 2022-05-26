#ifndef _MATH_VECTOR_DOUBLE_H__
#define _MATH_VECTOR_DOUBLE_H__

#include<inttypes.h>

void addVecd(double *a, double *b, double *out, uint8_t size);
void subVecd(double *a, double *b, double *out, uint8_t size);
void scaleVecd(double *c, double scale, double *out, uint8_t size);
double dotVecd(double *a, double *b, uint8_t size);
float normfVecd(double *c, uint8_t size);
double normdVecd(double *c, uint8_t size);
void unitfVecd(double *c, float *out, uint8_t size);
void unitdVecd(double *c, double *out, uint8_t size);
void printVecd(double *c, uint8_t size);
void printlnVecd(double *c, uint8_t size);

#endif // _MATH_VECTOR_DOUBLE_H__
