#include"vector_float.h"
#include"vector_types.h"

#define SIZE 4

Vec4f addVec4f(Vec4f a, Vec4f b)
{
    Vec4f out;
    addVecf(a.c, b.c, out.c, SIZE);
    return out;
}

Vec4f subVec4f(Vec4f a, Vec4f b)
{
    Vec4f out;
    subVecf(a.c, b.c, out.c, SIZE);
    return out;
}

Vec4f scaleVec4f(Vec4f *vec, float scale)
{
    Vec4f out;
    scaleVecf(vec->c, scale, out.c, SIZE);
    return out;
}

float dotVec4f(Vec4f a, Vec4f b)
{
    float out = dotVecf(a.c, b.c, SIZE);
    return out;
}

float normfVec4f(Vec4f vec)
{
    float out = normfVecf(vec.c, SIZE);
    return out;
}

double normdVec4f(Vec4f vec)
{
    double out = normdVecf(vec.c, SIZE);
    return out;
}

Vec4f unitfVec4f(Vec4f vec)
{
    Vec4f out;
    unitfVecf(vec.c, out.c, SIZE);
    return out;
}

Vec4d unitdVec4f(Vec4f vec)
{
    Vec4d out;
    unitdVecf(vec.c, out.c, SIZE);
    return out;
}

void printVec4f(Vec4f vec)
{
    printVecf(vec.c, SIZE);
}

void printlnVec4f(Vec4f vec)
{
    printlnVecf(vec.c, SIZE);
}
