#include <cstdint>
#include <vector>

class BaseMatrix
{
protected:
    BaseMatrix(size_t width, size_t height)
    : mWidth{width}
    , mHeight{height}
    {}
    
    size_t mWidth{};
    size_t mHeight{};
    float *pData{nullptr};
    bool mShallow{false};
    bool mTransposed{false};

public:
    virtual void multiply(BaseMatrix &rhs, BaseMatrix &out) = 0;
    size_t width() const { return mWidth; }
    size_t height() const { return mHeight; }
};