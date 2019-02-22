#include "rgb_matrix.h"

/*---------------------------------  Export  ---------------------------------*/

static void rgb_matrix_pure_white(uint16_t led_i, bool init) {
  rgb_matrix_set_color(led_i, 0xff, 0xff, 0xff);
}

/*---------------------------------  Export  ---------------------------------*/

static const rgb_matrix_custom_mode_f custom_modes[] = {
    rgb_matrix_pure_white,
};

// override null-defns in rgb_matrix.c
const rgb_matrix_custom_mode_f* rgb_matrix_custom_modes = custom_modes;
const uint8_t rgb_matrix_custom_modes_count = sizeof(custom_modes) / sizeof(custom_modes[0]);
