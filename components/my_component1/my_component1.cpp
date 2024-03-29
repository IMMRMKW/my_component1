#include "my_component1.h"
#include "esphome/core/application.h"
#include "esphome/core/log.h"

namespace esphome {
namespace my_component1 {
    static const char* const TAG = "my_component1";
    void MyComponent::setup()
    {
        ESP_LOGCONFIG(TAG, "seriously?:");
        SPISSD1331::setup();
        pinMode(27, OUTPUT);
        digitalWrite(27, HIGH);
    }
    void MyComponent::printComma(int16_t x, int16_t y)
    {
        // gfx->setTextColor(WHITE);
        // gfx->setCursor(x, y);
        // gfx->setFont(&FreeSansBold10pt7b);
        // gfx->println(',');
        // printf(x, y, BaseFont * font, Color(255, 255, 255), "Left aligned");
        Display::rectangle(10, 10, 10, 10, Color(255, 255, 255));
    }
}
}
