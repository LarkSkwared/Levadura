#include<stdio.h>
#include<math.h>
#include"vector_types.h"

void setVec2d(Vec2d *vec, double x, double y)
{
    vec->x = x;
    vec->y = y;
}

void Vec2dInit(Vec2d *vec)
{
    setVec2d(vec, 0.0, 0.0);
}

Vec2d addVec2d(Vec2d a, Vec2d b)
{
    Vec2d out;

    out.x = a.x + b.x;
    out.y = a.y + b.y;

    return out;
}

Vec2d subVec2d(Vec2d a, Vec2d b)
{
    Vec2d out;

    out.x = a.x - b.x;
    out.y = a.y - b.y;

    return out;
}

Vec2d scaleVec2d(Vec2d *vec, double scalar)
{
    Vec2d out;

    vec->x *= scalar;
    vec->y *= scalar;
    out = *vec;

    return out;
}

double dotVec2d(Vec2d a, Vec2d b)
{
    double out = (a.x * b.x) + (a.y * b.y);
    return out;
}

float normfVec2d(Vec2d vec)
{
    float out = (vec.x * vec.x) + (vec.y * vec.y);
    out = sqrtf(out);
    return out;
}

double normdVec2d(Vec2d vec)
{
    double out = (vec.x * vec.x) + (vec.y * vec.y);
    out = sqrt(out);
    return out;
}

Vec2f unitfVec2d(Vec2d vec)
{
    Vec2f out;
    float norm = normfVec2d(vec);

    out.x = vec.x / norm;
    out.y = vec.y / norm;

    return out;
}

Vec2d unitdVec2d(Vec2d vec)
{
    Vec2d out;
    double norm = normdVec2d(vec);

    out.x = vec.x / norm;
    out.y = vec.y / norm;

    return out;
}

void printVec2d(Vec2d vec)
{
    printf("[%lf, %lf]", vec.x, vec.y);
}

void printlnVec2d(Vec2d vec)
{
    printVec2d(vec);
    printf("\n");
}
