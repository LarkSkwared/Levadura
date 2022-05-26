#ifndef _MATH_VECTOR4_DOUBLE_H__
#define _MATH_VECTOR4_DOUBLE_H__

#include"vector_types.h"

Vec4d addVec4d(Vec4d a, Vec4d b);
Vec4d subVec4d(Vec4d a, Vec4d b);
Vec4d scaleVec4d(Vec4d *vec, double scale);
double dotVec4d(Vec4d a, Vec4d b);
float normfVec4d(Vec4d vec);
double normdVec4d(Vec4d vec);
Vec4f unitfVec4d(Vec4d vec);
Vec4d unitdVec4d(Vec4d vec);
void printVec4d(Vec4d vec);
void printlnVec4d(Vec4d vec);

#endif // _MATH_VECTOR4_DOUBLE_H__
