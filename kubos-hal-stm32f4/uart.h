/*
 * KubOS HAL
 * Copyright (C) 2016 Kubos Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#if (defined YOTTA_CFG_HARDWARE_UART) && (YOTTA_CFG_HARDWARE_UART_COUNT > 0)
#ifndef K_UART_H
#define K_UART_H

#include "kubos-hal/uart.h"

/**
 * Internal function to get appropriate USART_TypeDef based on uart num
 * @param uart uart bus num
 * @return USART_TypeDef
 */
USART_TypeDef *uart_dev(KUARTNum uart);

/**
 * Internal function to get appropriate interrupt number based on uart num
 * @param uart uart bus num
 * @return IRQn_Type interrupt number
 */
IRQn_Type uart_irqn(KUARTNum uart);


#endif
#endif
