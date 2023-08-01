/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright Everest Semiconductor Co.,Ltd
 *
 * Author: Edgar Lai <laichengjie@everest-semi.com>
 */

#ifndef _ES9356_H
#define _ES9356_H

#define ES9356_PAGE_REGISTER	0x00	/* Page Select Register */
#define ES9356_WIN_START	0x00
#define ES9356_WIN_LEN		0x100
#define ES9356_RANGE_MIN	0x00
#define ES9356_RANGE_MAX	0x7F

#define ES9356_CHIP_ID          0x9356

#define ES9356_PAGE_00 0x0000
#define ES9356_PAGE_01 0x0100
#define ES9356_PAGE_02 0x0200

/* Page 0x00 Global Registers */
#define ES9356_INT_STAT_1       (ES9356_PAGE_00 + 0x40)
#define ES9356_INT_MASK_1       (ES9356_PAGE_00 + 0x41)
#define ES9356_INT_STAT_2       (ES9356_PAGE_00 + 0x42)
#define ES9356_INT_STAT_3       (ES9356_PAGE_00 + 0x43)

#define ES9356_SWDID_AB         (ES9356_PAGE_00 + 0x50)
#define ES9356_MANID_AB		(ES9356_PAGE_00 + 0x51) // Manufacture ID
#define ES9356_MANID_CD		(ES9356_PAGE_00 + 0x52)
#define ES9356_DEVID_AB		(ES9356_PAGE_00 + 0x53)
#define ES9356_DEVID_CD		(ES9356_PAGE_00 + 0x54)
#define ES9356_CLSID_AB         (ES9356_PAGE_00 + 0x55) // Class ID



#endif