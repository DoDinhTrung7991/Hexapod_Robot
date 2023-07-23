#ifndef _UART_H_
#define _UART_H_

#include "stdClarify.h"
#include "USART_header.h"

#define UART_STATE_READY 1
#define UART_STATE_BUSY 0

#define INITTED 1
#define NOT_INITTED 0

extern bool UART_state;
extern bool UART_init_state;
extern uint8_t recv_buf[2];
extern bool isUpdated_UART;

typedef enum
{
    USART1,
    USART2,
    USART3,
    UART4,
    UART5,
    USART6
} UARTx_t;

bool UART_init(UARTx_t UARTx);
bool UART_transmit(UARTx_t UARTx, const uint8_t* buf, uint8_t data_length);
bool UART_receive(UARTx_t UARTx, uint8_t* buf);

#endif
