#ifndef _MATH_VECTOR2_FLOAT_H__
#define _MATH_VECTOR2_FLOAT_H__

#include"vector_types.h"

Vec2f addVec2f(Vec2f a, Vec2f b);
Vec2f subVec2f(Vec2f a, Vec2f b);
Vec2f scaleVec2f(Vec2f *vec, float scale);
float dotVec2f(Vec2f a, Vec2f b);
float normfVec2f(Vec2f vec);
double normdVec2f(Vec2f vec);
Vec2f unitfVec2f(Vec2f vec);
Vec2d unitdVec2f(Vec2f vec);
void printVec2f(Vec2f vec);
void printlnVec2f(Vec2f vec);

#endif // _MATH_VECTOR2_FLOAT_H__
