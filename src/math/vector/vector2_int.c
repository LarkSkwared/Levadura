#include"vector_int.h"
#include"vector_types.h"

#define SIZE 2

Vec2i addVec2i(Vec2i a, Vec2i b)
{
    Vec2i out;
    addVeci(a.c, b.c, out.c, SIZE);
    return out;
}

Vec2i subVec2i(Vec2i a, Vec2i b)
{
    Vec2i out;
    subVeci(a.c, b.c, out.c, SIZE);
    return out;
}

Vec2i scaleVec2i(Vec2i *vec, int scale)
{
    Vec2i out;
    scaleVeci(vec->c, scale, out.c, SIZE);
    return out;
}

int dotVec2i(Vec2i a, Vec2i b)
{
    int out = dotVeci(a.c, b.c, SIZE);
    return out;
}

float normfVec2i(Vec2i vec)
{
    float out = normfVeci(vec.c, SIZE);
    return out;
}

double normdVec2i(Vec2i vec)
{
    double out = normdVeci(vec.c, SIZE);
    return out;
}

Vec2f unitfVec2i(Vec2i vec)
{
    Vec2f out;
    unitfVeci(vec.c, out.c, SIZE);
    return out;
}

Vec2d unitdVec2i(Vec2i vec)
{
    Vec2d out;
    unitdVeci(vec.c, out.c, SIZE);
    return out;
}

void printVec2i(Vec2i vec)
{
    printVeci(vec.c, SIZE);
}
