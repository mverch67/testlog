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

#ifndef LV_ATTRIBUTE_IMG_NODE_LOCATION_PIN_IMAGE
#define LV_ATTRIBUTE_IMG_NODE_LOCATION_PIN_IMAGE
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_NODE_LOCATION_PIN_IMAGE
uint8_t img_node_location_pin_image_map[] = {

    0x00,0x00,0x9a,0xd6,0xff,0xff,0xfb,0xde,0xdb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xdb,0xde,0xfb,0xde,0xdf,0xff,0x9a,0xd6,0x00,0x00,
    0x10,0x84,0x3c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x3c,0xe7,0xcf,0x7b,
    0xdb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xdb,0xde,
    0xba,0xd6,0xff,0xff,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xff,0xff,0xba,0xd6,
    0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x7d,0xef,0x7d,0xef,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,
    0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x3c,0xe7,0x9a,0xd6,0x9a,0xd6,0x3c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,
    0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xbe,0xf7,0xff,0xff,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,
    0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,
    0xdb,0xde,0xdb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xdb,0xde,0xdb,0xde,
    0xff,0xff,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xbe,0xf7,
    0x9a,0xd6,0xdb,0xde,0xdb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xba,0xd6,0xdb,0xde,0x9a,0xd6,
    0x00,0x00,0xfb,0xde,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xdb,0xde,0xfb,0xde,0xfb,0xde,0x00,0x00,
    0x00,0x00,0xf3,0x9c,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x71,0x8c,0x00,0x00,
    0x00,0x00,0x00,0x00,0x38,0xc6,0x3c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x3c,0xe7,0x18,0xc6,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x9a,0xd6,0x38,0xc6,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xd7,0xbd,0x79,0xce,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xba,0xd6,0xba,0xd6,0xbe,0xf7,0xfb,0xde,0xfb,0xde,0x7d,0xef,0xba,0xd6,0xba,0xd6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x16,0x73,0xc7,0xeb,0xeb,0xc7,0x72,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2d,0xba,0xfc,0xff,0xff,0xff,0xff,0xfb,0xb9,0x2b,0x00,0x00,0x00,
    0x00,0x00,0x1e,0xc6,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc4,0x1c,0x00,0x00,0x00,0x00,0x88,0xff,0xff,0xff,0xde,0x97,0x98,0xdf,0xff,0xff,0xff,0x85,0x00,0x00,
    0x00,0x19,0xd7,0xff,0xff,0xd9,0x34,0x00,0x00,0x36,0xdb,0xff,0xff,0xd5,0x17,0x00,0x00,0x38,0xf2,0xff,0xff,0x87,0x00,0x00,0x00,0x00,0x8a,0xff,0xff,0xf1,0x35,0x00,
    0x00,0x41,0xf7,0xff,0xff,0x7f,0x00,0x00,0x00,0x00,0x82,0xff,0xff,0xf5,0x3e,0x00,0x00,0x2d,0xeb,0xff,0xff,0xca,0x1f,0x00,0x00,0x20,0xcc,0xff,0xff,0xea,0x2b,0x00,
    0x00,0x0c,0xbf,0xff,0xff,0xff,0xc5,0x70,0x70,0xc6,0xff,0xff,0xff,0xbc,0x0b,0x00,0x00,0x00,0x5a,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf7,0x57,0x00,0x00,
    0x00,0x00,0x06,0x90,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x8d,0x06,0x00,0x00,0x00,0x00,0x00,0x11,0xab,0xff,0xff,0xff,0xff,0xff,0xff,0xa9,0x10,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x1f,0xc4,0xff,0xff,0xff,0xff,0xc2,0x1d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x32,0xd9,0xff,0xff,0xd7,0x30,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x48,0xe9,0xe7,0x46,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x6a,0x68,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

};

const lv_image_dsc_t img_node_location_pin_image = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_RGB565A8,
  .header.flags = 0,
  .header.w = 16,
  .header.h = 16,
  .header.stride = 32,
  .data_size = sizeof(img_node_location_pin_image_map),
  .data = img_node_location_pin_image_map,
};

