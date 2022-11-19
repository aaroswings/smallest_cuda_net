#pragma once

#define OP_PARAMS                       \
    bool trans,                         \
    size_t m, size_t n,                 \
    float * src,                        \
    float * dest


#define MM_OP_PARAMS                    \
    bool transposedA,                   \
    bool transposedB,                   \
    const float alpha,                  \
    size_t m, size_t n, size_t k,       \
    const float beta,                   \
    float *p_lhs,                       \
    float *p_rhs,                       \
    float *p_dest

#define ENGINE_INTERFACE                                              \
public:                                                               \
    static void axpy(OP_PARAMS);                                      \
    static void tanh(OP_PARAMS);                                      \
    static void tanh_de(OP_PARAMS);                                   \
    static void logis(OP_PARAMS);                                     \
    static void logis_de(OP_PARAMS);                                  \
    static void relu(OP_PARAMS);                                      \
    static void relu_de(OP_PARAMS);                                   \
    static void matmul(MM_OP_PARAMS);                                 \
    static void sum(MM_OP_PARAMS);                                    \
    static void allocate(float *p_Data, size_t width, size_t height); \
    static void free(float *p_Data);