#include<stdio.h>
#include<math.h>
#include"vector_types.h"

void setVec4i(Vec4i *vec, int x, int y, int z, int w)
{
    vec->x = x;
    vec->y = y;
    vec->z = z;
    vec->w = w;
}

void Vec4iInit(Vec4i *vec)
{
    setVec4i(vec, 0, 0, 0, 0);
}

Vec4i addVec4i(Vec4i a, Vec4i b)
{
    Vec4i out;

    out.x = a.x + b.x;
    out.y = a.y + b.y;
    out.z = a.z + b.z;
    out.w = a.w + b.w;

    return out;
}

Vec4i subVec4i(Vec4i a, Vec4i b)
{
    Vec4i out;

    out.x = a.x - b.x;
    out.y = a.y - b.y;
    out.z = a.z - b.z;
    out.w = a.w - b.w;

    return out;
}

Vec4i scaleVec4i(Vec4i *vec, int scalar)
{
    Vec4i out;

    vec->x *= scalar;
    vec->y *= scalar;
    vec->z *= scalar;
    vec->w *= scalar;
    out = *vec;

    return out;
}

int dotVec4i(Vec4i a, Vec4i b)
{
    int out = a.x * b.x;

    out += a.y * b.y;
    out += a.z * b.z;
    out += a.w * b.w;

    return out;
}

float normfVec4i(Vec4i vec)
{
    float out = vec.x * vec.x;

    out += vec.y * vec.y;
    out += vec.z * vec.z;
    out += vec.w * vec.w;
    out = sqrtf(out);

    return out;
}

double normdVec4i(Vec4i vec)
{
    double out = vec.x * vec.x;

    out += vec.y * vec.y;
    out += vec.z * vec.z;
    out += vec.w * vec.w;
    out = sqrt(out);

    return out;
}

Vec4f unitfVec4i(Vec4i vec)
{
    Vec4f out;
    float norm = normfVec4i(vec);

    out.x = vec.x / norm;
    out.y = vec.y / norm;
    out.z = vec.z / norm;
    out.w = vec.w / norm;

    return out;
}

Vec4d unitdVec4i(Vec4i vec)
{
    Vec4d out;
    double norm = normdVec4i(vec);

    out.x = vec.x / norm;
    out.y = vec.y / norm;
    out.z = vec.z / norm;
    out.w = vec.w / norm;

    return out;
}

void printVec4i(Vec4i vec)
{
    printf("[%d, %d, %d, %d]", vec.x, vec.y, vec.z, vec.w);
}

void printlnVec4i(Vec4i vec)
{
    printVec4i(vec);
    printf("\n");
}
