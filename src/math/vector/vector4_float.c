#include<stdio.h>
#include<math.h>
#include"vector_types.h"

void setVec4f(Vec4f *vec, float x, float y, float z, float w)
{
    vec->x = x;
    vec->y = y;
    vec->z = z;
    vec->w = w;
}

void Vec4fInit(Vec4f *vec)
{
    setVec4f(vec, 0.0f, 0.0f, 0.0f, 0.0f);
}

Vec4f addVec4f(Vec4f a, Vec4f b)
{
    Vec4f out;

    out.x = a.x + b.x;
    out.y = a.y + b.y;
    out.z = a.z + b.z;
    out.w = a.w + b.w;

    return out;
}

Vec4f subVec4f(Vec4f a, Vec4f b)
{
    Vec4f out;

    out.x = a.x - b.x;
    out.y = a.y - b.y;
    out.z = a.z - b.z;
    out.w = a.w - b.w;

    return out;
}

Vec4f scaleVec4f(Vec4f *vec, float scalar)
{
    Vec4f out;

    vec->x *= scalar;
    vec->y *= scalar;
    vec->z *= scalar;
    vec->w *= scalar;
    out = *vec;

    return out;
}

float dotVec4f(Vec4f a, Vec4f b)
{
    float out = a.x * b.x;

    out += a.y * b.y;
    out += a.z * b.z;
    out += a.w * b.w;

    return out;
}

float normfVec4f(Vec4f vec)
{
    float out = vec.x * vec.x;

    out += vec.y * vec.y;
    out += vec.z * vec.z;
    out += vec.w * vec.w;
    out = sqrtf(out);

    return out;
}

double normdVec4f(Vec4f vec)
{
    double out = vec.x * vec.x;

    out += vec.y * vec.y;
    out += vec.z * vec.z;
    out += vec.w * vec.w;
    out = sqrt(out);

    return out;
}

Vec4f unitfVec4f(Vec4f vec)
{
    Vec4f out;
    float norm = normfVec4f(vec);

    out.x = vec.x / norm;
    out.y = vec.y / norm;
    out.z = vec.z / norm;
    out.w = vec.w / norm;

    return out;
}

Vec4d unitdVec4f(Vec4f vec)
{
    Vec4d out;
    double norm = normdVec4f(vec);

    out.x = vec.x / norm;
    out.y = vec.y / norm;
    out.z = vec.z / norm;
    out.w = vec.w / norm;

    return out;
}

void printVec4f(Vec4f vec)
{
    printf("[%f, %f, %f, %f]", vec.x, vec.y, vec.z, vec.w);
}

void printlnVec4f(Vec4f vec)
{
    printVec4f(vec);
    printf("\n");
}
