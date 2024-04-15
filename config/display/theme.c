/*
 * Copyright (c) 2022 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <lvgl.h>

#if defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_8)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_8
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_10)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_10
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_12)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_12
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_14)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_14
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_16)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_16
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_18)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_18
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_20)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_20
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_22)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_22
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_24)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_24
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_26)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_26
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_28)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_28
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_30)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_30
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_32)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_32
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_34)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_34
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_36)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_36
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_38)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_38
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_40)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_40
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_42)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_42
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_44)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_44
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_46)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_46
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_48)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_48
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_12_SUBPX)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_12_subpx
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_28_COMPRESSED)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_montserrat_28_compressed
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_DEJAVU_16_PERSIAN_HEBREW)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_dejavu_16_persian_hebrew
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_SIMSUN_16_CJK)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_simsun_16_cjk
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_UNSCII_8)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_unscii_8
#elif defined(CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_UNSCII_16)
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL &lv_font_unscii_16
#endif

void zmk_display_theme_init(lv_obj_t *obj) {
    lv_theme_t *theme = lv_theme_get_from_obj(obj);

    if (theme == NULL) {
        return;
    }

    theme->font_small = CONFIG_ZMK_LV_FONT_DEFAULT_SMALL;
}