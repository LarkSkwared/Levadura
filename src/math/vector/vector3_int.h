#ifndef _MATH_VECTOR3_INT_H__
#define _MATH_VECTOR3_INT_H__

#include"vector_types.h"

Vec3i addVec3i(Vec3i a, Vec3i b);
Vec3i subVec3i(Vec3i a, Vec3i b);
Vec3i scaleVec3i(Vec3i *vec, int scale);
int dotVec3i(Vec3i a, Vec3i b);
float normfVec3i(Vec3i vec);
double normdVec3i(Vec3i vec);
Vec3f unitfVec3i(Vec3i vec);
Vec3d unitdVec3i(Vec3i vec);
void printVec3i(Vec3i vec);
void printlnVec3i(Vec3i vec);

#endif // _MATH_VECTOR3_INT_H__
