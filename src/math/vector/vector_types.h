#ifndef _MATH_VECTOR_TYPES_H__
#define _MATH_VECTOR_TYPES_H__

// ========= Vector 2 =========

typedef struct
{
    int x;
    int y;
} Vec2i;

typedef struct
{
    float x;
    float y;
} Vec2f;

typedef struct
{
    double x;
    double y;
} Vec2d;

// ========= Vector 3 =========

typedef struct
{
    int x;
    int y;
    int z;
} Vec3i;

typedef struct
{
    float x;
    float y;
    float z;
} Vec3f;

typedef struct
{
    double x;
    double y;
    double z;
} Vec3d;

// ========= Vector 4 =========

typedef struct
{
    int x;
    int y;
    int z;
    int w;
} Vec4i;

typedef struct
{
    float x;
    float y;
    float z;
    float w;
} Vec4f;

typedef struct
{
    double x;
    double y;
    double z;
    double w;
} Vec4d;

#endif // _MATH_VECTOR_TYPES_H__
