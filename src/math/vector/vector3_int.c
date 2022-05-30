#include<stdio.h>
#include<math.h>
#include"vector_types.h"

void setVec3i(Vec3i *vec, int x, int y, int z)
{
    vec->x = x;
    vec->y = y;
    vec->z = z;
}

void Vec3iInit(Vec3i *vec)
{
    setVec3i(vec, 0, 0, 0);
}

Vec3i addVec3i(Vec3i a, Vec3i b)
{
    Vec3i out;

    out.x = a.x + b.x;
    out.y = a.y + b.y;
    out.z = a.z + b.z;

    return out;
}

Vec3i subVec3i(Vec3i a, Vec3i b)
{
    Vec3i out;

    out.x = a.x - b.x;
    out.y = a.y - b.y;
    out.z = a.z - b.z;

    return out;
}

Vec3i scaleVec3i(Vec3i *vec, int scalar)
{
    Vec3i out;

    vec->x *= scalar;
    vec->y *= scalar;
    vec->z *= scalar;
    out = *vec;

    return out;
}

int dotVec3i(Vec3i a, Vec3i b)
{
    int out = (a.x * b.x);

    out += (a.y * b.y);
    out += (a.z * b.z);

    return out;
}

float normfVec3i(Vec3i vec)
{
    float out = (vec.x * vec.x);

    out += (vec.y * vec.y);
    out += (vec.z * vec.z);
    out = sqrtf(out);

    return out;
}

double normdVec3i(Vec3i vec)
{
    double out = (vec.x * vec.x);

    out += (vec.y * vec.y);
    out += (vec.z * vec.z);
    out = sqrt(out);

    return out;
}

Vec3f unitfVec3i(Vec3i vec)
{
    Vec3f out;
    float norm = normfVec3i(vec);

    out.x = vec.x / norm;
    out.y = vec.y / norm;
    out.z = vec.z / norm;

    return out;
}

Vec3d unitdVec3i(Vec3i vec)
{
    Vec3d out;
    double norm = normdVec3i(vec);

    out.x = vec.x / norm;
    out.y = vec.y / norm;
    out.z = vec.z / norm;

    return out;
}

void printVec3i(Vec3i vec)
{
    printf("[%d, %d, %d]", vec.x, vec.y, vec.z);
}

void printlnVec3i(Vec3i vec)
{
    printVec3i(vec);
    printf("\n");
}
