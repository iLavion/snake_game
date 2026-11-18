#pragma once

#include <stdbool.h>

typedef enum {
  INPUT_NONE,
  INPUT_UP,
  INPUT_DOWN,
  INPUT_LEFT,
  INPUT_RIGHT,
  INPUT_QUIT
} Input;

bool input_init(void);
Input input_poll(void);
void input_shutdown(void);
