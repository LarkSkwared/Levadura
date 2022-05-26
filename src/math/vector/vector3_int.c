#include"vector_int.h"
#include"vector_types.h"

#define SIZE 3

Vec3i addVec3i(Vec3i a, Vec3i b)
{
    Vec3i out;
    addVeci(a.c, b.c, out.c, SIZE);
    return out;
}

Vec3i subVec3i(Vec3i a, Vec3i b)
{
    Vec3i out;
    subVeci(a.c, b.c, out.c, SIZE);
    return out;
}

Vec3i scaleVec3i(Vec3i *vec, int scale)
{
    Vec3i out;
    scaleVeci(vec->c, scale, out.c, SIZE);
    return out;
}

int dotVec3i(Vec3i a, Vec3i b)
{
    int out = dotVeci(a.c, b.c, SIZE);
    return out;
}

float normfVec3i(Vec3i vec)
{
    float out = normfVeci(vec.c, SIZE);
    return out;
}

double normdVec3i(Vec3i vec)
{
    double out = normdVeci(vec.c, SIZE);
    return out;
}

Vec3f unitfVec3i(Vec3i vec)
{
    Vec3f out;
    unitfVeci(vec.c, out.c, SIZE);
    return out;
}

Vec3d unitdVec3i(Vec3i vec)
{
    Vec3d out;
    unitdVeci(vec.c, out.c, SIZE);
    return out;
}

void printVec3i(Vec3i vec)
{
    printVeci(vec.c, SIZE);
}

void printlnVec3i(Vec3i vec)
{
    printlnVeci(vec.c, SIZE);
}
