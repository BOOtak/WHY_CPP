//
// Created by kirill on 28.03.19.
//

#ifndef WHYCPP_ROOT_COLOR_H
#define WHYCPP_ROOT_COLOR_H

#include <stdint.h>

struct RGBA_t_ {
  uint8_t red;
  uint8_t green;
  uint8_t blue;
  uint8_t alpha;
};

typedef union {
  uint32_t raw;
  struct RGBA_t_ rgba;
} RGBA_t;

#endif  // WHYCPP_ROOT_COLOR_H