#ifndef GLOBALS_H
#define GLOBALS_H

#include <GL/glut.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.1415926535f

extern bool isNight;
extern bool isAnimating;
extern float animSpeed;

extern float ferrisAngle;
extern float carouselAngle;
extern float cloudOffset;
extern float birdOffset;
extern float humanOffset;

float randomFloat(float min, float max);
void setColor(float r, float g, float b);
void drawCircle(float cx, float cy, float r, int segments);
void drawOval(float cx, float cy, float w, float h);
void drawRect(float x, float y, float w, float h);
void drawTriangle(float x1, float y1, float x2, float y2, float x3, float y3);

#endif
