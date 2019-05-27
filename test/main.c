#define CTEST_MAIN
#include "geom.h"
#include <ctest.h>
int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}
CTEST(s_test, res)
{
    float r = 6;
    const float res = s(r);
    const float exp = 113.04;
    ASSERT_EQUAL(exp, res);
}
CTEST(p_test, res)
{
    float r = 4;
    const float res = p(r);
    const float exp = 25.13;
    ASSERT_EQUAL(exp, res);
}
CTEST(rasst_test, res)
{
    float x1 = 5, y1 = 7, x2 = 4, y2 = 5;
    const float res = rasst(x1, y1, x2, y2);
    const float exp = 2.236;
    ASSERT_EQUAL(exp, res);
}