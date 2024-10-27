#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#elif defined(LV_BUILD_TEST)
#include "../lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_TOP_LORA_IMAGE
#define LV_ATTRIBUTE_IMG_TOP_LORA_IMAGE
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_TOP_LORA_IMAGE
uint8_t img_top_lora_image_map[] = {

    0x00,0x00,0x00,0x00,0xdb,0xde,0xba,0xd6,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xdb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xba,0xd6,0xdb,0xde,0x00,0x00,0x00,0x00,
    0x00,0x00,0xdb,0xde,0x79,0xce,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x3c,0xe7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x79,0xce,0xdb,0xde,0x00,0x00,
    0x51,0x8c,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x92,0x94,
    0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xba,0xd6,0x00,0x00,0x00,0x00,0xba,0xd6,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,
    0xdb,0xde,0xff,0xff,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xdb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x9a,0xd6,0x00,0x00,0x00,0x00,0x79,0xce,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xff,0xff,0xdb,0xde,
    0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xba,0xd6,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xba,0xd6,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,
    0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xdb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xba,0xd6,0xfb,0xde,0xfb,0xde,0xba,0xd6,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xdb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,
    0xdb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xdb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xdb,0xde,
    0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x3c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x3c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,
    0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,
    0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,
    0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x3c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x3c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,
    0xdb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xdb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xdb,0xde,
    0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xdb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xdb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,
    0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xff,0xff,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xff,0xff,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,
    0xdb,0xde,0xff,0xff,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xdb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xff,0xff,0xdb,0xde,
    0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,
    0x71,0x8c,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x00,0x00,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x00,0x00,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x92,0x94,
    0x00,0x00,0xdb,0xde,0x79,0xce,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x5d,0xef,0x00,0x00,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x00,0x00,0x5d,0xef,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x79,0xce,0xdb,0xde,0x00,0x00,
    0x00,0x00,0x00,0x00,0xdb,0xde,0xba,0xd6,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xdb,0xde,0x00,0x00,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x00,0x00,0xdb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xba,0xd6,0xdb,0xde,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xde,0x3c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xdb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x17,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x12,0x17,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x33,0xcb,0xab,0x0a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0a,0xab,0xcc,0x33,0x00,0x00,0x00,0x00,0x00,0x19,0xc2,0xff,0xa4,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xa3,0xff,0xc2,0x19,0x00,0x00,
    0x00,0x00,0x83,0xff,0xc6,0x1d,0x02,0x34,0x1b,0x00,0x00,0x00,0x00,0x00,0x00,0x1b,0x34,0x02,0x1d,0xc5,0xff,0x84,0x00,0x00,0x00,0x27,0xe2,0xf3,0x47,0x00,0x62,0xf0,0x9c,0x02,0x00,0x00,0x00,0x00,0x02,0x9c,0xf0,0x62,0x00,0x47,0xf3,0xe2,0x27,0x00,
    0x00,0x6e,0xff,0xad,0x03,0x2b,0xe1,0xfc,0x6d,0x00,0x02,0x17,0x17,0x02,0x00,0x6d,0xfc,0xe1,0x2b,0x03,0xad,0xff,0x6e,0x00,0x04,0xab,0xff,0x61,0x00,0x86,0xff,0xa6,0x06,0x13,0x8c,0xd8,0xd8,0x8c,0x14,0x06,0xa6,0xff,0x86,0x00,0x61,0xff,0xac,0x05,
    0x15,0xcf,0xf2,0x33,0x09,0xc5,0xfb,0x49,0x00,0x8c,0xff,0xf3,0xf3,0xff,0x8c,0x00,0x49,0xfb,0xc5,0x09,0x33,0xf2,0xcf,0x15,0x20,0xde,0xe5,0x20,0x19,0xde,0xe7,0x22,0x15,0xd8,0xf3,0x51,0x51,0xf3,0xd8,0x15,0x22,0xe7,0xde,0x19,0x20,0xe5,0xde,0x21,
    0x20,0xde,0xe5,0x20,0x19,0xde,0xe7,0x22,0x15,0xd8,0xf3,0x51,0x51,0xf3,0xd8,0x15,0x22,0xe7,0xde,0x19,0x20,0xe5,0xde,0x21,0x15,0xcf,0xf2,0x33,0x09,0xc5,0xfb,0x49,0x00,0x8c,0xff,0xf1,0xf1,0xff,0x8c,0x00,0x49,0xfb,0xc5,0x09,0x33,0xf2,0xcf,0x15,
    0x05,0xab,0xff,0x61,0x00,0x86,0xff,0xa6,0x06,0x13,0x92,0xfa,0xfa,0x92,0x13,0x06,0xa6,0xff,0x86,0x00,0x61,0xff,0xac,0x05,0x00,0x6e,0xff,0xad,0x03,0x2b,0xe1,0xfc,0x6d,0x00,0x1e,0xe3,0xe3,0x1f,0x00,0x6c,0xfc,0xe1,0x2b,0x03,0xad,0xff,0x6e,0x00,
    0x00,0x27,0xe2,0xf3,0x47,0x00,0x62,0xf0,0x9c,0x00,0x1e,0xe2,0xe2,0x1f,0x00,0x9c,0xf0,0x62,0x00,0x47,0xf3,0xe2,0x27,0x00,0x00,0x00,0x83,0xff,0xc6,0x1d,0x02,0x34,0x1c,0x00,0x1f,0xe2,0xe2,0x1f,0x00,0x1b,0x34,0x02,0x1d,0xc5,0xff,0x84,0x00,0x00,
    0x00,0x00,0x19,0xc2,0xff,0xa4,0x07,0x00,0x00,0x00,0x1f,0xe2,0xe2,0x1f,0x00,0x00,0x00,0x07,0xa3,0xff,0xc3,0x19,0x00,0x00,0x00,0x00,0x00,0x33,0xcc,0xab,0x0a,0x00,0x00,0x00,0x1f,0xe2,0xe2,0x1f,0x00,0x00,0x00,0x0a,0xab,0xcc,0x33,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x17,0x13,0x00,0x00,0x00,0x00,0x1f,0xe2,0xe2,0x1f,0x00,0x00,0x00,0x00,0x13,0x17,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0xe2,0xe2,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0xe4,0xe5,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0e,0xac,0xac,0x0e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0e,0x0e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

};

const lv_image_dsc_t img_top_lora_image = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_RGB565A8,
  .header.flags = 0,
  .header.w = 24,
  .header.h = 24,
  .header.stride = 48,
  .data_size = sizeof(img_top_lora_image_map),
  .data = img_top_lora_image_map,
};
