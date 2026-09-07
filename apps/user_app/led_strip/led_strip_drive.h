
#ifndef led_strip_drive_h
#define led_strip_drive_h

#include "board_ac632n_demo_cfg.h"
#include "asm/ledc.h"
#include "asm/gpio.h"

// RGBW 通道，PWM的频率 
#define PWM_FEQ ((u16) 1000)
// #define PWM_FEQ ((u16) 2000)
// #define PWM_FEQ ((u16) 3000)
// #define PWM_FEQ ((u16) 4000)





void led_state_init(void);
void led_gpio_init(void);
void led_pwm_init(void);

void fc_rgbw_driver(u8 r, u8 g, u8 b, u8 w);


#endif







