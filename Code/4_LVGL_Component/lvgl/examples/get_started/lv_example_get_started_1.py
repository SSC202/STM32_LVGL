# Change the active screen's background color
scr = lv.screen_active()
scr.set_style_bg_color(lv.color_hex(0x003a57), lv.PART.MAIN)

# Create a white label, set its text and align it to the center
label = lv.label(lv.screen_active())
label.set_text("Hello world")
label.set_style_text_color(lv.color_hex(0xffffff), lv.PART.MAIN)
label.align(lv.ALIGN.CENTER, 0, 0)
