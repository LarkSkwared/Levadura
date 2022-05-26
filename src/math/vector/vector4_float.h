#ifndef _MATH_VECTOR4_FLOAT_H__
#define _MATH_VECTOR4_FLOAT_H__

#include"vector_types.h"

Vec4f addVec4f(Vec4f a, Vec4f b);
Vec4f subVec4f(Vec4f a, Vec4f b);
Vec4f scaleVec4f(Vec4f *vec, float scale);
float dotVec4f(Vec4f a, Vec4f b);
float normfVec4f(Vec4f vec);
double normdVec4f(Vec4f vec);
Vec4f unitfVec4f(Vec4f vec);
Vec4d unitdVec4f(Vec4f vec);
void printVec4f(Vec4f vec);
void printlnVec4f(Vec4f vec);

#endif // _MATH_VECTOR4_FLOAT_H__
