#include "blake2b.h"
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>

#include "sha3/sph_blake2b.h"

void blake2s_hash(const char* input, char* output)
{
    blake2b_state ctx_blake2b;
    blake2b_init(&ctx_blake2b, BLAKE2B_OUTBYTES);
    blake2b_update(&ctx_blake2b, input, 80);
    blake2b_final(&ctx_blake2b, output, BLAKE2B_OUTBYTES);
}
