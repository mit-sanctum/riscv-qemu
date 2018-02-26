
#ifndef _RISCV_PUF_H
#define _RISCV_PUF_H

#define PUF_SELECT_MASK (0xFF)

typedef struct puf_t {
  uint8_t select;
  uint8_t disable;
  uint8_t bits[256];
} puf_t;

#endif // _RISCV_PUF_H
