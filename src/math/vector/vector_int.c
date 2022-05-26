#include<stdio.h>
#include<math.h>
#include<inttypes.h>

void addVeci(int *a, int *b, int *out, uint8_t size)
{
    for(uint8_t n = 0; n < size; n++)
        out[n] = a[n] + b[n];
}

void subVeci(int *a, int *b, int *out, uint8_t size)
{
    for(uint8_t n = 0; n < size; n++)
        out[n] = a[n] - b[n];
}

void scaleVeci(int *c, int scale, int *out, uint8_t size)
{
    for(uint8_t n = 0; n < size; n++)
    {
        c[n] *= scale;
        out[n] = c[n];
    }
}

int dotVeci(int *a, int *b, uint8_t size)
{
    int out = 0;

    for(uint8_t n = 0; n < size; n++)
        out += a[n] * b[n];

    return out;
}

float normfVeci(int *c, uint8_t size)
{
    float out = 0.0f;

    for(uint8_t n = 0; n < size; n++)
        out += c[n] * c[n];

    out = sqrtf(out);

    return out;
}

double normdVeci(int *c, uint8_t size)
{
    double out = 0.0;

    for(uint8_t n = 0; n < size; n++)
        out += c[n] * c[n];

    out = sqrt(out);

    return out;
}

void unitfVeci(int *c, float *out, uint8_t size)
{
    float norm = normfVeci(c, size);

    for(uint8_t n = 0; n < size; n++)
        out[n] = c[n] / norm;
}

void unitdVeci(int *c, double *out, uint8_t size)
{
    double norm = normdVeci(c, size);

    for(uint8_t n = 0; n < size; n++)
        out[n] = c[n] / norm;
}

void printVeci(int *c, uint8_t size)
{
    printf("[");

    for(uint8_t n = 0; n < size; n++)
    {
        if(n != size - 1)
            printf("%d, ", c[n]);

        else
            printf("%d]", c[n]);
    }
}

void printlnVeci(int *c, uint8_t size)
{
    printVeci(c, size);
    printf("\n");
}
