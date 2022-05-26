#include"vector_int.h"
#include"vector_types.h"

#define SIZE 4

Vec4i addVec4i(Vec4i a, Vec4i b)
{
    Vec4i out;
    addVeci(a.c, b.c, out.c, SIZE);
    return out;
}

Vec4i subVec4i(Vec4i a, Vec4i b)
{
    Vec4i out;
    subVeci(a.c, b.c, out.c, SIZE);
    return out;
}

Vec4i scaleVec4i(Vec4i *vec, int scale)
{
    Vec4i out;
    scaleVeci(vec->c, scale, out.c, SIZE);
    return out;
}

int dotVec4i(Vec4i a, Vec4i b)
{
    int out = dotVeci(a.c, b.c, SIZE);
    return out;
}

float normfVec4i(Vec4i vec)
{
    float out = normfVeci(vec.c, SIZE);
    return out;
}

double normdVec4i(Vec4i vec)
{
    double out = normdVeci(vec.c, SIZE);
    return out;
}

Vec4f unitfVec4i(Vec4i vec)
{
    Vec4f out;
    unitfVeci(vec.c, out.c, SIZE);
    return out;
}

Vec4d unitdVec4i(Vec4i vec)
{
    Vec4d out;
    unitdVeci(vec.c, out.c, SIZE);
    return out;
}

void printVec4i(Vec4i vec)
{
    printVeci(vec.c, SIZE);
}

void printlnVec4i(Vec4i vec)
{
    printlnVeci(vec.c, SIZE);
}
