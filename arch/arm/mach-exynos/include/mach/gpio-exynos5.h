/* linux/arch/arm/mach-exynos/include/mach/gpio-exynos5.h
 *
 * Copyright (c) 2010-2011 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * EXYNOS5 - GPIO common lib support
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_GPIO_EXYNOS5_H
#define __ASM_ARCH_GPIO_EXYNOS5_H __FILE__

#define gpio_get_value	__gpio_get_value
#define gpio_set_value	__gpio_set_value
#define gpio_cansleep	__gpio_cansleep
#define gpio_to_irq	__gpio_to_irq

/* Practically, GPIO banks up to GPZ are the configurable gpio banks */

/* Common GPIO bank sizes */
#define EXYNOS5_GPIO_A0_NR	(8)
#define EXYNOS5_GPIO_A1_NR	(6)
#define EXYNOS5_GPIO_A2_NR	(8)
#define EXYNOS5_GPIO_B0_NR	(5)
#define EXYNOS5_GPIO_B1_NR	(5)
#define EXYNOS5_GPIO_B2_NR	(4)
#define EXYNOS5_GPIO_B3_NR	(4)
#define EXYNOS5_GPIO_C0_NR	(7)
#define EXYNOS5_GPIO_C1_NR	(7)
#define EXYNOS5_GPIO_C2_NR	(7)
#define EXYNOS5_GPIO_C3_NR	(7)
#define EXYNOS5_GPIO_D0_NR	(8)
#define EXYNOS5_GPIO_D1_NR	(8)
#define EXYNOS5_GPIO_Y0_NR	(6)
#define EXYNOS5_GPIO_Y1_NR	(4)
#define EXYNOS5_GPIO_Y2_NR	(6)
#define EXYNOS5_GPIO_Y3_NR	(8)
#define EXYNOS5_GPIO_Y4_NR	(8)
#define EXYNOS5_GPIO_Y5_NR	(8)
#define EXYNOS5_GPIO_Y6_NR	(8)
#define EXYNOS5_GPIO_X0_NR	(8)
#define EXYNOS5_GPIO_X1_NR	(8)
#define EXYNOS5_GPIO_X2_NR	(8)
#define EXYNOS5_GPIO_X3_NR	(8)
#define EXYNOS5_GPIO_E0_NR	(8)
#define EXYNOS5_GPIO_E1_NR	(2)
#define EXYNOS5_GPIO_F0_NR	(4)
#define EXYNOS5_GPIO_F1_NR	(4)
#define EXYNOS5_GPIO_G0_NR	(8)
#define EXYNOS5_GPIO_G1_NR	(8)
#define EXYNOS5_GPIO_G2_NR	(2)
#define EXYNOS5_GPIO_H0_NR	(4)
#define EXYNOS5_GPIO_H1_NR	(8)
#define EXYNOS5_GPIO_V0_NR	(8)
#define EXYNOS5_GPIO_V1_NR	(8)
#define EXYNOS5_GPIO_V2_NR	(8)
#define EXYNOS5_GPIO_V3_NR	(8)
#define EXYNOS5_GPIO_V4_NR	(2)
#define EXYNOS5_GPIO_Z_NR	(7)

/* Only EXYNOS5210 GPIO bank sizes */
#define EXYNOS5210_GPIO_J0_NR	(5)
#define EXYNOS5210_GPIO_J1_NR	(8)
#define EXYNOS5210_GPIO_J2_NR	(8)
#define EXYNOS5210_GPIO_J3_NR	(8)
#define EXYNOS5210_GPIO_J4_NR	(2)
#define EXYNOS5210_GPIO_K0_NR	(8)
#define EXYNOS5210_GPIO_K1_NR	(8)
#define EXYNOS5210_GPIO_K2_NR	(8)
#define EXYNOS5210_GPIO_K3_NR	(7)

/* GPIO bank numbers */

#define EXYNOS5_GPIO_NEXT(__gpio) \
	((__gpio##_START) + (__gpio##_NR) + CONFIG_S3C_GPIO_SPACE + 1)

enum exynos5_gpio_number {
	EXYNOS5_GPIO_A0_START		= 0,
	EXYNOS5_GPIO_A1_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_A0),
	EXYNOS5_GPIO_A2_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_A1),
	EXYNOS5_GPIO_B0_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_A2),
	EXYNOS5_GPIO_B1_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_B0),
	EXYNOS5_GPIO_B2_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_B1),
	EXYNOS5_GPIO_B3_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_B2),
	EXYNOS5_GPIO_C0_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_B3),
	EXYNOS5_GPIO_C1_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_C0),
	EXYNOS5_GPIO_C2_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_C1),
	EXYNOS5_GPIO_C3_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_C2),
	EXYNOS5_GPIO_D0_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_C3),
	EXYNOS5_GPIO_D1_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_D0),
	EXYNOS5_GPIO_Y0_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_D1),
	EXYNOS5_GPIO_Y1_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_Y0),
	EXYNOS5_GPIO_Y2_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_Y1),
	EXYNOS5_GPIO_Y3_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_Y2),
	EXYNOS5_GPIO_Y4_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_Y3),
	EXYNOS5_GPIO_Y5_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_Y4),
	EXYNOS5_GPIO_Y6_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_Y5),
	EXYNOS5_GPIO_X0_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_Y6),
	EXYNOS5_GPIO_X1_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_X0),
	EXYNOS5_GPIO_X2_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_X1),
	EXYNOS5_GPIO_X3_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_X2),
	EXYNOS5_GPIO_E0_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_X3),
	EXYNOS5_GPIO_E1_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_E0),
	EXYNOS5_GPIO_F0_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_E1),
	EXYNOS5_GPIO_F1_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_F0),
	EXYNOS5_GPIO_G0_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_F1),
	EXYNOS5_GPIO_G1_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_G0),
	EXYNOS5_GPIO_G2_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_G1),
	EXYNOS5_GPIO_H0_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_G2),
	EXYNOS5_GPIO_H1_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_H0),
	EXYNOS5_GPIO_V0_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_H1),
	EXYNOS5_GPIO_V1_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_V0),
	EXYNOS5_GPIO_V2_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_V1),
	EXYNOS5_GPIO_V3_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_V2),
	EXYNOS5_GPIO_V4_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_V3),
	EXYNOS5_GPIO_Z_START		= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_V4),
};

enum exynos5210_gpio_number {
	EXYNOS5210_GPIO_J0_START	= EXYNOS5_GPIO_NEXT(EXYNOS5_GPIO_Z),
	EXYNOS5210_GPIO_J1_START	= EXYNOS5_GPIO_NEXT(EXYNOS5210_GPIO_J0),
	EXYNOS5210_GPIO_J2_START	= EXYNOS5_GPIO_NEXT(EXYNOS5210_GPIO_J1),
	EXYNOS5210_GPIO_J3_START	= EXYNOS5_GPIO_NEXT(EXYNOS5210_GPIO_J2),
	EXYNOS5210_GPIO_J4_START	= EXYNOS5_GPIO_NEXT(EXYNOS5210_GPIO_J3),
	EXYNOS5210_GPIO_K0_START	= EXYNOS5_GPIO_NEXT(EXYNOS5210_GPIO_J4),
	EXYNOS5210_GPIO_K1_START	= EXYNOS5_GPIO_NEXT(EXYNOS5210_GPIO_K0),
	EXYNOS5210_GPIO_K2_START	= EXYNOS5_GPIO_NEXT(EXYNOS5210_GPIO_K1),
	EXYNOS5210_GPIO_K3_START	= EXYNOS5_GPIO_NEXT(EXYNOS5210_GPIO_K2),
};

/* EXYNOS5 GPIO number definitions */
#define EXYNOS5_GPA0(_nr)	(EXYNOS5_GPIO_A0_START + (_nr))
#define EXYNOS5_GPA1(_nr)	(EXYNOS5_GPIO_A1_START + (_nr))
#define EXYNOS5_GPA2(_nr)	(EXYNOS5_GPIO_A2_START + (_nr))
#define EXYNOS5_GPB0(_nr)	(EXYNOS5_GPIO_B0_START + (_nr))
#define EXYNOS5_GPB1(_nr)	(EXYNOS5_GPIO_B1_START + (_nr))
#define EXYNOS5_GPB2(_nr)	(EXYNOS5_GPIO_B2_START + (_nr))
#define EXYNOS5_GPB3(_nr)	(EXYNOS5_GPIO_B3_START + (_nr))
#define EXYNOS5_GPC0(_nr)	(EXYNOS5_GPIO_C0_START + (_nr))
#define EXYNOS5_GPC1(_nr)	(EXYNOS5_GPIO_C1_START + (_nr))
#define EXYNOS5_GPC2(_nr)	(EXYNOS5_GPIO_C2_START + (_nr))
#define EXYNOS5_GPC3(_nr)	(EXYNOS5_GPIO_C3_START + (_nr))
#define EXYNOS5_GPD0(_nr)	(EXYNOS5_GPIO_D0_START + (_nr))
#define EXYNOS5_GPD1(_nr)	(EXYNOS5_GPIO_D1_START + (_nr))
#define EXYNOS5_GPY0(_nr)	(EXYNOS5_GPIO_Y0_START + (_nr))
#define EXYNOS5_GPY1(_nr)	(EXYNOS5_GPIO_Y1_START + (_nr))
#define EXYNOS5_GPY2(_nr)	(EXYNOS5_GPIO_Y2_START + (_nr))
#define EXYNOS5_GPY3(_nr)	(EXYNOS5_GPIO_Y3_START + (_nr))
#define EXYNOS5_GPY4(_nr)	(EXYNOS5_GPIO_Y4_START + (_nr))
#define EXYNOS5_GPY5(_nr)	(EXYNOS5_GPIO_Y5_START + (_nr))
#define EXYNOS5_GPY6(_nr)	(EXYNOS5_GPIO_Y6_START + (_nr))
#define EXYNOS5_GPX0(_nr)	(EXYNOS5_GPIO_X0_START + (_nr))
#define EXYNOS5_GPX1(_nr)	(EXYNOS5_GPIO_X1_START + (_nr))
#define EXYNOS5_GPX2(_nr)	(EXYNOS5_GPIO_X2_START + (_nr))
#define EXYNOS5_GPX3(_nr)	(EXYNOS5_GPIO_X3_START + (_nr))
#define EXYNOS5_GPE0(_nr)	(EXYNOS5_GPIO_E0_START + (_nr))
#define EXYNOS5_GPE1(_nr)	(EXYNOS5_GPIO_E1_START + (_nr))
#define EXYNOS5_GPF0(_nr)	(EXYNOS5_GPIO_F0_START + (_nr))
#define EXYNOS5_GPF1(_nr)	(EXYNOS5_GPIO_F1_START + (_nr))
#define EXYNOS5_GPG0(_nr)	(EXYNOS5_GPIO_G0_START + (_nr))
#define EXYNOS5_GPG1(_nr)	(EXYNOS5_GPIO_G1_START + (_nr))
#define EXYNOS5_GPG2(_nr)	(EXYNOS5_GPIO_G2_START + (_nr))
#define EXYNOS5_GPH0(_nr)	(EXYNOS5_GPIO_H0_START + (_nr))
#define EXYNOS5_GPH1(_nr)	(EXYNOS5_GPIO_H1_START + (_nr))
#define EXYNOS5_GPV0(_nr)	(EXYNOS5_GPIO_V0_START + (_nr))
#define EXYNOS5_GPV1(_nr)	(EXYNOS5_GPIO_V1_START + (_nr))
#define EXYNOS5_GPV2(_nr)	(EXYNOS5_GPIO_V2_START + (_nr))
#define EXYNOS5_GPV3(_nr)	(EXYNOS5_GPIO_V3_START + (_nr))
#define EXYNOS5_GPV4(_nr)	(EXYNOS5_GPIO_V4_START + (_nr))
#define EXYNOS5_GPZ(_nr)	(EXYNOS5_GPIO_Z_START + (_nr))

/* EXYNOS5210 GPIO number definitions */
#define EXYNOS5210_GPJ0(_nr)	(EXYNOS5210_GPIO_J0_START + (_nr))
#define EXYNOS5210_GPJ1(_nr)	(EXYNOS5210_GPIO_J1_START + (_nr))
#define EXYNOS5210_GPJ2(_nr)	(EXYNOS5210_GPIO_J2_START + (_nr))
#define EXYNOS5210_GPJ3(_nr)	(EXYNOS5210_GPIO_J3_START + (_nr))
#define EXYNOS5210_GPJ4(_nr)	(EXYNOS5210_GPIO_J4_START + (_nr))
#define EXYNOS5210_GPK0(_nr)	(EXYNOS5210_GPIO_K0_START + (_nr))
#define EXYNOS5210_GPK1(_nr)	(EXYNOS5210_GPIO_K1_START + (_nr))
#define EXYNOS5210_GPK2(_nr)	(EXYNOS5210_GPIO_K2_START + (_nr))
#define EXYNOS5210_GPK3(_nr)	(EXYNOS5210_GPIO_K3_START + (_nr))

/* the end of the EXYNOS5 specific gpios */
#define EXYNOS5210_GPIO_END	(EXYNOS5210_GPK3(EXYNOS5210_GPIO_K3_NR) + 1)
#define EXYNOS5250_GPIO_END	(EXYNOS5_GPZ(EXYNOS5_GPIO_Z_NR) + 1)

#define EXYNOS5XXX_GPIO_END	(EXYNOS5210_GPIO_END > EXYNOS5250_GPIO_END ? \
				EXYNOS5210_GPIO_END : EXYNOS5250_GPIO_END)
#define EXYNOS5_GPIO_END	EXYNOS5XXX_GPIO_END

#if defined(CONFIG_MACH_P11)
#include "gpio-p11.h"
#endif

#if defined(CONFIG_MACH_P10)
#include "gpio-p10.h"
#endif

#endif /* __ASM_ARCH_GPIO_EXYNOS5_H */
