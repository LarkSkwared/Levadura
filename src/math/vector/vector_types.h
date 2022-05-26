#ifndef _MATH_VECTOR_TYPES_H__
#define _MATH_VECTOR_TYPES_H__

#define X   c[0]
#define Y   c[1]
#define Z   c[2]
#define W   c[3]

// ========= Vector 2 =========

typedef struct
{
    int c[2];
} Vec2i;

typedef struct
{
    float c[2];
} Vec2f;

typedef struct
{
    double c[2];
} Vec2d;

// ========= Vector 3 =========

typedef struct
{
    int c[3];
} Vec3i;

typedef struct
{
    float c[3];
} Vec3f;

typedef struct
{
    double c[3];
} Vec3d;

// ========= Vector 4 =========

typedef struct
{
    int c[4];
} Vec4i;

typedef struct
{
    float c[4];
} Vec4f;

typedef struct
{
    double c[4];
} Vec4d;

#endif // _MATH_VECTOR_TYPES_H__
