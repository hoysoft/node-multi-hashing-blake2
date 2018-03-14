#ifndef BLAKE2B_H
#define BLAKE2B_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void blake2b_hash(const char* input, char* output);

#ifdef __cplusplus
}
#endif

#endif
