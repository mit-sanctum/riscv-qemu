
#ifndef _RISCV_TRNG_H
#define _RISCV_TRNG_H

#include <stdlib.h>

uint64_t trng()
{
  return random() & 0xFF;
}

#endif // _RISCV_TRNG_H

