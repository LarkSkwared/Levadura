#include"vector_double.h"
#include"vector_types.h"

#define SIZE 2

Vec2d addVec2d(Vec2d a, Vec2d b)
{
    Vec2d out;
    addVecd(a.c, b.c, out.c, SIZE);
    return out;
}

Vec2d subVec2d(Vec2d a, Vec2d b)
{
    Vec2d out;
    subVecd(a.c, b.c, out.c, SIZE);
    return out;
}

Vec2d scaleVec2d(Vec2d *vec, double scale)
{
    Vec2d out;
    scaleVecd(vec->c, scale, out.c, SIZE);
    return out;
}

double dotVec2d(Vec2d a, Vec2d b)
{
    double out = dotVecd(a.c, b.c, SIZE);
    return out;
}

float normfVec2d(Vec2d vec)
{
    float out = normfVecd(vec.c, SIZE);
    return out;
}

double normdVec2d(Vec2d vec)
{
    double out = normdVecd(vec.c, SIZE);
    return out;
}

Vec2f unitfVec2d(Vec2d vec)
{
    Vec2f out;
    unitfVecd(vec.c, out.c, SIZE);
    return out;
}

Vec2d unitdVec2d(Vec2d vec)
{
    Vec2d out;
    unitdVecd(vec.c, out.c, SIZE);
    return out;
}

void printVec2d(Vec2d vec)
{
    printVecd(vec.c, SIZE);
}
