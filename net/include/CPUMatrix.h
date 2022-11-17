#include "../include/BaseMatrix.h"

class CPUMatrix : public BaseMatrix
{

public:
    CPUMatrix(size_t width, size_t height)
    : BaseMatrix(width, height)
    {}
    void multiply(BaseMatrix &rhs, BaseMatrix &out);
};