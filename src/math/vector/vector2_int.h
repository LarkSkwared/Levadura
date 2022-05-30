#ifndef _MATH_VECTOR2_INT_H__
#define _MATH_VECTOR2_INT_H__

#include"vector_types.h"

void setVec2i(Vec2i *vec, int x, int y);
void Vec2iInit(Vec2i *vec);
Vec2i addVec2i(Vec2i a, Vec2i b);
Vec2i subVec2i(Vec2i a, Vec2i b);
Vec2i scaleVec2i(Vec2i *vec, int scalar);
int dotVec2i(Vec2i a, Vec2i b);
float normfVec2i(Vec2i vec);
double normdVec2i(Vec2i vec);
Vec2f unitfVec2i(Vec2i vec);
Vec2d unitdVec2i(Vec2i vec);
void printVec2i(Vec2i vec);
void printlnVec2i(Vec2i vec);

#endif // _MATH_VECTOR2_INT_H__
