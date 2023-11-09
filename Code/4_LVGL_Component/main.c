/**
 * @file main
 *
 */

/*********************
 *      INCLUDES
 *********************/
#define _DEFAULT_SOURCE /* needed for usleep() */
#include <stdlib.h>
#include <unistd.h>
#include "lvgl/lvgl.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static lv_display_t *hal_init(lv_coord_t w, lv_coord_t h);
/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *      VARIABLES
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
/**
 * @brief 自定义Switch GUI函数
 */
static void My_Demo_Switch_GUI(void)
{
  lv_obj_t *switch_1 = lv_switch_create(lv_scr_act());
  lv_obj_set_size(switch_1, 100, 50);                                            // 设置开关大小
  lv_obj_set_style_bg_color(switch_1, lv_color_hex(0xffe1d4), LV_STATE_DEFAULT); // 设置开关颜色
  lv_obj_add_state(switch_1, LV_STATE_CHECKED | LV_STATE_EDITED);                // 默认打开且可修改
}

/**
 * @brief 自定义Button GUI函数
 */
static void My_Demo_Button_GUI(void)
{
  lv_obj_t *button = lv_button_create(lv_scr_act());
  lv_obj_set_size(button, 100, 50);                                            // 设置按钮大小
  lv_obj_set_style_bg_color(button, lv_color_hex(0xffe1d4), LV_STATE_DEFAULT); // 设置按钮颜色
  lv_obj_add_flag(button, LV_OBJ_FLAG_CHECKABLE);                              // 开启状态切换
}

/**
 * @brief 自定义Label GUI函数
 */
static void My_Demo_Label_GUI(void)
{
  lv_obj_t *label = lv_label_create(lv_scr_act());
  lv_label_set_text(label, "Hello, World!");
  lv_obj_set_style_opa(label, 100, LV_STATE_DEFAULT);
  lv_obj_set_style_bg_color(label, lv_color_hex(0xffe1d3), LV_STATE_DEFAULT);
  lv_obj_set_style_text_font(label, &lv_font_montserrat_14, LV_STATE_DEFAULT);
  lv_obj_set_style_text_color(label, lv_color_hex(0xf7b37b), LV_STATE_DEFAULT);
}
/**********************
 *   GLOBAL FUNCTIONS
 **********************/

int main(int argc, char **argv)
{
  (void)argc; /*Unused*/
  (void)argv; /*Unused*/

  /*Initialize LVGL*/
  lv_init();
  hal_init(800, 480);
  // My_Demo_Label_GUI();
  // My_Demo_Button_GUI();
  My_Demo_Switch_GUI();

  while (1)
  {
    /* Periodically call the lv_task handler.
     * It could be done in a timer interrupt or an OS task too.*/
    lv_timer_handler();
    usleep(1 * 1000);
  }

  return 0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
/**
 * Initialize the Hardware Abstraction Layer (HAL) for the LVGL graphics
 * library
 */
static lv_display_t *hal_init(lv_coord_t w, lv_coord_t h)
{

  lv_group_set_default(lv_group_create());

  lv_display_t *disp = lv_sdl_window_create(w, h);
  lv_indev_t *mouse = lv_sdl_mouse_create();
  lv_indev_set_group(mouse, lv_group_get_default());
  lv_indev_set_disp(mouse, disp);
  lv_display_set_default(disp);

  LV_IMAGE_DECLARE(mouse_cursor_icon); /*Declare the image file.*/
  lv_obj_t *cursor_obj;
  cursor_obj = lv_image_create(lv_screen_active()); /*Create an image object for the cursor */
  lv_image_set_src(cursor_obj, &mouse_cursor_icon); /*Set the image source*/
  lv_indev_set_cursor(mouse, cursor_obj);           /*Connect the image  object to the driver*/

  lv_indev_t *mousewheel = lv_sdl_mousewheel_create();
  lv_indev_set_disp(mousewheel, disp);

  lv_indev_t *keyboard = lv_sdl_keyboard_create();
  lv_indev_set_disp(keyboard, disp);
  lv_indev_set_group(keyboard, lv_group_get_default());
  return disp;
}
