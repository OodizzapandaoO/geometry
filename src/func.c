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
