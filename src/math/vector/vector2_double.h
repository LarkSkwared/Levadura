#ifndef _MATH_VECTOR2_DOUBLE_H__
#define _MATH_VECTOR2_DOUBLE_H__

#include"vector_types.h"

Vec2d addVec2d(Vec2d a, Vec2d b);
Vec2d subVec2d(Vec2d a, Vec2d b);
Vec2d scaleVec2d(Vec2d *vec, double scale);
double dotVec2d(Vec2d a, Vec2d b);
float normfVec2d(Vec2d vec);
double normdVec2d(Vec2d vec);
Vec2f unitfVec2d(Vec2d vec);
Vec2d unitdVec2d(Vec2d vec);
void printVec2d(Vec2d vec);
void printlnVec2d(Vec2d vec);

#endif // _MATH_VECTOR2_DOUBLE_H__
