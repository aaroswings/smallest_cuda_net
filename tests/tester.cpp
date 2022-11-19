#include <limits>

#include "../tests/utest.h"
#include "../net/include/EngineCUDA.h"
#include "../net/include/EngineSerial.h"
#include "../net/include/Matrix.h"

constexpr static auto near_equal = [](float lhs, float rhs) {
    return std::abs(lhs - rhs) < 2.0f * std::numeric_limits<float>::epsilon();
};

UTEST(Matrix, TestSmoke)
{
    Matrix<EngineCUDA> c(0, 0);
    ASSERT_TRUE(true);
}


UTEST_MAIN();

