/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "k_type.h"

#ifdef RGB_MATRIX_ENABLE
const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {
    { 0, B_1,  A_1,  C_1  },
    { 0, B_2,  A_2,  C_2  },
    { 0, B_3,  A_3,  C_3  },
    { 0, B_4,  A_4,  C_4  },
    { 0, B_5,  A_5,  C_5  },
    { 0, B_6,  A_6,  C_6  },
    { 0, B_7,  A_7,  C_7  },
    { 0, B_8,  A_8,  C_8  },
    { 0, B_9,  A_9,  C_9  },
    { 0, B_10, A_10, C_10 },
    { 0, B_11, A_11, C_11 },
    { 0, B_12, A_12, C_12 },
    { 0, B_13, A_13, C_13 },
    { 0, B_14, A_14, C_14 },
    { 0, B_15, A_15, C_15 },
    { 0, B_16, A_16, C_16 },

    { 0, E_1,  D_1,  F_1  },
    { 0, E_2,  D_2,  F_2  },
    { 0, E_3,  D_3,  F_3  },
    { 0, E_4,  D_4,  F_4  },
    { 0, E_5,  D_5,  F_5  },
    { 0, E_6,  D_6,  F_6  },
    { 0, E_7,  D_7,  F_7  },
    { 0, E_8,  D_8,  F_8  },
    { 0, E_9,  D_9,  F_9  },
    { 0, E_10, D_1,  F_10 },
    { 0, E_11, D_1,  F_11 },
    { 0, E_12, D_1,  F_12 },
    { 0, E_13, D_1,  F_13 },
    { 0, E_14, D_1,  F_14 },
    { 0, E_15, D_15, F_15 },
    { 0, E_16, D_16, F_16 },

    { 0, H_1,  G_1,  I_1  },
    { 0, H_2,  G_2,  I_2  },
    { 0, H_3,  G_3,  I_3  },
    { 0, H_4,  G_4,  I_4  },
    { 0, H_5,  G_5,  I_5  },
    { 0, H_6,  G_6,  I_6  },
    { 0, H_7,  G_7,  I_7  },
    { 0, H_8,  G_8,  I_8  },
    { 0, H_9,  G_9,  I_9  },
    { 0, H_10, G_1,  I_10 },
    { 0, H_11, G_1,  I_11 },
    { 0, H_12, G_1,  I_12 },
    { 0, H_13, G_1,  I_13 },
    { 0, H_14, G_1,  I_14 },
    { 0, H_15, G_15, I_15 },
    { 0, H_16, G_16, I_16 },

    { 0, K_1,  J_1,  L_1  },
    { 0, K_2,  J_2,  L_2  },
    { 0, K_3,  J_3,  L_3  },
    { 0, K_4,  J_4,  L_4  },
    { 0, K_5,  J_5,  L_5  },
    { 0, K_6,  J_6,  L_6  },
    { 0, K_7,  J_7,  L_7  },
    { 0, K_8,  J_8,  L_8  },
    { 0, K_9,  J_9,  L_9  },
    { 0, K_10, J_1,  L_10 },
    { 0, K_11, J_1,  L_11 },
    { 0, K_12, J_1,  L_12 },
    { 0, K_13, J_1,  L_13 },
    { 0, K_14, J_1,  L_14 },
    { 0, K_15, J_15, L_15 },
    { 0, K_16, J_16, L_16 },

    // Driver 2 is on I2C2 - currently not usable with i2c_master
    { 1, B_1,  A_1,  C_1  },
    { 1, B_2,  A_2,  C_2  },
    { 1, B_3,  A_3,  C_3  },
    { 1, B_4,  A_4,  C_4  },
    { 1, B_5,  A_5,  C_5  },
    { 1, B_6,  A_6,  C_6  },
    { 1, B_7,  A_7,  C_7  },
    { 1, B_8,  A_8,  C_8  },
    { 1, B_9,  A_9,  C_9  },
    { 1, B_10, A_10, C_10 },
    { 1, B_11, A_11, C_11 },
    { 1, B_12, A_12, C_12 },
    { 1, B_13, A_13, C_13 },
    { 1, B_14, A_14, C_14 },
    { 1, B_15, A_15, C_15 },
    { 1, B_16, A_16, C_16 },

    { 1, E_1,  D_1,  F_1  },
    { 1, E_2,  D_2,  F_2  },
    { 1, E_3,  D_3,  F_3  },
    { 1, E_4,  D_4,  F_4  },
    { 1, E_5,  D_5,  F_5  },
    { 1, E_6,  D_6,  F_6  },
    { 1, E_7,  D_7,  F_7  }, // lights stop after here
    { 1, E_8,  D_8,  F_8  },
    { 1, E_9,  D_9,  F_9  },
    { 1, E_10, D_1,  F_10 },
    { 1, E_11, D_1,  F_11 },
    { 1, E_12, D_1,  F_12 },
    { 1, E_13, D_1,  F_13 },
    { 1, E_14, D_1,  F_14 },
    { 1, E_15, D_15, F_15 },
    { 1, E_16, D_16, F_16 },

    { 1, H_1,  G_1,  I_1  },
    { 1, H_2,  G_2,  I_2  },
    { 1, H_3,  G_3,  I_3  },
    { 1, H_4,  G_4,  I_4  },
    { 1, H_5,  G_5,  I_5  },
    { 1, H_6,  G_6,  I_6  },
    { 1, H_7,  G_7,  I_7  },
    { 1, H_8,  G_8,  I_8  },
    { 1, H_9,  G_9,  I_9  },
    { 1, H_10, G_1,  I_10 },
    { 1, H_11, G_1,  I_11 },
    { 1, H_12, G_1,  I_12 },
    { 1, H_13, G_1,  I_13 },
    { 1, H_14, G_1,  I_14 },
    { 1, H_15, G_15, I_15 },
    { 1, H_16, G_16, I_16 },

    { 1, K_1,  J_1,  L_1  },
    { 1, K_2,  J_2,  L_2  },
    { 1, K_3,  J_3,  L_3  },
    { 1, K_4,  J_4,  L_4  },
    { 1, K_5,  J_5,  L_5  },
    { 1, K_6,  J_6,  L_6  },
    { 1, K_7,  J_7,  L_7  }
};

led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
        {   0,  10,     20,     29,     38,  47,     57, NO_LED, NO_LED, NO_LED },
        {   1,  11,     21, NO_LED,     39,  48,     58, NO_LED, NO_LED, NO_LED },
        {   2,  12,     22,     30,     40,  49,     59, NO_LED, NO_LED, NO_LED },
        {   3,  13,     23,     31,     41,  50,     60, NO_LED, NO_LED, NO_LED },
        {   4,  14,     24,     32,     42,  51,     61, NO_LED, NO_LED, NO_LED },
        {   5,  15,     25,     33,     43,  52, NO_LED, NO_LED, NO_LED, NO_LED },
        {   6,  16,     26,     34,     44,  53,     62, NO_LED, NO_LED, NO_LED },
        {   7,  17,     27,     35,     45,  54, NO_LED, NO_LED, NO_LED, NO_LED },
        {   8,  18,     28,     36,     46,  55,     63, NO_LED, NO_LED, NO_LED },
        {   9,  19, NO_LED,     37, NO_LED,  56, NO_LED, NO_LED, NO_LED, NO_LED }
    }, {
        // LED Index to Physical Position
        { 0,  0    },                   { 26.35,  0    }, { 39.53,  0    }, { 52.71,  0    }, { 65.88,  0    }, { 79.06,  0    }, { 92.24,  0    }, { 105.41,  0    }, { 118.59,  0    }, { 131.77,  0    }, { 144.94,  0    }, { 158.12,  0    }, { 171.29,  0    },           { 197.65,  0    }, { 210.82,  0    }, { 224,  0    },

        { 0, 21.33 }, { 13.18, 21.33 }, { 26.35, 21.33 }, { 39.53, 21.33 }, { 52.71, 21.33 }, { 65.88, 21.33 }, { 79.06, 21.33 }, { 92.24, 21.33 }, { 105.41, 21.33 }, { 118.59, 21.33 }, { 131.77, 21.33 }, { 144.94, 21.33 }, { 158.12, 21.33 }, { 171.29, 21.33 },           { 197.65, 21.33 }, { 210.82, 21.33 }, { 224, 21.33 },
        { 0, 32    }, { 13.18, 32    }, { 26.35, 32    }, { 39.53, 32    }, { 52.71, 32    }, { 65.88, 32    }, { 79.06, 32    }, { 92.24, 32    }, { 105.41, 32    }, { 118.59, 32    }, { 131.77, 32    }, { 144.94, 32    }, { 158.12, 32    }, { 171.29, 32    },           { 197.65, 32    }, { 210.82, 32    }, { 224, 32    },
        { 0, 42.67 }, { 13.18, 42.67 }, { 26.35, 42.67 }, { 39.53, 42.67 }, { 52.71, 42.67 }, { 65.88, 42.67 }, { 79.06, 42.67 }, { 92.24, 42.67 }, { 105.41, 42.67 }, { 118.59, 42.67 }, { 131.77, 42.67 }, { 144.94, 42.67 },                    { 171.29, 42.67 },
        { 0, 53.33 },                   { 26.35, 53.33 }, { 39.53, 53.33 }, { 52.71, 53.33 }, { 65.88, 53.33 }, { 79.06, 53.33 }, { 92.24, 53.33 }, { 105.41, 53.33 }, { 118.59, 53.33 }, { 131.77, 53.33 }, { 144.94, 53.33 },                    { 171.29, 53.33 },                              { 210.82, 53.33 },
        { 0, 64    }, { 13.18, 64    }, { 26.35, 64    },                                                       { 79.06, 64    },                                                         { 131.77, 64    }, { 144.94, 64    }, { 158.12, 64    }, { 171.29, 64    },           { 197.65, 64    }, { 210.82, 64    }, { 224, 64    }
    }, {
        // LED Index to Flag
        1,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4, 4, 4,

        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1,
        1,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1,       1,
        1, 1, 1,          4,          1, 1, 1, 1,    1, 1, 1
    }
};
#endif
