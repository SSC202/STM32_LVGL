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

/**
 * @brief 自定义CheckBox GUI函数
 */
static void My_Demo_CheckBox_GUI(void)
{
  lv_obj_t *checkbox = lv_checkbox_create(lv_scr_act());
  lv_checkbox_set_text(checkbox, "check it!");
  lv_obj_set_style_pad_column(checkbox, 20, LV_STATE_DEFAULT); // 设置文本和复选框的间距
}

/**
 * @brief 自定义Bar GUI函数
 */
static void My_Demo_Bar_GUI(void)
{
  lv_obj_t *bar = lv_bar_create(lv_scr_act());
  lv_obj_set_style_anim_time(bar, 500, LV_STATE_DEFAULT); // 设置动画时间
  lv_bar_set_range(bar, -100, 100);                       // 设置范围值
  lv_bar_set_value(bar, 50, LV_ANIM_ON);                  // 设置当前值
}

/**
 * @brief 自定义Spinner GUI函数
 */
static void My_Demo_Spinner_GUI(void)
{
  lv_obj_t *spinner = lv_spinner_create(lv_scr_act());
  lv_obj_set_style_arc_color(spinner, lv_color_hex(0x4a9f00), LV_PART_MAIN);      // 设置主体圆弧颜色
  lv_obj_set_style_arc_color(spinner, lv_color_hex(0x83bd55), LV_PART_INDICATOR); // 设置指示器圆弧颜色
  lv_obj_set_style_arc_width(spinner, 30, LV_PART_MAIN);                          // 设置主体圆弧宽度
  lv_obj_set_style_arc_width(spinner, 30, LV_PART_INDICATOR);                     // 设置指示器圆弧宽度
}

/**
 * @brief 自定义LED GUI函数
 */
static void My_Demo_Led_GUI(void)
{
  lv_obj_t *led = lv_led_create(lv_scr_act());
  lv_led_set_color(led, lv_color_hex(0xff0000)); // 设置LED颜色
  lv_led_set_brightness(led, 0);                 // 设置LED亮度
  lv_led_toggle(led);                            // 翻转LED
}

/**
 * @brief 自定义List GUI函数
 */
static void My_Demo_List_GUI(void)
{
  lv_obj_t *list = lv_list_create(lv_scr_act());
  lv_list_add_text(list, "Settings");          // 设置列表文本
  lv_list_add_btn(list, LV_SYMBOL_GPS, "GPS"); // 设置列表按键图标和文本
  lv_list_add_btn(list, LV_SYMBOL_WIFI, "WIFI");
}

/**
 * @brief 自定义Dropdown GUI函数
 */
static void My_Demo_Dropdown_GUI(void)
{
  lv_obj_t *dropdown = lv_dropdown_create(lv_scr_act());
  lv_dropdown_set_options(dropdown, "a\nb\nc\nd\n");
}

/**
 * @brief 自定义Roller GUI函数
 */
static void My_Demo_Roller_GUI(void)
{
  lv_obj_t *roller = lv_roller_create(lv_scr_act());
  lv_obj_set_style_text_line_space(roller, 30, LV_STATE_DEFAULT);     // 设置选项间隔
  lv_roller_set_options(roller, "a\nb\nc\nd", LV_ROLLER_MODE_NORMAL); // 设置选项内容和显示模式
  lv_roller_set_visible_row_count(roller, 2);                         // 设置可见行数
}

/**
 * @brief 自定义Slider GUI函数
 */
static void My_Demo_Slider_GUI(void)
{
  lv_obj_t *slider = lv_slider_create(lv_scr_act());
  lv_obj_set_size(slider, 20, 200);
  lv_slider_set_value(slider, 50, LV_ANIM_OFF);      // 设置当前值
  lv_slider_set_range(slider, -100, 100);            // 设置范围值
  lv_slider_set_mode(slider, LV_SLIDER_MODE_NORMAL); // 设置模式
  lv_slider_set_left_value(slider, 20, LV_ANIM_OFF); // 设置左值
}

/**
 * @brief 自定义Arc GUI函数
 */
static void My_Demo_Arc_GUI(void)
{
  lv_obj_t *arc = lv_arc_create(lv_scr_act());
  lv_obj_set_pos(arc, 100, 100);
  lv_arc_set_value(arc, 10);                // 设置当前值
  lv_arc_set_range(arc, 0, 200);            // 设置范围值
  lv_arc_set_angles(arc, 135, 45);          // 设置前景弧角度
  lv_arc_set_bg_angles(arc, 135, 45);       // 设置背景弧角度
  lv_arc_set_rotation(arc, 0);              // 旋转角度设置
  lv_arc_set_mode(arc, LV_ARC_MODE_NORMAL); // 设置模式
  lv_arc_set_change_rate(arc, 90);          // 速率设置
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
  // My_Demo_CheckBox_GUI();
  // My_Demo_Bar_GUI();
  // My_Demo_Spinner_GUI();
  // My_Demo_Led_GUI();
  // My_Demo_List_GUI();
  // My_Demo_Dropdown_GUI();
  // My_Demo_Roller_GUI();
  // My_Demo_Slider_GUI();
  My_Demo_Arc_GUI();

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
