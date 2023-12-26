#ifndef VISUALMENUS_HPP
#define VISUALMENUS_HPP

#include <Arduino.h>
#include <U8g2lib.h>

class visualMenu {
  private:
    U8G2_SH1106_128X32_VISIONOX_F_HW_I2C _screen;

  public:
    visualMenu(U8G2_SH1106_128X32_VISIONOX_F_HW_I2C screen);
    void printHome(void);
}

#endif // VISUALMENUS_HPP