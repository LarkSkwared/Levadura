#include<stdio.h>
#include<math.h>
#include"vector_types.h"

void setVec4d(Vec4d *vec, double x, double y, double z, double w)
{
    vec->x = x;
    vec->y = y;
    vec->z = z;
    vec->w = w;
}

void Vec4dInit(Vec4d *vec)
{
    setVec4d(vec, 0.0, 0.0, 0.0, 0.0);
}

Vec4d addVec4d(Vec4d a, Vec4d b)
{
    Vec4d out;

    out.x = a.x + b.x;
    out.y = a.y + b.y;
    out.z = a.z + b.z;
    out.w = a.w + b.w;

    return out;
}

Vec4d subVec4d(Vec4d a, Vec4d b)
{
    Vec4d out;

    out.x = a.x - b.x;
    out.y = a.y - b.y;
    out.z = a.z - b.z;
    out.w = a.w - b.w;

    return out;
}

Vec4d scaleVec4d(Vec4d *vec, double scalar)
{
    Vec4d out;

    vec->x *= scalar;
    vec->y *= scalar;
    vec->z *= scalar;
    vec->w *= scalar;
    out = *vec;

    return out;
}

double dotVec4d(Vec4d a, Vec4d b)
{
    double out = a.x * b.x;

    out += a.y * b.y;
    out += a.z * b.z;
    out += a.w * b.w;

    return out;
}

float normfVec4d(Vec4d vec)
{
    float out = vec.x * vec.x;

    out += vec.y * vec.y;
    out += vec.z * vec.z;
    out += vec.w * vec.w;
    out = sqrtf(out);

    return out;
}

double normdVec4d(Vec4d vec)
{
    double out = vec.x * vec.x;

    out += vec.y * vec.y;
    out += vec.z * vec.z;
    out += vec.w * vec.w;
    out = sqrt(out);

    return out;
}

Vec4f unitfVec4d(Vec4d vec)
{
    Vec4f out;
    float norm = normfVec4d(vec);

    out.x = vec.x / norm;
    out.y = vec.y / norm;
    out.z = vec.z / norm;
    out.w = vec.w / norm;

    return out;
}

Vec4d unitdVec4d(Vec4d vec)
{
    Vec4d out;
    double norm = normdVec4d(vec);

    out.x = vec.x / norm;
    out.y = vec.y / norm;
    out.z = vec.z / norm;
    out.w = vec.w / norm;

    return out;
}

void printVec4d(Vec4d vec)
{
    printf("[%lf, %lf, %lf, %lf]", vec.x, vec.y, vec.z, vec.w);
}

void printlnVec4d(Vec4d vec)
{
    printVec4d(vec);
    printf("\n");
}
