#include <math.h>
#include <stdio.h>
int main() {
  float x1, x2, y1, y2, r1, r2, p1, p2, s1, s2, ras1, ras2;
  printf("Радиусы окружностей: \n");
  scanf("%f %f", &r1, &r2);
  printf("Координаты x1 y1 x2 y2: \n");
  scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
  s1 = 3.14 * r1 * r1;
  s2 = 3.14 * r2 * r2;
  p1 = 2 * 3.14 * r1;
  p2 = 2 * 3.14 * r2;
  ras1 = r1 + r2;
  ras2 = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
  if (ras1 > ras2) {
    printf("s1=%f, s2=%f, p1=%f, p2=%f, пересекаются\n", s1, s2, p1, p2);
  } else {
    printf("s1=%f, s2=%f, p1=%f, p2=%f, не пересекаются\n", s1, s2, p1, p2);
  }

  return 0;
}

branch1
