#include "../tests/utest.h"

#include "../net/include/CPUMatrix.h"

constexpr static auto near_equal = [](float lhs, float rhs) {
    return std::abs(lhs - rhs) < 2.0f * std::numeric_limits<float>::epsilon();
};

UTEST(CPUMatrix, TestSmoke)
{
    CPUMatrix c(0, 0);
    ASSERT_TRUE(true);
}


UTEST_MAIN();

