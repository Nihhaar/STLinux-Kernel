/*
 * Copyright (c) 2010 Broadcom Corporation
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef	_BRCM_HW_IDS_H_
#define	_BRCM_HW_IDS_H_

#include <linux/pci_ids.h>
#include <linux/mmc/sdio_ids.h>

#define BRCM_USB_VENDOR_ID_BROADCOM	0x0a5c
#define BRCM_PCIE_VENDOR_ID_BROADCOM	PCI_VENDOR_ID_BROADCOM
#define BRCM_SDIO_VENDOR_ID_BROADCOM	SDIO_VENDOR_ID_BROADCOM

/* Chipcommon Core Chip IDs */
#define BRCM_CC_43143_CHIP_ID		43143
#define BRCM_CC_43235_CHIP_ID		43235
#define BRCM_CC_43236_CHIP_ID		43236
#define BRCM_CC_43238_CHIP_ID		43238
#define BRCM_CC_43241_CHIP_ID		0x4324
#define BRCM_CC_43242_CHIP_ID		43242
#define BRCM_CC_4329_CHIP_ID		0x4329
#define BRCM_CC_4330_CHIP_ID		0x4330
#define BRCM_CC_4334_CHIP_ID		0x4334
#define BRCM_CC_43362_CHIP_ID		43362
#define BRCM_CC_4335_CHIP_ID		0x4335
#define BRCM_CC_4339_CHIP_ID		0x4339
#define BRCM_CC_4354_CHIP_ID		0x4354
#define BRCM_CC_4356_CHIP_ID		0x4356
#define BRCM_CC_43566_CHIP_ID		43566
#define BRCM_CC_43567_CHIP_ID		43567
#define BRCM_CC_43569_CHIP_ID		43569
#define BRCM_CC_43570_CHIP_ID		43570
#define BRCM_CC_43602_CHIP_ID		43602

/* SDIO Device IDs */
#define BRCM_SDIO_43143_DEVICE_ID	BRCM_CC_43143_CHIP_ID
#define BRCM_SDIO_43241_DEVICE_ID	BRCM_CC_43241_CHIP_ID
#define BRCM_SDIO_4329_DEVICE_ID	BRCM_CC_4329_CHIP_ID
#define BRCM_SDIO_4330_DEVICE_ID	BRCM_CC_4330_CHIP_ID
#define BRCM_SDIO_4334_DEVICE_ID	BRCM_CC_4334_CHIP_ID
#define BRCM_SDIO_43362_DEVICE_ID	BRCM_CC_43362_CHIP_ID
#define BRCM_SDIO_4335_4339_DEVICE_ID	BRCM_CC_4335_CHIP_ID
#define BRCM_SDIO_4354_DEVICE_ID	BRCM_CC_4354_CHIP_ID

/* USB Device IDs */
#define BRCM_USB_43143_DEVICE_ID	0xbd1e
#define BRCM_USB_43236_DEVICE_ID	0xbd17
#define BRCM_USB_43242_DEVICE_ID	0xbd1f
#define BRCM_USB_43569_DEVICE_ID	0xbd27
#define BRCM_USB_BCMFW_DEVICE_ID	0x0bdc

/* PCIE Device IDs */
#define BRCM_PCIE_4354_DEVICE_ID	0x43df
#define BRCM_PCIE_4356_DEVICE_ID	0x43ec
#define BRCM_PCIE_43567_DEVICE_ID	0x43d3
#define BRCM_PCIE_43570_DEVICE_ID	0x43d9
#define BRCM_PCIE_43602_DEVICE_ID	0x43ba
#define BRCM_PCIE_43602_2G_DEVICE_ID	0x43bb
#define BRCM_PCIE_43602_5G_DEVICE_ID	0x43bc

/* brcmsmac IDs */
#define BCM4313_D11N2G_ID	0x4727	/* 4313 802.11n 2.4G device */
#define BCM43224_D11N_ID	0x4353	/* 43224 802.11n dualband device */
#define BCM43224_D11N_ID_VEN1	0x0576	/* Vendor specific 43224 802.11n db */
#define BCM43225_D11N2G_ID	0x4357	/* 43225 802.11n 2.4GHz device */
#define BCM43236_D11N_ID	0x4346	/* 43236 802.11n dualband device */
#define BCM43236_D11N2G_ID	0x4347	/* 43236 802.11n 2.4GHz device */

#define BCM4313_CHIP_ID		0x4313
#define BCM43224_CHIP_ID	43224

#endif				/* _BRCM_HW_IDS_H_ */
