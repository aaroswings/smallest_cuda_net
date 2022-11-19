#include "../include/EngineCUDA.h"

/*
Ref: https://docs.nvidia.com/cuda/cublas/index.html#cublas-lt-t-gt-axpy
*/
void EngineCUDA::axpy(OP_PARAMS)
{

}

void EngineCUDA::tanh(OP_PARAMS)
{

}

void EngineCUDA::tanh_de(OP_PARAMS)
{
}

void EngineCUDA::logis(OP_PARAMS)
{
}

void EngineCUDA::logis_de(OP_PARAMS)
{
}

void EngineCUDA::relu(OP_PARAMS)
{
}

void EngineCUDA::relu_de(OP_PARAMS)
{
}

/*
Ref: https://docs.nvidia.com/cuda/cublas/index.html#cublas-lt-t-gt-gemm
*/
void EngineCUDA::matmul(MM_OP_PARAMS)
{
}

/*
Ref: https://docs.nvidia.com/cuda/cublas/index.html#cublas-lt-t-gt-axpy
*/
void EngineCUDA::sum(MM_OP_PARAMS)
{
}


void EngineCUDA::allocate(float *p_Data, size_t width, size_t height)
{
    // malloc
}

void EngineCUDA::free(float *p_Data)
{
    // free
}