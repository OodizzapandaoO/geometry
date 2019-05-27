#include "geom.h"
#include <math.h>
#include <stdio.h>
float s(float r) {
  float s = M_PI * r * r;
  return s;
}
float p(float r) {
  float p = 2 * M_PI * r;
  return p;
}
float rasst(float x1, float y1, float x2, float y2) {
  float ras = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
  return ras;
}
