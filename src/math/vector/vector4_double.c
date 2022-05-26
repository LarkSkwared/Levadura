#include"vector_double.h"
#include"vector_types.h"

#define SIZE 4

Vec4d addVec4d(Vec4d a, Vec4d b)
{
    Vec4d out;
    addVecd(a.c, b.c, out.c, SIZE);
    return out;
}

Vec4d subVec4d(Vec4d a, Vec4d b)
{
    Vec4d out;
    subVecd(a.c, b.c, out.c, SIZE);
    return out;
}

Vec4d scaleVec4d(Vec4d *vec, double scale)
{
    Vec4d out;
    scaleVecd(vec->c, scale, out.c, SIZE);
    return out;
}

double dotVec4d(Vec4d a, Vec4d b)
{
    double out = dotVecd(a.c, b.c, SIZE);
    return out;
}

float normfVec4d(Vec4d vec)
{
    float out = normfVecd(vec.c, SIZE);
    return out;
}

double normdVec4d(Vec4d vec)
{
    double out = normdVecd(vec.c, SIZE);
    return out;
}

Vec4f unitfVec4d(Vec4d vec)
{
    Vec4f out;
    unitfVecd(vec.c, out.c, SIZE);
    return out;
}

Vec4d unitdVec4d(Vec4d vec)
{
    Vec4d out;
    unitdVecd(vec.c, out.c, SIZE);
    return out;
}

void printVec4d(Vec4d vec)
{
    printVecd(vec.c, SIZE);
}

void printlnVec4d(Vec4d vec)
{
    printlnVecd(vec.c, SIZE);
}
