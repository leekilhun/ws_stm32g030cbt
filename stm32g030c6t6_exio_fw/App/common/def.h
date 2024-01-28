/*
 * def.h
 *
 *  Created on: Apr 23, 2023
 *      Author: gns2l
 */

#ifndef INCLUDE_DEF_H_
#define INCLUDE_DEF_H_

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

#include <math.h>


#ifdef __cplusplus
 extern "C" {
#endif


#include "main.h"



   enum uart_type
   {
     NONE,
     USB_CDC,
     SERIAL
   };

   typedef enum
   { _DISABLE,
     _ENABLE
   }func_state;


   typedef enum
   {
     AXIS_1,
     AXIS_2,
     AXIS_3,
     AXIS_4,

     AXIS_MAX
   } axis_dir;


   #define CW                    0
   #define CCW                   1

  typedef	unsigned int	          uint;
   #define BYTE                  uint8_t
   #define TRUE                  1
   #define FALSE                 0

   #define DEF_ERR_SUCCESS       0
   #define DEF_ERR_FAIL         -1


   #define _DEF_LED1             0
   #define _DEF_LED2             1
   #define _DEF_LED3             2
   #define _DEF_LED4             3

   #define _DEF_UART1            0
   #define _DEF_UART2            1
   #define _DEF_UART3            2
   #define _DEF_UART4            3

   #define _DEF_BUTTON1          0
   #define _DEF_BUTTON2          1
   #define _DEF_BUTTON3          2
   #define _DEF_BUTTON4          3

   #define _DEF_GPIO1            0
   #define _DEF_GPIO2            1
   #define _DEF_GPIO3            2
   #define _DEF_GPIO4            3
   #define _DEF_GPIO5            4
   #define _DEF_GPIO6            5
   #define _DEF_GPIO7            6
   #define _DEF_GPIO8            7
   #define _DEF_GPIO9            8
   #define _DEF_GPIO10           9

   #define _DEF_SPI1             0
   #define _DEF_SPI2             1
   #define _DEF_SPI3             2
   #define _DEF_SPI4             3

   #define _DEF_I2C1             0
   #define _DEF_I2C2             1
   #define _DEF_I2C3             2
   #define _DEF_I2C4             3

   #define _DEF_I2S1             0
   #define _DEF_I2S2             1
   #define _DEF_I2S3             2
   #define _DEF_I2S4             3

   #define _DEF_IIC_S1           0
   #define _DEF_IIC_S2           1
   #define _DEF_IIC_S3           2

   #define _DEF_TIM1             0
   #define _DEF_TIM2             1
   #define _DEF_TIM3             2
   #define _DEF_TIM4             3

   #define _DEF_PWM1             0
   #define _DEF_PWM2             1
   #define _DEF_PWM3             2
   #define _DEF_PWM4             3

   #define _DEF_LOW              0
   #define _DEF_HIGH             1

   #define _DEF_INPUT            0
   #define _DEF_INPUT_PULLUP     1
   #define _DEF_INPUT_PULLDOWN   2
   #define _DEF_OUTPUT           3
   #define _DEF_OUTPUT_PULLUP    4
   #define _DEF_OUTPUT_PULLDOWN  5

   #define _DEF_CAN1             0
   #define _DEF_CAN2             1
   #define _DEF_CAN3             2
   #define _DEF_CAN4             3

   #define _DEF_CAN_100K         0
   #define _DEF_CAN_125K         1
   #define _DEF_CAN_250K         2
   #define _DEF_CAN_500K         3
   #define _DEF_CAN_1000K        4

   #define _DEF_CAN_STD          0
   #define _DEF_CAN_EXT          1

   #define _DEF_DXL1             0
   #define _DEF_DXL2             1
   #define _DEF_DXL3             2
   #define _DEF_DXL4             3


   #define constrain(amt,low,high) ((amt)<(low)?(low):((amt)>(high)?(high):(amt)))

   #ifndef gmax
   #define gmax(a,b) (((a) > (b)) ? (a) : (b))
   #define gmin(a,b) (((a) < (b)) ? (a) : (b))
   #endif

   #ifndef map
   #define map(value, in_min, in_max, out_min, out_max) ((value - in_min) * (out_max - out_min) / (in_max - in_min) + out_min)
   #endif


   #define FLASH_MAGIC_NUMBER      0x5555AAAA

   typedef union
   {
     uint8_t  u8Data[4];
     uint16_t u16Data[2];
     uint32_t u32Data;

     int8_t   s8Data[4];
     int16_t  s16Data[2];
     int32_t  s32Data;

     uint8_t  u8D;
     uint16_t u16D;
     uint32_t u32D;

     int8_t   s8D;
     int16_t  s16D;
     int32_t  s32D;
   } data_t;
   

   typedef struct
   {
     uint8_t version[32];
     uint8_t name[32];
   } firm_version_t;


   typedef struct
   {
     uint32_t magic_number;

     //-- fw info
     //
     uint32_t addr_tag;
     uint32_t addr_fw;
     uint32_t size_tag;


     //-- tag info
     //
     uint32_t tag_flash_type;
     uint32_t tag_flash_start;
     uint32_t tag_flash_end;
     uint32_t tag_flash_length;
     uint32_t tag_flash_crc;
     uint32_t tag_length;
     uint8_t  tag_date_str[32];
     uint8_t  tag_time_str[32];

   } firm_tag_t;


#ifdef __cplusplus
 }
#endif




#endif /* INCLUDE_DEF_H_ */
