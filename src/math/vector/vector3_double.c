#include"vector_double.h"
#include"vector_types.h"

#define SIZE 3

Vec3d addVec3d(Vec3d a, Vec3d b)
{
    Vec3d out;
    addVecd(a.c, b.c, out.c, SIZE);
    return out;
}

Vec3d subVec3d(Vec3d a, Vec3d b)
{
    Vec3d out;
    subVecd(a.c, b.c, out.c, SIZE);
    return out;
}

Vec3d scaleVec3d(Vec3d *vec, double scale)
{
    Vec3d out;
    scaleVecd(vec->c, scale, out.c, SIZE);
    return out;
}

double dotVec3d(Vec3d a, Vec3d b)
{
    double out = dotVecd(a.c, b.c, SIZE);
    return out;
}

float normfVec3d(Vec3d vec)
{
    float out = normfVecd(vec.c, SIZE);
    return out;
}

double normdVec3d(Vec3d vec)
{
    double out = normdVecd(vec.c, SIZE);
    return out;
}

Vec3f unitfVec3d(Vec3d vec)
{
    Vec3f out;
    unitfVecd(vec.c, out.c, SIZE);
    return out;
}

Vec3d unitdVec3d(Vec3d vec)
{
    Vec3d out;
    unitdVecd(vec.c, out.c, SIZE);
    return out;
}

void printVec3d(Vec3d vec)
{
    printVecd(vec.c, SIZE);
}

void printlnVec3d(Vec3d vec)
{
    printlnVecd(vec.c, SIZE);
}
