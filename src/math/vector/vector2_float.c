#include<stdio.h>
#include<math.h>
#include"vector_types.h"

void setVec2f(Vec2f *vec, float x, float y)
{
    vec->x = x;
    vec->y = y;
}

void Vec2fInit(Vec2f *vec)
{
    setVec2f(vec, 0.0f, 0.0f);
}

Vec2f addVec2f(Vec2f a, Vec2f b)
{
    Vec2f out;

    out.x = a.x + b.x;
    out.y = b.y + b.y;

    return out;
}

Vec2f subVec2f(Vec2f a, Vec2f b)
{
    Vec2f out;

    out.x = a.x - b.x;
    out.y = a.y - b.y;

    return out;
}

Vec2f scaleVec2f(Vec2f *vec, float scalar)
{
    Vec2f out;

    vec->x *= scalar;
    vec->y *= scalar;
    out = *vec;

    return out;
}

float dotVec2f(Vec2f a, Vec2f b)
{
    float out = a.x * b.x;
    out += a.y * b.y;
    return out;
}

float normfVec2f(Vec2f vec)
{
    float out = vec.x * vec.x;

    out += vec.y * vec.y;
    out = sqrtf(out);

    return out;
}

double normdVec2f(Vec2f vec)
{
    double out = vec.x * vec.x;

    out += vec.y * vec.y;
    out = sqrt(out);

    return out;
}

Vec2f unitfVec2f(Vec2f vec)
{
    Vec2f out;
    float norm = normfVec2f(vec);

    out.x = vec.x / norm;
    out.y = vec.y / norm;

    return out;
}

Vec2d unitdVec2f(Vec2f vec)
{
    Vec2d out;
    double norm = normdVec2f(vec);

    out.x = vec.x / norm;
    out.y = vec.y / norm;

    return out;
}

void printVec2f(Vec2f vec)
{
    printf("[%f, %f]", vec.x, vec.y);
}

void printlnVec2f(Vec2f vec)
{
    printVec2f(vec);
    printf("\n");
}
