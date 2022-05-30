#ifndef _MATH_VECTOR3_DOUBLE_H__
#define _MATH_VECTOR3_DOUBLE_H__

#include"vector_types.h"

void setVec3d(Vec3d *vec, double x, double y, double z);
void Vec3dInit(Vec3d *vec);
Vec3d addVec3d(Vec3d a, Vec3d b);
Vec3d subVec3d(Vec3d a, Vec3d b);
Vec3d scaleVec3d(Vec3d *vec, double scalar);
double dotVec3d(Vec3d a, Vec3d b);
float normfVec3d(Vec3d vec);
double normdVec3d(Vec3d vec);
Vec3f unitfVec3d(Vec3d vec);
Vec3d unitdVec3d(Vec3d vec);
void printVec3d(Vec3d vec);
void printlnVec3d(Vec3d vec);

#endif // _MATH_VECTOR3_DOUBLE_H__
