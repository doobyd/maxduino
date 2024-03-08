/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'processor' in SOPC Builder design 'top_system'
 * SOPC Builder design path: D:/dooby/git_repos/maxduino/top_system.sopcinfo
 *
 * Generated: Fri Mar 08 10:59:38 CET 2024
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00008020
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 100000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x10
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00000020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 100000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_EXTRA_EXCEPTION_INFO
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 2048
#define ALT_CPU_INST_ADDR_WIDTH 0x10
#define ALT_CPU_NAME "processor"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00008020
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 100000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x10
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00000020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_EXTRA_EXCEPTION_INFO
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 2048
#define NIOS2_INST_ADDR_WIDTH 0x10
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00000000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_I2C
#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SPI
#define __ALTERA_AVALON_TIMER
#define __ALTERA_AVALON_UART
#define __ALTERA_NIOS2_GEN2


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "MAX 10"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/uart_0"
#define ALT_STDERR_BASE 0x9060
#define ALT_STDERR_DEV uart_0
#define ALT_STDERR_IS_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_uart"
#define ALT_STDIN "/dev/uart_0"
#define ALT_STDIN_BASE 0x9060
#define ALT_STDIN_DEV uart_0
#define ALT_STDIN_IS_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_uart"
#define ALT_STDOUT "/dev/uart_0"
#define ALT_STDOUT_BASE 0x9060
#define ALT_STDOUT_DEV uart_0
#define ALT_STDOUT_IS_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_uart"
#define ALT_SYSTEM_NAME "top_system"
#define ALT_SYS_CLK_TICKS_PER_SEC SYSTEM_TIMER_PROCESSOR_TICKS_PER_SEC
#define ALT_TIMESTAMP_CLK_TIMER_DEVICE_TYPE NONE_TIMER_DEVICE_TYPE


/*
 * console_for_processor configuration
 *
 */

#define ALT_MODULE_CLASS_console_for_processor altera_avalon_jtag_uart
#define CONSOLE_FOR_PROCESSOR_BASE 0x9000
#define CONSOLE_FOR_PROCESSOR_IRQ 0
#define CONSOLE_FOR_PROCESSOR_IRQ_INTERRUPT_CONTROLLER_ID 0
#define CONSOLE_FOR_PROCESSOR_NAME "/dev/console_for_processor"
#define CONSOLE_FOR_PROCESSOR_READ_DEPTH 64
#define CONSOLE_FOR_PROCESSOR_READ_THRESHOLD 8
#define CONSOLE_FOR_PROCESSOR_SPAN 8
#define CONSOLE_FOR_PROCESSOR_TYPE "altera_avalon_jtag_uart"
#define CONSOLE_FOR_PROCESSOR_WRITE_DEPTH 64
#define CONSOLE_FOR_PROCESSOR_WRITE_THRESHOLD 8


/*
 * gpio configuration
 *
 */

#define ALT_MODULE_CLASS_gpio altera_avalon_pio
#define GPIO_BASE 0x9040
#define GPIO_BIT_CLEARING_EDGE_REGISTER 0
#define GPIO_BIT_MODIFYING_OUTPUT_REGISTER 1
#define GPIO_CAPTURE 0
#define GPIO_DATA_WIDTH 20
#define GPIO_DO_TEST_BENCH_WIRING 0
#define GPIO_DRIVEN_SIM_VALUE 0
#define GPIO_EDGE_TYPE "NONE"
#define GPIO_FREQ 100000000
#define GPIO_HAS_IN 0
#define GPIO_HAS_OUT 0
#define GPIO_HAS_TRI 1
#define GPIO_IRQ -1
#define GPIO_IRQ_INTERRUPT_CONTROLLER_ID -1
#define GPIO_IRQ_TYPE "NONE"
#define GPIO_NAME "/dev/gpio"
#define GPIO_RESET_VALUE 0
#define GPIO_SPAN 32
#define GPIO_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK SYSTEM_TIMER_PROCESSOR
#define ALT_TIMESTAMP_CLK none


/*
 * i2c_0 configuration
 *
 */

#define ALT_MODULE_CLASS_i2c_0 altera_avalon_i2c
#define I2C_0_BASE 0x9080
#define I2C_0_FIFO_DEPTH 4
#define I2C_0_FREQ 100000000
#define I2C_0_IRQ 3
#define I2C_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define I2C_0_NAME "/dev/i2c_0"
#define I2C_0_SPAN 64
#define I2C_0_TYPE "altera_avalon_i2c"
#define I2C_0_USE_AV_ST 0


/*
 * processor_code configuration
 *
 */

#define ALT_MODULE_CLASS_processor_code altera_avalon_onchip_memory2
#define PROCESSOR_CODE_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define PROCESSOR_CODE_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define PROCESSOR_CODE_BASE 0x0
#define PROCESSOR_CODE_CONTENTS_INFO ""
#define PROCESSOR_CODE_DUAL_PORT 1
#define PROCESSOR_CODE_GUI_RAM_BLOCK_TYPE "M9K"
#define PROCESSOR_CODE_INIT_CONTENTS_FILE "top_system_processor_code"
#define PROCESSOR_CODE_INIT_MEM_CONTENT 1
#define PROCESSOR_CODE_INSTANCE_ID "NONE"
#define PROCESSOR_CODE_IRQ -1
#define PROCESSOR_CODE_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PROCESSOR_CODE_NAME "/dev/processor_code"
#define PROCESSOR_CODE_NON_DEFAULT_INIT_FILE_ENABLED 0
#define PROCESSOR_CODE_RAM_BLOCK_TYPE "M9K"
#define PROCESSOR_CODE_READ_DURING_WRITE_MODE "DONT_CARE"
#define PROCESSOR_CODE_SINGLE_CLOCK_OP 0
#define PROCESSOR_CODE_SIZE_MULTIPLE 1
#define PROCESSOR_CODE_SIZE_VALUE 32768
#define PROCESSOR_CODE_SPAN 32768
#define PROCESSOR_CODE_TYPE "altera_avalon_onchip_memory2"
#define PROCESSOR_CODE_WRITABLE 1


/*
 * spi_0 configuration
 *
 */

#define ALT_MODULE_CLASS_spi_0 altera_avalon_spi
#define SPI_0_BASE 0x90c0
#define SPI_0_CLOCKMULT 1
#define SPI_0_CLOCKPHASE 0
#define SPI_0_CLOCKPOLARITY 0
#define SPI_0_CLOCKUNITS "Hz"
#define SPI_0_DATABITS 8
#define SPI_0_DATAWIDTH 16
#define SPI_0_DELAYMULT "1.0E-9"
#define SPI_0_DELAYUNITS "ns"
#define SPI_0_EXTRADELAY 0
#define SPI_0_INSERT_SYNC 0
#define SPI_0_IRQ 4
#define SPI_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define SPI_0_ISMASTER 1
#define SPI_0_LSBFIRST 0
#define SPI_0_NAME "/dev/spi_0"
#define SPI_0_NUMSLAVES 1
#define SPI_0_PREFIX "spi_"
#define SPI_0_SPAN 32
#define SPI_0_SYNC_REG_DEPTH 2
#define SPI_0_TARGETCLOCK 128000u
#define SPI_0_TARGETSSDELAY "0.0"
#define SPI_0_TYPE "altera_avalon_spi"


/*
 * system_timer_processor configuration
 *
 */

#define ALT_MODULE_CLASS_system_timer_processor altera_avalon_timer
#define SYSTEM_TIMER_PROCESSOR_ALWAYS_RUN 1
#define SYSTEM_TIMER_PROCESSOR_BASE 0x9020
#define SYSTEM_TIMER_PROCESSOR_COUNTER_SIZE 32
#define SYSTEM_TIMER_PROCESSOR_FIXED_PERIOD 1
#define SYSTEM_TIMER_PROCESSOR_FREQ 100000000
#define SYSTEM_TIMER_PROCESSOR_IRQ 1
#define SYSTEM_TIMER_PROCESSOR_IRQ_INTERRUPT_CONTROLLER_ID 0
#define SYSTEM_TIMER_PROCESSOR_LOAD_VALUE 999999
#define SYSTEM_TIMER_PROCESSOR_MULT 0.001
#define SYSTEM_TIMER_PROCESSOR_NAME "/dev/system_timer_processor"
#define SYSTEM_TIMER_PROCESSOR_PERIOD 10
#define SYSTEM_TIMER_PROCESSOR_PERIOD_UNITS "ms"
#define SYSTEM_TIMER_PROCESSOR_RESET_OUTPUT 0
#define SYSTEM_TIMER_PROCESSOR_SNAPSHOT 0
#define SYSTEM_TIMER_PROCESSOR_SPAN 32
#define SYSTEM_TIMER_PROCESSOR_TICKS_PER_SEC 100
#define SYSTEM_TIMER_PROCESSOR_TIMEOUT_PULSE_OUTPUT 0
#define SYSTEM_TIMER_PROCESSOR_TIMER_DEVICE_TYPE 1
#define SYSTEM_TIMER_PROCESSOR_TYPE "altera_avalon_timer"


/*
 * uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_uart_0 altera_avalon_uart
#define UART_0_BASE 0x9060
#define UART_0_BAUD 115200
#define UART_0_DATA_BITS 8
#define UART_0_FIXED_BAUD 1
#define UART_0_FREQ 100000000
#define UART_0_IRQ 2
#define UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define UART_0_NAME "/dev/uart_0"
#define UART_0_PARITY 'N'
#define UART_0_SIM_CHAR_STREAM ""
#define UART_0_SIM_TRUE_BAUD 0
#define UART_0_SPAN 32
#define UART_0_STOP_BITS 1
#define UART_0_SYNC_REG_DEPTH 2
#define UART_0_TYPE "altera_avalon_uart"
#define UART_0_USE_CTS_RTS 0
#define UART_0_USE_EOP_REGISTER 0

#endif /* __SYSTEM_H_ */
