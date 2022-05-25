#include<stdio.h>
#include<math.h>
#include<inttypes.h>

void addVecd(double *a, double *b, double *out, uint8_t size)
{
    for(uint8_t n = 0; n < size; n++)
        out[n] = a[n] + b[n];
}

void subVecd(double *a, double *b, double *out, uint8_t size)
{
    for(uint8_t n = 0; n < size; n++)
        out[n] = a[n] - b[n];
}

void scaleVecd(double *c, double scale, double *out, uint8_t size)
{
    for(uint8_t n = 0; n < size; n++)
    {
        c[n] *= scale;
        out[n] = c[n];
    }
}

double dotVecd(double *a, double *b, uint8_t size)
{
    double out = 0.0;

    for(uint8_t n = 0; n < size; n++)
        out += a[n] * b[n];

    return out;
}

float normfVecd(double *c, uint8_t size)
{
    float out = 0.0;

    for(uint8_t n = 0; n < size; n++)
        out += c[n] * c[n];

    out = sqrtf(out);

    return out;
}

double normdVecd(double *c, uint8_t size)
{
    double out = 0.0;

    for(uint8_t n = 0; n < size; n++)
        out += c[n] * c[n];

    out = sqrt(out);

    return out;
}

void unitfVecd(double *c, float *out, uint8_t size)
{
    float norm = normfVecd(c, size);

    for(uint8_t n = 0; n < size; n++)
        out[n] = c[n] / norm;
}

void unitdVecd(double *c, double *out, uint8_t size)
{
    double norm = normdVecd(c, size);

    for(uint8_t n = 0; n < size; n++)
        out[n] = c[n] / norm;
}

void printVecd(double *c, uint8_t size)
{
    printf("[");

    for(uint8_t n = 0; n < size; n++)
    {
        if(n != size - 1)
            printf("%lf, ", c[n]);

        else
            printf("%lf]\n", c[n]);
    }
}
