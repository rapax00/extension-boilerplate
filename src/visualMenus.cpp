#include "visualMenus.hpp"

visualMenu::visualMenu(U8G2_SH1106_128X32_VISIONOX_F_HW_I2C screen) { _screen = screen; }

void visualMenu::printHome(void) {
    _screen.clearBuffer();
    _screen.setFont(u8g2_font_6x10_tf);
    _screen.drawStr(0, 10, "Home");
    _screen.sendBuffer();
}
