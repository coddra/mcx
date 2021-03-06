#ifndef MCX_ASSERT_H
#define MCX_ASSERT_H
#include <stdio.h>

#define assert(condition, message...)                       \
    if (!(condition)) {                                     \
        fprintf(stderr, message);                           \
        exit(1);                                            \
    }

#endif // MCX_ASSERT_H
