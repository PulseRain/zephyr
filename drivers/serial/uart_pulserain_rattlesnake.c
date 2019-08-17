/*
 * Copyright (c) 2016 Jean-Paul Etienne <fractalclone@gmail.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <kernel.h>
#include <arch/cpu.h>
#include <uart.h>
#include <sys_io.h>

#define DEV_CFG(dev)					\
	((const struct uart_device_config * const)	\
	 (dev)->config->config_info)

static unsigned char uart_pulserain_rattlesnake_poll_out(struct device *dev,
					      unsigned char c)
{
    volatile unsigned int *uart = (unsigned int*)PULSERAIN_RATTLESNAKE_UART_BASE;
   
    while ((*uart) & 0x80000000){};
        *uart = c;
    while ((*uart) & 0x80000000){};
  
    return c;
}

static int uart_pulserain_rattlesnake_poll_in(struct device *dev, unsigned char *c)
{
	*c = 0;
	return 0;
}

static int uart_pulserain_rattlesnake_init(struct device *dev)
{
	/* Nothing to do */

	return 0;
}


static const struct uart_driver_api uart_pulserain_rattlesnake_driver_api = {
	.poll_in = uart_pulserain_rattlesnake_poll_in,
	.poll_out = uart_pulserain_rattlesnake_poll_out,
	.err_check = NULL,
};

static const struct uart_device_config uart_pulserain_rattlesnake_dev_cfg_0 = {
	.regs = PULSERAIN_RATTLESNAKE_UART_BASE,
};

DEVICE_AND_API_INIT(uart_pulserain_rattlesnake_0, "uart0",
		    uart_pulserain_rattlesnake_init, NULL,
		    &uart_pulserain_rattlesnake_dev_cfg_0,
		    PRE_KERNEL_1, CONFIG_KERNEL_INIT_PRIORITY_DEVICE,
		    (void *)&uart_pulserain_rattlesnake_driver_api);
