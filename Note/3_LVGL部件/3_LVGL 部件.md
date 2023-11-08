# STM32 LVGL 3_LVGL部件

## 1. 标签部件(`lv_label`)

标签部件主要用于文本显示，例如标题，提示信息等。

标签部件由主体`LV_PART_MAIN`，滚动条`LV_PART_SCROLLBAR`，选中文本`LV_PART_SELECTED`组成。

### 标签部件的创建

```c
/**
  *	@brief	标签创建函数
  */
lv_obj_t * lv_label_create(lv_obj_t * parent);
```

### 标签部件的文本设置

```c
/**
  *	@brief	标签文本设置函数
  * @note	存储文本的内存将会动态分配
  * @param	obj		标签对象
  * @param	text	文本
  */
void lv_label_set_text(lv_obj_t * obj, const char * text);

/**
  *	@brief	标签文本设置函数
  * @note	存储文本的内存将会存储在指定缓冲区中
  * @param	obj		标签对象
  * @param	text	文本
  */
void lv_label_set_text_static(lv_obj_t * obj, const char * text);

/**
  *	@brief	格式化显示标签文本函数
  */
void lv_label_set_text_fmt(lv_obj_t * obj, const char * fmt, ...);
```

### 标签部件的样式设置

```c
/**
  *	@brief	背景颜色设置函数，需要设置背景透明度
  * @param	obj			标签对象
  * @param	value		颜色值
  * @param	selector	选择器，一般为默认触发
  */
void lv_obj_set_style_bg_color(struct _lv_obj_t * obj, lv_color_t value, lv_style_selector_t selector);

/**
  *	@brief	背景透明度设置函数
  * @param	obj			标签对象
  * @param	value		透明度值
  * @param	selector	选择器，一般为默认触发
  */
void lv_obj_set_style_opa(struct _lv_obj_t * obj, lv_opa_t value, lv_style_selector_t selector);

/**
  *	@brief	字体大小设置函数
  * @param	obj			标签对象
  * @param	value		字体大小值
  * @param	selector	选择器，一般为默认触发
  */
void lv_obj_set_style_text_font(struct _lv_obj_t * obj, const lv_font_t * value, lv_style_selector_t selector);

/**
  *	@brief	文本颜色设置函数
  * @param	obj			标签对象
  * @param	value		颜色值
  * @param	selector	选择器，一般为默认触发
  */
void lv_obj_set_style_text_color(struct _lv_obj_t * obj, lv_color_t value, lv_style_selector_t selector)
```

> - 如果要对文字进行单独着色，使用以下代码：
>
> ```c
> lv_label_set_recolor( label, true ); 							   /* 开启重新着色功能 */
> lv_label_set_text( label, "hallo #ff0000 lvgl# " );					/* 单独设置颜色 */
> ```

### 标签部件的大小设置

默认情况下，如果没有限定标签部件大小，标签部件的大小自动扩展为文本大小。

> 如果文本超过了标签部件的大小，使用长文本模式：
>
> ```c
> enum {
>     LV_LABEL_LONG_WRAP,             		/* 默认模式, 如果部件大小已固定，超出的文本将被剪切 */
>     LV_LABEL_LONG_DOT,              		/* 将 label 右下角的最后 3 个字符替换为点... */
>     LV_LABEL_LONG_SCROLL,           		/* 来回滚动 */
>     LV_LABEL_LONG_SCROLL_CIRCULAR,  		/* 循环滚动 */
>     LV_LABEL_LONG_CLIP,             		/* 直接剪切掉部件外面的文本部分 */
> };
> 
> /**
>   *	@brief	长文本模式设置函数
>   * @param	obj			标签对象
>   * @param	long_mode	 模式选项
>   */
> void lv_label_set_long_mode(lv_obj_t * obj, lv_label_long_mode_t long_mode);
> ```
>
> 

