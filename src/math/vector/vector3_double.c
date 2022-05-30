#include<stdio.h>
#include<math.h>
#include"vector_types.h"

void setVec3d(Vec3d *vec, double x, double y, double z)
{
    vec->x = x;
    vec->y = y;
    vec->z = z;
}

void Vec3dInit(Vec3d *vec)
{
    setVec3d(vec, 0.0, 0.0, 0.0);
}

Vec3d addVec3d(Vec3d a, Vec3d b)
{
    Vec3d out;

    out.x = a.x + b.x;
    out.y = a.y + b.y;
    out.z = a.z + b.z;

    return out;
}

Vec3d subVec3d(Vec3d a, Vec3d b)
{
    Vec3d out;

    out.x = a.x - b.x;
    out.y = a.y - b.y;
    out.z = a.z - b.z;

    return out;
}

Vec3d scaleVec3d(Vec3d *vec, double scalar)
{
    Vec3d out;

    vec->x *= scalar;
    vec->y *= scalar;
    vec->z *= scalar;
    out = *vec;

    return out;
}

double dotVec3d(Vec3d a, Vec3d b)
{
    double out = a.x * b.x;

    out += a.y * b.y;
    out += a.z * b.z;

    return out;
}

float normfVec3d(Vec3d vec)
{
    float out = vec.x * vec.x;

    out += vec.y * vec.y;
    out += vec.z * vec.z;
    out = sqrtf(out);

    return out;
}

double normdVec3d(Vec3d vec)
{
    double out = vec.x * vec.x;

    out += vec.y * vec.y;
    out += vec.z * vec.z;
    out = sqrt(out);

    return out;
}

Vec3f unitfVec3d(Vec3d vec)
{
    Vec3f out;
    float norm = normfVec3d(vec);

    out.x = vec.x / norm;
    out.y = vec.y / norm;
    out.z = vec.z / norm;

    return out;
}

Vec3d unitdVec3d(Vec3d vec)
{
    Vec3d out;
    double norm = normdVec3d(vec);

    out.x = vec.x / norm;
    out.y = vec.y / norm;
    out.z = vec.z / norm;

    return out;
}

void printVec3d(Vec3d vec)
{
    printf("[%lf, %lf, %lf]", vec.x, vec.y, vec.z);
}

void printlnVec3d(Vec3d vec)
{
    printVec3d(vec);
    printf("\n");
}
