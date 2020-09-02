#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "SparkFun Electronics"
#define PRODUCT_NAME "SparkFun MicroMod SAMD51 Processor Board"
#define VOLUME_LABEL "MIMOBOOT"
#define INDEX_URL "https://sparkfun.com/16791"
#define BOARD_ID "SAMD51J20A-SparkFun-MicroMod-v0"

#define USB_VID 0x1B4F
#define USB_PID 0x0020

#define LED_PIN PIN_PA23

#define BOOT_USART_MODULE                 SERCOM5
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBAMASK_SERCOM0
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_PB30D_SERCOM5_PAD1
#define BOOT_USART_PAD0                   PINMUX_PB31D_SERCOM5_PAD0
#define BOOT_GCLK_ID_CORE                 SERCOM5_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM5_GCLK_ID_SLOW

#endif
