/*
 * Copyright (c) 2016 Jean-Paul Etienne <fractalclone@gmail.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file SoC configuration macros for the riscv-qemu
 */

#ifndef __PULSERAIN_REINDEER_SOC_H_
#define __PULSERAIN_REINDEER_SOC_H_

#include <soc_common.h>

#include <misc/util.h>

/* UART configuration */
#define PULSERAIN_REINDEER_UART_BASE   0x20000010

/* Timer configuration */
#define RISCV_MTIME_BASE             0x20000000
#define RISCV_MTIMECMP_BASE          0x20000008

/* lib-c hooks required RAM defined variables */
#define RISCV_RAM_BASE               CONFIG_RISCV_RAM_BASE_ADDR
#define RISCV_RAM_SIZE               KB(CONFIG_RISCV_RAM_SIZE_KB)

#endif /* __PULSERAIN_REINDEER_SOC_H_ */
