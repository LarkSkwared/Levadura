#include<stdio.h>
#include<math.h>
#include"vector_types.h"

void setVec2i(Vec2i *vec, int x, int y)
{
    vec->x = x;
    vec->y = y;
}

void Vec2iInit(Vec2i *vec)
{
    setVec2i(vec, 0, 0);
}

Vec2i addVec2i(Vec2i a, Vec2i b)
{
    Vec2i out;

    out.x = a.x + b.x;
    out.y = a.y + b.y;

    return out;
}

Vec2i subVec2i(Vec2i a, Vec2i b)
{
    Vec2i out;

    out.x = a.x - b.x;
    out.y = a.y - b.y;

    return out;
}

Vec2i scaleVec2i(Vec2i *vec, int scalar)
{
    Vec2i out;

    vec->x *= scalar;
    vec->y *= scalar;
    out = *vec;

    return out;
}

int dotVec2i(Vec2i a, Vec2i b)
{
    int out = a.x * b.x;
    out += a.y * b.y;
    return out;
}

float normfVec2i(Vec2i vec)
{
    float out = vec.x * vec.x;

    out += vec.y * vec.y;
    out = sqrtf(out);

    return out;
}

double normdVec2i(Vec2i vec)
{
    double out = vec.x * vec.x;

    out += vec.y * vec.y;
    out = sqrt(out);

    return out;
}

Vec2f unitfVec2i(Vec2i vec)
{
    Vec2f out;
    float norm = normfVec2i(vec);

    out.x = vec.x / norm;
    out.y = vec.y / norm;

    return out;
}

Vec2d unitdVec2i(Vec2i vec)
{
    Vec2d out;
    double norm = normdVec2i(vec);

    out.x = vec.x / norm;
    out.y = vec.y / norm;

    return out;
}

void printVec2i(Vec2i vec)
{
    printf("[%d, %d]", vec.x, vec.y);
}

void printlnVec2i(Vec2i vec)
{
    printVec2i(vec);
    printf("\n");
}
