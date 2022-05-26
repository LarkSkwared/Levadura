#include<stdio.h>
#include<math.h>
#include<inttypes.h>

void addVecf(float *a, float *b, float *out, uint8_t size)
{
    for(uint8_t n = 0; n < size; n++)
        out[n] = a[n] + b[n];
}

void subVecf(float *a, float *b, float *out, uint8_t size)
{
    for(uint8_t n = 0; n < size; n++)
        out[n] = a[n] - b[n];
}

void scaleVecf(float *c, float scale, float *out, uint8_t size)
{
    for(uint8_t n = 0; n < size; n++)
    {
        c[n] *= scale;
        out[n] = c[n];
    }
}

float dotVecf(float *a, float *b, uint8_t size)
{
    float out = 0.0f;

    for(uint8_t n = 0; n < size; n++)
        out += a[n] * b[n];

    return out;
}

float normfVecf(float *c, uint8_t size)
{
    float out = 0.0f;

    for(uint8_t n = 0; n < size; n++)
        out += c[n] * c[n];

    out = sqrtf(out);

    return out;
}

double normdVecf(float *c, uint8_t size)
{
    double out = 0.0;

    for(uint8_t n = 0; n < size; n++)
        out += c[n] * c[n];

    out = sqrt(out);

    return out;
}

void unitfVecf(float *c, float *out, uint8_t size)
{
    float norm = normfVecf(c, size);

    for(uint8_t n = 0; n < size; n++)
        out[n] = c[n] / norm;
}

void unitdVecf(float *c, double *out, uint8_t size)
{
    double norm = normdVecf(c, size);

    for(uint8_t n = 0; n < size; n++)
        out[n] = c[n] / norm;
}

void printVecf(float *c, uint8_t size)
{
    printf("[");

    for(uint8_t n = 0; n < size; n++)
    {
        if(n != size - 1)
            printf("%f, ", c[n]);

        else
            printf("%f]", c[n]);
    }
}

void printlnVecf(float *c, uint8_t size)
{
    printVecf(c, size);
    printf("\n");
}
