#ifndef _MATH_VECTOR3_FLOAT_H__
#define _MATH_VECTOR3_FLOAT_H__

#include"vector_types.h"

Vec3f addVec3f(Vec3f a, Vec3f b);
Vec3f subVec3f(Vec3f a, Vec3f b);
Vec3f scaleVec3f(Vec3f *vec, float scale);
float dotVec3f(Vec3f a, Vec3f b);
float normfVec3f(Vec3f vec);
double normdVec3f(Vec3f vec);
Vec3f unitfVec3f(Vec3f vec);
Vec3d unitdVec3f(Vec3f vec);
void printVec3f(Vec3f vec);
void printlnVec3f(Vec3f vec);

#endif // _MATH_VECTOR3_FLOAT_H__
