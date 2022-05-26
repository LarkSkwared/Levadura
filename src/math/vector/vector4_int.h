#ifndef _MATH_VECTOR4_INT_H__
#define _MATH_VECTOR4_INT_H__

#include"vector_types.h"

Vec4i addVec4i(Vec4i a, Vec4i b);
Vec4i subVec4i(Vec4i a, Vec4i b);
Vec4i scaleVec4i(Vec4i *vec, int scale);
int dotVec4i(Vec4i a, Vec4i b);
float normfVec4i(Vec4i vec);
double normdVec4i(Vec4i vec);
Vec4f unitfVec4i(Vec4i vec);
Vec4d unitdVec4i(Vec4i vec);
void printVec4i(Vec4i vec);
void printlnVec4i(Vec4i vec);

#endif // _MATH_VECTOR4_INT_H__
