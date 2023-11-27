//==============================================================================
/**
 * @file Application.cpp
 * @title Communication Module - Placar Tenis PLT-01
 * @author Joao Nilo Rodrigues  -  nilo@pobox.com
 */
//------------------------------------------------------------------------------
#ifndef APPLICATION_H
#define __APPLICATION_H

#include <stdio.h>

#include "NLed.h"
#include "NSwitch.h"
#include "NSerial.h"
#include "NTimer.h"
#include "NTinyOutput.h"
#include "NAdc.h"
#include "NFilter.h"
#include "NAnalogParameter.h"

#include "NDataLink.h"
#include "NSerialProtocol.h"

//------------------------------------------------------------------------------
#define BUS_PORT		USART1, seStandard
#define BLE_PORT		USART2, seStandard
#define MEM_PORT		I2C1

#define USART1_CTS		GPIOA,  (uint32_t)11
#define USART1_RTS		GPIOA,  (uint32_t)12

#define DRV				GPIOA, (uint32_t)4
#define SPK				GPIOB, (uint32_t)13
#define LED				GPIOB, (uint32_t)15
#define CHG				GPIOB, (uint32_t)10

#define AMP				GPIOC, (uint32_t)13
#define BT_EN			GPIOC, (uint32_t)15

#define CFN0			GPIOB, (uint32_t)0
#define CFN1			GPIOB, (uint32_t)1
#define CFN2			GPIOB, (uint32_t)2

//------------------------------------------------------------------------------
#define FSM_IDLE		0
#define FSM_GETSTATUS	1
#define FSM_SETDATA		2

//------------------------------------------------------------------------------
#define BUS_NODES		10
#define PLAY1_TENS		((uint8_t) 0x1E)
#define PLAY1_UNITS		((uint8_t) 0x1D)
#define PLAY1_SET1		((uint8_t) 0x1C)
#define PLAY1_SET2		((uint8_t) 0x1B)
#define PLAY1_SET3		((uint8_t) 0x1A)
#define PLAY2_TENS		((uint8_t) 0x19)
#define PLAY2_UNITS		((uint8_t) 0x18)
#define PLAY2_SET1		((uint8_t) 0x17)
#define PLAY2_SET2		((uint8_t) 0x16)
#define PLAY2_SET3		((uint8_t) 0x15)

//------------------------------------------------------------------------------
#define FLAG_STATUS_PLAY1_TENS		((uint16_t) 0x0001)
#define FLAG_STATUS_PLAY1_UNITS		((uint16_t) 0x0002)
#define FLAG_STATUS_PLAY1_SET1		((uint16_t) 0x0004)
#define FLAG_STATUS_PLAY1_SET2		((uint16_t) 0x0008)
#define FLAG_STATUS_PLAY1_SET3		((uint16_t) 0x0010)
#define FLAG_STATUS_PLAY2_TENS		((uint16_t) 0x0020)
#define FLAG_STATUS_PLAY2_UNITS		((uint16_t) 0x0040)
#define FLAG_STATUS_PLAY2_SET1		((uint16_t) 0x0080)
#define FLAG_STATUS_PLAY2_SET2		((uint16_t) 0x0100)
#define FLAG_STATUS_PLAY2_SET3		((uint16_t) 0x0200)


#endif /* __APPLICATION_H */
//==============================================================================
