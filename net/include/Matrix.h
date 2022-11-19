#pragma once
#include <cstdint>
#include <vector>

template <typename Engine>
class Matrix
{
private:
    size_t mWidth{};
    size_t mHeight{};
    float *pData{nullptr};
    bool mShallow{false};
    bool mTransposed{false};

public:
    Matrix(size_t width, size_t height)
    : mWidth{width}
    , mHeight{height}
    {
        Engine::allocate(pData, mWidth, mHeight);
    }

    Matrix(const Matrix<Engine> &other)
    : mWidth{other.mWidth}
    , mHeight{other.mHeight}
    , pData{other.pData}
    , mShallow{true}
    , mTransposed{other.mTransposed}
    {

    }
    Matrix &operator=(const Matrix<Engine> &other)
    {
        if(&other == this)
            return *this;

        // todo

        return *this;
    }

    ~Matrix()
    {
        if(!mShallow)
            Engine::free(pData);
    }

    Matrix multiply(const Matrix<Engine> &other)
    {
        
    }

    size_t width() const { return mWidth; }
    size_t height() const { return mHeight; }
};