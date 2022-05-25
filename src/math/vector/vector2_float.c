#include"vector_float.h"
#include"vector_types.h"

#define SIZE 2

Vec2f addVec2f(Vec2f a, Vec2f b)
{
    Vec2f out;
    addVecf(a.c, b.c, out.c, SIZE);
    return out;
}

Vec2f subVec2f(Vec2f a, Vec2f b)
{
    Vec2f out;
    subVecf(a.c, b.c, out.c, SIZE);
    return out;
}

Vec2f scaleVec2f(Vec2f *vec, float scale)
{
    Vec2f out;
    scaleVecf(vec->c, scale, out.c, SIZE);
    return out;
}

float dotVec2f(Vec2f a, Vec2f b)
{
    float out = dotVecf(a.c, b.c, SIZE);
    return out;
}

float normfVec2f(Vec2f vec)
{
    float out = normfVecf(vec.c, SIZE);
    return out;
}

double normdVec2f(Vec2f vec)
{
    double out = normdVecf(vec.c, SIZE);
    return out;
}

Vec2f unitfVec2f(Vec2f vec)
{
    Vec2f out;
    unitfVecf(vec.c, out.c, SIZE);
    return out;
}

Vec2d unitdVec2f(Vec2f vec)
{
    Vec2d out;
    unitdVecf(vec.c, out.c, SIZE);
    return out;
}

void printVec2f(Vec2f vec)
{
    printVecf(vec.c, SIZE);
}
