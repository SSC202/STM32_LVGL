#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif

#if LV_USE_DEMO_MULTILANG

#ifndef LV_ATTRIBUTE_MEM_ALIGN
    #define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMAGE_IMG_EMOJI_DECIDUOUS_TREE
    #define LV_ATTRIBUTE_IMAGE_IMG_EMOJI_DECIDUOUS_TREE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMAGE_IMG_EMOJI_DECIDUOUS_TREE uint8_t
img_emoji_deciduous_tree_map[] = {
    0xfa, 0xff, 0xfc, 0xff, 0xf8, 0xff, 0xfe, 0xff, 0xfb, 0xff, 0xfe, 0xff, 0xfa, 0xf2, 0xf3, 0xff, 0xff, 0xfd, 0xfe, 0xff, 0xff, 0xfe, 0xfc, 0xff, 0xe9, 0xf2, 0xe8, 0xff, 0xe6, 0xff, 0xf4, 0xff, 0xae, 0xef, 0xd6, 0xff, 0xdb, 0xfd, 0xec, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xfd, 0xfc, 0xff, 0xff, 0xf7, 0xfa, 0xff, 0xfb, 0xf8, 0xfa, 0xff, 0xf6, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0xff,
    0xff, 0xf7, 0xf7, 0xff, 0xfa, 0xff, 0xfd, 0xff, 0xf3, 0xff, 0xfc, 0xff, 0xef, 0xff, 0xfb, 0xff, 0xef, 0xff, 0xf9, 0xff, 0xd8, 0xf8, 0xe7, 0xff, 0x8b, 0xbf, 0xa8, 0xff, 0x64, 0xa9, 0x8e, 0xff, 0x62, 0xbc, 0x99, 0xff, 0x73, 0xb3, 0x96, 0xff, 0xad, 0xcb, 0xb8, 0xff, 0xf7, 0xff, 0xf5, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xfd, 0xff, 0xfe, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xf5, 0xf2, 0xf4, 0xff,
    0xff, 0xfc, 0xfe, 0xff, 0xfd, 0xff, 0xfc, 0xff, 0xcd, 0xf1, 0xe3, 0xff, 0x9c, 0xd7, 0xc2, 0xff, 0x79, 0xc1, 0xa3, 0xff, 0x5c, 0xb0, 0x8d, 0xff, 0x5d, 0xbe, 0x96, 0xff, 0x66, 0xd2, 0xa7, 0xff, 0x58, 0xcb, 0x9a, 0xff, 0x65, 0xc4, 0x98, 0xff, 0x87, 0xcd, 0xa9, 0xff, 0xb3, 0xe6, 0xcb, 0xff, 0xdb, 0xff, 0xef, 0xff, 0xef, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xfc, 0xff, 0xff,
    0xff, 0xfe, 0xfc, 0xff, 0xe3, 0xf3, 0xe8, 0xff, 0x87, 0xc1, 0xa9, 0xff, 0x61, 0xbb, 0x97, 0xff, 0x57, 0xbe, 0x91, 0xff, 0x51, 0xbc, 0x8b, 0xff, 0x67, 0xd6, 0xa2, 0xff, 0x64, 0xd8, 0xa3, 0xff, 0x5c, 0xd1, 0x9a, 0xff, 0x60, 0xcc, 0x98, 0xff, 0x61, 0xc4, 0x94, 0xff, 0x56, 0xb0, 0x85, 0xff, 0x64, 0xb4, 0x91, 0xff, 0x93, 0xcb, 0xb4, 0xff, 0xcc, 0xe1, 0xd8, 0xff, 0xff, 0xff, 0xfe, 0xff,
    0xf9, 0xfb, 0xf5, 0xff, 0xc0, 0xe2, 0xd1, 0xff, 0x6e, 0xba, 0x9a, 0xff, 0x62, 0xcb, 0x9e, 0xff, 0x68, 0xd7, 0xa3, 0xff, 0x65, 0xcd, 0x96, 0xff, 0x73, 0xd3, 0x9d, 0xff, 0x60, 0xbe, 0x88, 0xff, 0x74, 0xd9, 0xa5, 0xff, 0x62, 0xc7, 0x93, 0xff, 0x64, 0xcc, 0x95, 0xff, 0x5c, 0xca, 0x96, 0xff, 0x54, 0xc0, 0x92, 0xff, 0x59, 0xb0, 0x8e, 0xff, 0x8a, 0xbf, 0xab, 0xff, 0xec, 0xff, 0xfb, 0xff,
    0xef, 0xff, 0xf8, 0xff, 0xad, 0xe1, 0xc9, 0xff, 0x6a, 0xc2, 0x9a, 0xff, 0x59, 0xc7, 0x93, 0xff, 0x58, 0xc3, 0x8b, 0xff, 0x5f, 0xbf, 0x89, 0xff, 0x79, 0xce, 0x9c, 0xff, 0x7c, 0xcd, 0x9e, 0xff, 0x68, 0xc3, 0x96, 0xff, 0x5d, 0xbc, 0x8a, 0xff, 0x66, 0xcc, 0x95, 0xff, 0x54, 0xc7, 0x8e, 0xff, 0x4e, 0xc4, 0x8f, 0xff, 0x4e, 0xb4, 0x8a, 0xff, 0x63, 0xab, 0x8d, 0xff, 0xbb, 0xe9, 0xd6, 0xff,
    0xe2, 0xff, 0xf1, 0xff, 0x8a, 0xc6, 0xa8, 0xff, 0x58, 0xb3, 0x86, 0xff, 0x55, 0xc2, 0x8a, 0xff, 0x65, 0xd0, 0x97, 0xff, 0x74, 0xd8, 0xa4, 0xff, 0x6b, 0xcb, 0x9c, 0xff, 0x5f, 0xbd, 0x94, 0xff, 0x5f, 0xc4, 0x9e, 0xff, 0x61, 0xc6, 0x99, 0xff, 0x6a, 0xd1, 0x9e, 0xff, 0x48, 0xb7, 0x7f, 0xff, 0x4b, 0xbc, 0x83, 0xff, 0x5d, 0xc0, 0x90, 0xff, 0x6b, 0xb1, 0x8d, 0xff, 0xb6, 0xe5, 0xcb, 0xff,
    0xbf, 0xe5, 0xcf, 0xff, 0x7a, 0xb6, 0x97, 0xff, 0x6d, 0xc7, 0x99, 0xff, 0x63, 0xd0, 0x98, 0xff, 0x59, 0xc9, 0x8f, 0xff, 0x5e, 0xcc, 0x98, 0xff, 0x54, 0xc4, 0x95, 0xff, 0x5b, 0xce, 0xa6, 0xff, 0x56, 0xca, 0xa7, 0xff, 0x47, 0xb4, 0x8d, 0xff, 0x56, 0xc1, 0x90, 0xff, 0x4f, 0xba, 0x82, 0xff, 0x55, 0xbe, 0x85, 0xff, 0x54, 0xad, 0x7c, 0xff, 0x67, 0xa4, 0x80, 0xff, 0xd7, 0xfc, 0xe2, 0xff,
    0x79, 0xce, 0xb2, 0xff, 0x67, 0xbe, 0x9d, 0xff, 0x64, 0xc0, 0x97, 0xff, 0x6e, 0xce, 0x9f, 0xff, 0x6b, 0xd0, 0x9c, 0xff, 0x62, 0xcf, 0x97, 0xff, 0x5b, 0xcc, 0x93, 0xff, 0x51, 0xc4, 0x8b, 0xff, 0x46, 0xc0, 0x8a, 0xff, 0x56, 0xc4, 0x94, 0xff, 0x56, 0xbd, 0x90, 0xff, 0x45, 0xb3, 0x7f, 0xff, 0x35, 0xaa, 0x6d, 0xff, 0x50, 0xac, 0x77, 0xff, 0xa8, 0xd2, 0xb3, 0xff, 0xfe, 0xfc, 0xf2, 0xff,
    0x5d, 0xba, 0x8d, 0xff, 0x68, 0xcb, 0x9b, 0xff, 0x71, 0xd8, 0xa5, 0xff, 0x63, 0xcd, 0x98, 0xff, 0x53, 0xbf, 0x8a, 0xff, 0x5d, 0xc6, 0x93, 0xff, 0x61, 0xc7, 0x98, 0xff, 0x51, 0xb3, 0x87, 0xff, 0x55, 0xbc, 0x89, 0xff, 0x50, 0xac, 0x81, 0xff, 0x46, 0x9f, 0x77, 0xff, 0x44, 0xaa, 0x7a, 0xff, 0x44, 0xb7, 0x7e, 0xff, 0x3a, 0x9d, 0x6b, 0xff, 0x78, 0xaf, 0x94, 0xff, 0xf4, 0xff, 0xfc, 0xff,
    0x84, 0xd9, 0xa5, 0xff, 0x6c, 0xca, 0x93, 0xff, 0x61, 0xcc, 0x93, 0xff, 0x5f, 0xd3, 0x98, 0xff, 0x53, 0xc8, 0x8f, 0xff, 0x4e, 0xbb, 0x8a, 0xff, 0x59, 0xbb, 0x91, 0xff, 0x62, 0xbb, 0x94, 0xff, 0x5c, 0xba, 0x84, 0xff, 0x68, 0xbb, 0x8e, 0xff, 0x5c, 0xae, 0x84, 0xff, 0x40, 0xa4, 0x74, 0xff, 0x49, 0xbe, 0x87, 0xff, 0x3a, 0xa7, 0x77, 0xff, 0x57, 0x9b, 0x82, 0xff, 0xe0, 0xff, 0xfb, 0xff,
    0xcc, 0xf8, 0xd9, 0xff, 0x87, 0xc6, 0x9f, 0xff, 0x59, 0xae, 0x81, 0xff, 0x4e, 0xba, 0x85, 0xff, 0x44, 0xbc, 0x82, 0xff, 0x39, 0xb1, 0x77, 0xff, 0x42, 0xb1, 0x7b, 0xff, 0x50, 0xb7, 0x84, 0xff, 0x46, 0xb3, 0x75, 0xff, 0x54, 0xb4, 0x7e, 0xff, 0x57, 0xb2, 0x81, 0xff, 0x3b, 0xa3, 0x6c, 0xff, 0x3a, 0xb3, 0x76, 0xff, 0x36, 0xa5, 0x6f, 0xff, 0x4d, 0x95, 0x77, 0xff, 0xc4, 0xe7, 0xdd, 0xff,
    0xfe, 0xfb, 0xfd, 0xff, 0xdb, 0xeb, 0xe4, 0xff, 0xa7, 0xd6, 0xc0, 0xff, 0x6c, 0xbd, 0x96, 0xff, 0x42, 0xac, 0x77, 0xff, 0x3e, 0xb6, 0x76, 0xff, 0x44, 0xbf, 0x7b, 0xff, 0x3d, 0xb7, 0x71, 0xff, 0x41, 0xc0, 0x7b, 0xff, 0x32, 0xa3, 0x67, 0xff, 0x44, 0xa9, 0x72, 0xff, 0x48, 0xb2, 0x77, 0xff, 0x40, 0xb2, 0x72, 0xff, 0x41, 0xa5, 0x6b, 0xff, 0x7b, 0xb5, 0x92, 0xff, 0xf1, 0xff, 0xf8, 0xff,
    0xff, 0xf5, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xf4, 0xff, 0xff, 0xff, 0xc4, 0xef, 0xda, 0xff, 0x7c, 0xc3, 0x9b, 0xff, 0x52, 0xaf, 0x7c, 0xff, 0x4d, 0xb7, 0x7c, 0xff, 0x4a, 0xbc, 0x7d, 0xff, 0x33, 0xa2, 0x6e, 0xff, 0x4d, 0xa9, 0x7e, 0xff, 0x5b, 0xaa, 0x83, 0xff, 0x50, 0xa1, 0x74, 0xff, 0x41, 0x9c, 0x65, 0xff, 0x63, 0xad, 0x7d, 0xff, 0xb6, 0xd9, 0xbe, 0xff, 0xff, 0xfe, 0xf6, 0xff,
    0xff, 0xf6, 0xff, 0xff, 0xfd, 0xf4, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xf9, 0xff, 0xca, 0xe5, 0xd5, 0xff, 0x8d, 0xbd, 0xa5, 0xff, 0x61, 0xa2, 0x88, 0xff, 0x4a, 0x94, 0x78, 0xff, 0x54, 0x8b, 0x7a, 0xff, 0xc5, 0xed, 0xe2, 0xff, 0xd1, 0xee, 0xe5, 0xff, 0xae, 0xd2, 0xc1, 0xff, 0xa6, 0xda, 0xbc, 0xff, 0xc6, 0xf3, 0xd8, 0xff, 0xf8, 0xff, 0xf9, 0xff, 0xff, 0xf9, 0xff, 0xff,
    0xf6, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xa2, 0xbd, 0xc1, 0xff, 0x41, 0x66, 0x6a, 0xff, 0x53, 0x56, 0x64, 0xff, 0xf0, 0xe5, 0xf9, 0xff, 0xff, 0xf2, 0xff, 0xff, 0xf6, 0xf6, 0xfc, 0xff, 0xed, 0xff, 0xfc, 0xff, 0xea, 0xff, 0xf8, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xeb, 0xff, 0xff,
    0xfb, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0xf2, 0xf2, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xfd, 0xfd, 0xff, 0xff, 0xa1, 0xa3, 0xae, 0xff, 0x4f, 0x55, 0x62, 0xff, 0x56, 0x5c, 0x69, 0xff, 0xac, 0xae, 0xb9, 0xff, 0xfd, 0xfd, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xef, 0xed, 0xed, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff,
    0xf2, 0xf6, 0xf7, 0xff, 0xf7, 0xf9, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xe0, 0xe0, 0xe6, 0xff, 0x7d, 0x7f, 0x8a, 0xff, 0x3c, 0x42, 0x4f, 0xff, 0x3f, 0x45, 0x52, 0xff, 0x85, 0x87, 0x92, 0xff, 0xe6, 0xe6, 0xec, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0xfc, 0xfc, 0xff, 0xef, 0xf3, 0xf4, 0xff,
    0xfb, 0xff, 0xff, 0xff, 0xf9, 0xfb, 0xfb, 0xff, 0xfc, 0xfa, 0xfa, 0xff, 0xfd, 0xfb, 0xfb, 0xff, 0xfe, 0xfb, 0xfd, 0xff, 0xe0, 0xe0, 0xe6, 0xff, 0xb0, 0xb2, 0xbd, 0xff, 0xa8, 0xae, 0xbb, 0xff, 0xa7, 0xad, 0xba, 0xff, 0xb4, 0xb6, 0xc1, 0xff, 0xe4, 0xe4, 0xea, 0xff, 0xfc, 0xf9, 0xfb, 0xff, 0xfa, 0xf8, 0xf8, 0xff, 0xff, 0xfd, 0xfd, 0xff, 0xfb, 0xfd, 0xfd, 0xff, 0xfb, 0xff, 0xff, 0xff,
};

const lv_image_dsc_t img_emoji_deciduous_tree = {
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.always_zero = 0,
    .header.w = 16,
    .header.h = 19,
    .data = img_emoji_deciduous_tree_map,
};

#endif
