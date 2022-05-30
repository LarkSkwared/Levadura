#include<stdio.h>
#include<math.h>
#include"vector_types.h"

void setVec3f(Vec3f *vec, float x, float y, float z)
{
    vec->x = x;
    vec->y = y;
    vec->z = z;
}

void Vec3fInit(Vec3f *vec)
{
    setVec3f(vec, 0.0f, 0.0f, 0.0f);
}

Vec3f addVec3f(Vec3f a, Vec3f b)
{
    Vec3f out;

    out.x = a.x + b.x;
    out.y = a.y + b.y;
    out.z = a.z + b.z;

    return out;
}

Vec3f subVec3f(Vec3f a, Vec3f b)
{
    Vec3f out;

    out.x = a.x - b.x;
    out.y = a.y - b.y;
    out.z = a.z - b.z;

    return out;
}

Vec3f scaleVec3f(Vec3f *vec, float scalar)
{
    Vec3f out;

    vec->x *= scalar;
    vec->y *= scalar;
    vec->z *= scalar;
    out = *vec;

    return out;
}

float dotVec3f(Vec3f a, Vec3f b)
{
    float out = a.x * b.x;

    out += a.y * b.y;
    out += a.z * b.z;

    return out;
}

float normfVec3f(Vec3f vec)
{
    float out = vec.x * vec.x;

    out += vec.y * vec.y;
    out += vec.z * vec.z;
    out = sqrtf(out);

    return out;
}

double normdVec3f(Vec3f vec)
{
    double out = vec.x * vec.x;

    out += vec.y * vec.y;
    out += vec.z * vec.z;
    out = sqrt(out);

    return out;
}

Vec3f unitfVec3f(Vec3f vec)
{
    Vec3f out;
    float norm = normfVec3f(vec);

    out.x = vec.x / norm;
    out.y = vec.y / norm;
    out.z = vec.z / norm;

    return out;
}

Vec3d unitdVec3f(Vec3f vec)
{
    Vec3d out;
    double norm = normdVec3f(vec);

    out.x = vec.x / norm;
    out.y = vec.y / norm;
    out.z = vec.z / norm;

    return out;
}

void printVec3f(Vec3f vec)
{
    printf("[%f, %f, %f]", vec.x, vec.y, vec.z);
}

void printlnVec3f(Vec3f vec)
{
    printVec3f(vec);
    printf("\n");
}
