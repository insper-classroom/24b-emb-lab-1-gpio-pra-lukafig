/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

const int LED_PIN_R = 18;
const int BTN_PIN = 13;

const int MT_1 = 9;
const int MT_2 = 8;
const int MT_3 = 7;
const int MT_4 = 6;


int main() {
    stdio_init_all();

    gpio_init(LED_PIN_R);
    gpio_set_dir(LED_PIN_R, GPIO_OUT);

    gpio_init(MT_1);
    gpio_set_dir(MT_1, GPIO_OUT);
    gpio_init(MT_2);
    gpio_set_dir(MT_2, GPIO_OUT);
    gpio_init(MT_3);
    gpio_set_dir(MT_3, GPIO_OUT);
    gpio_init(MT_4);
    gpio_set_dir(MT_4, GPIO_OUT);

    gpio_init(BTN_PIN);
    gpio_set_dir(BTN_PIN, GPIO_IN);
    gpio_pull_up(BTN_PIN);


    while (true) {
        if (!gpio_get(BTN_PIN)) {
            gpio_put(LED_PIN_R, 1);




            sleep_ms(500);
            gpio_put(LED_PIN_R, 0);
            sleep_ms(500);
            while (!gpio_get(BTN_PIN)) {
            };
        }

                    gpio_put(MT_1, 1);
            sleep_ms(50);
            gpio_put(MT_1, 0);
            sleep_ms(50);
            gpio_put(MT_2, 1);
            sleep_ms(50);
            gpio_put(MT_2, 0);
            sleep_ms(50);
            gpio_put(MT_3, 1);
            sleep_ms(50);
            gpio_put(MT_3, 0);
            sleep_ms(50);
            gpio_put(MT_4, 1);
            sleep_ms(50);
            gpio_put(MT_4, 0);
            sleep_ms(50);

    }
}
