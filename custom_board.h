
#ifndef __CUSTOM_BOARD__
#define __CUSTOM_BOARD__

#ifdef __cplusplus
extern "C" {
#endif

#include "nrf_gpio.h"

// LEDs definitions for PCA10056
#define LEDS_NUMBER    1

#define LED_1          NRF_GPIO_PIN_MAP(1,10)
#define LED_START      LED_1
#define LED_STOP       LED_1

#define LEDS_ACTIVE_STATE 0

#define LEDS_LIST { LED_1 }

#define LEDS_INV_MASK  LEDS_MASK

#define BSP_LED_0      42 // NRF_GPIO_PIN_MAP(1,10)

#define BUTTONS_NUMBER 1

#define BUTTON_1       26
#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

#define BUTTONS_ACTIVE_STATE 0

#define BUTTONS_LIST { BUTTON_1 }

#define BSP_BUTTON_0   BUTTON_1

#define RX_PIN_NUMBER  8
#define TX_PIN_NUMBER  6
#define HWFC           false

#ifdef __cplusplus
}
#endif

#endif
