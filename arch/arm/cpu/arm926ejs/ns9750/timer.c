/*
 * (C) Copyright 2014
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <common.h>

/*
 * This function is derived from PowerPC code (timebase clock frequency).
 * On ARM it returns the number of timer ticks per second.
 */
ulong get_tbclk (void)
{
	return CONFIG_SYS_HZ;
}
