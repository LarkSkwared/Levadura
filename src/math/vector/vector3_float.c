#include"vector_float.h"
#include"vector_types.h"

#define SIZE 3

Vec3f addVec3f(Vec3f a, Vec3f b)
{
    Vec3f out;
    addVecf(a.c, b.c, out.c, SIZE);
    return out;
}

Vec3f subVec3f(Vec3f a, Vec3f b)
{
    Vec3f out;
    subVecf(a.c, b.c, out.c, SIZE);
    return out;
}

Vec3f scaleVec3f(Vec3f *vec, float scale)
{
    Vec3f out;
    scaleVecf(vec->c, scale, out.c, SIZE);
    return out;
}

float dotVec3f(Vec3f a, Vec3f b)
{
    float out = dotVecf(a.c, b.c, SIZE);
    return out;
}

float normfVec3f(Vec3f vec)
{
    float out = normfVecf(vec.c, SIZE);
    return out;
}

double normdVec3f(Vec3f vec)
{
    double out = normdVecf(vec.c, SIZE);
    return out;
}

Vec3f unitfVec3f(Vec3f vec)
{
    Vec3f out;
    unitfVecf(vec.c, out.c, SIZE);
    return out;
}

Vec3d unitdVec3f(Vec3f vec)
{
    Vec3d out;
    unitdVecf(vec.c, out.c, SIZE);
    return out;
}

void printVec3f(Vec3f vec)
{
    printVecf(vec.c, SIZE);
}

void printlnVec3f(Vec3f vec)
{
    printlnVecf(vec.c, SIZE);
}
