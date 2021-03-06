/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */
#ifndef _ARCH_ARM_MACH_MSM_BOARD_SEMC_FUJI_SDCC_H
#define _ARXH_ARM_MACH_MSM_BOARD_SEMC_FUJI_SDCC_H

#include <linux/platform_device.h>
#include <mach/board.h>

int semc_fuji_multi_sdio_init(void);
void __init semc_fuji_init_mmc(void);
extern struct platform_device semc_fuji_device_sdio_al;

#endif
