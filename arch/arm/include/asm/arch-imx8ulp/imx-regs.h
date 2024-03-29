/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright 2020 NXP
 */

#ifndef _IMX8ULP_REGS_H_
#define _IMX8ULP_REGS_H_
#define ARCH_MXC

#include <linux/bitops.h>
#include <linux/sizes.h>

#define SRAM0_BASE          0x22010000

#define CAAM_ARB_BASE_ADDR      0x26000000

#define PBRIDGE0_BASE		0x28000000

#define CMC0_RBASE		0x28025000

#define MU0_B_BASE_ADDR		0x29220000
#define CMC1_BASE_ADDR		0x29240000

#define SIM1_BASE_ADDR		0x29290000

#define WDG3_RBASE		0x292a0000UL

#define SIM_SEC_BASE_ADDR	0x2802B000

#define CGC1_SOSCDIV_ADDR	0x292C0108
#define CGC1_FRODIV_ADDR	0x292C0208

#define CFG1_PLL2CSR_ADDR	0x292C0500
#define CFG1_PLL2CFG_ADDR	0x292C0510

#define PCC_XRDC_MGR_ADDR	0x292d00bc

#define PCC1_RBASE		0x28091000
#define PCC3_RBASE		0x292d0000
#define PCC4_RBASE		0x29800000
#define PCC5_RBASE		0x2da70000

#define IOMUXC_BASE_ADDR	0x298c0000

#define LPUART4_RBASE		0x29390000
#define LPUART5_RBASE		0x293a0000
#define LPUART6_RBASE		0x29860000
#define LPUART7_RBASE		0x29870000

#define LPUART_BASE		LPUART5_RBASE

#define FSB_BASE_ADDR		0x27010000

#define USBOTG0_RBASE		0x29900000
#define USB_PHY0_BASE_ADDR	0x29910000
#define USBOTG1_RBASE		0x29920000
#define USB_PHY1_BASE_ADDR	0x29930000
#define USB_BASE_ADDR		USBOTG0_RBASE

#define DDR_CTL_BASE_ADDR	0x2E060000
#define DDR_PI_BASE_ADDR	0x2E062000
#define DDR_PHY_BASE_ADDR	0x2E064000
#define AVD_SIM_BASE_ADDR	0x2DA50000
#define AVD_SIM_LPDDR_CTRL	(AVD_SIM_BASE_ADDR + 0x14)
#define AVD_SIM_LPDDR_CTRL2	(AVD_SIM_BASE_ADDR + 0x18)

#define CFG_SYS_FSL_SEC_ADDR	0x292e0000

#define FEC_QUIRK_ENET_MAC

#define IMG_CONTAINER_BASE             (0x22010000UL)

#if !(defined(__KERNEL_STRICT_NAMES) || defined(__ASSEMBLY__))
#include <asm/types.h>

struct mu_type {
	u32 ver;
	u32 par;
	u32 cr;
	u32 sr;
	u32 reserved0[60];
	u32 fcr;
	u32 fsr;
	u32 reserved1[2];
	u32 gier;
	u32 gcr;
	u32 gsr;
	u32 reserved2;
	u32 tcr;
	u32 tsr;
	u32 rcr;
	u32 rsr;
	u32 reserved3[52];
	u32 tr[16];
	u32 reserved4[16];
	u32 rr[16];
	u32 reserved5[14];
	u32 mu_attr;
};

struct usbphy_regs {
	u32	usbphy_pwd;			/* 0x000 */
	u32	usbphy_pwd_set;			/* 0x004 */
	u32	usbphy_pwd_clr;			/* 0x008 */
	u32	usbphy_pwd_tog;			/* 0x00c */
	u32	usbphy_tx;			/* 0x010 */
	u32	usbphy_tx_set;			/* 0x014 */
	u32	usbphy_tx_clr;			/* 0x018 */
	u32	usbphy_tx_tog;			/* 0x01c */
	u32	usbphy_rx;			/* 0x020 */
	u32	usbphy_rx_set;			/* 0x024 */
	u32	usbphy_rx_clr;			/* 0x028 */
	u32	usbphy_rx_tog;			/* 0x02c */
	u32	usbphy_ctrl;			/* 0x030 */
	u32	usbphy_ctrl_set;		/* 0x034 */
	u32	usbphy_ctrl_clr;		/* 0x038 */
	u32	usbphy_ctrl_tog;		/* 0x03c */
	u32	usbphy_status;			/* 0x040 */
	u32	reserved0[3];
	u32	usbphy_debug;			/* 0x050 */
	u32	usbphy_debug_set;		/* 0x054 */
	u32	usbphy_debug_clr;		/* 0x058 */
	u32	usbphy_debug_tog;		/* 0x05c */
	u32	usbphy_debug0_status;	/* 0x060 */
	u32	reserved1[3];
	u32	usbphy_debug1;			/* 0x070 */
	u32	usbphy_debug1_set;		/* 0x074 */
	u32	usbphy_debug1_clr;		/* 0x078 */
	u32	usbphy_debug1_tog;		/* 0x07c */
	u32	usbphy_version;			/* 0x080 */
	u32	reserved2[7];
	u32	usb1_pll_480_ctrl;		/* 0x0a0 */
	u32	usb1_pll_480_ctrl_set;		/* 0x0a4 */
	u32	usb1_pll_480_ctrl_clr;		/* 0x0a8 */
	u32	usb1_pll_480_ctrl_tog;		/* 0x0ac */
	u32	reserved3[4];
	u32	usb1_vbus_detect;		/* 0xc0 */
	u32	usb1_vbus_detect_set;		/* 0xc4 */
	u32	usb1_vbus_detect_clr;		/* 0xc8 */
	u32	usb1_vbus_detect_tog;		/* 0xcc */
	u32	usb1_vbus_det_stat;		/* 0xd0 */
	u32	reserved4[3];
	u32	usb1_chrg_detect;		/* 0xe0 */
	u32	usb1_chrg_detect_set;		/* 0xe4 */
	u32	usb1_chrg_detect_clr;		/* 0xe8 */
	u32	usb1_chrg_detect_tog;		/* 0xec */
	u32	usb1_chrg_det_stat;		/* 0xf0 */
	u32	reserved5[3];
	u32	usbphy_anactrl;			/* 0x100 */
	u32	usbphy_anactrl_set;		/* 0x104 */
	u32	usbphy_anactrl_clr;		/* 0x108 */
	u32	usbphy_anactrl_tog;		/* 0x10c */
	u32	usb1_loopback;			/* 0x110 */
	u32	usb1_loopback_set;		/* 0x114 */
	u32	usb1_loopback_clr;		/* 0x118 */
	u32	usb1_loopback_tog;		/* 0x11c */
	u32	usb1_loopback_hsfscnt;		/* 0x120 */
	u32	usb1_loopback_hsfscnt_set;	/* 0x124 */
	u32	usb1_loopback_hsfscnt_clr;	/* 0x128 */
	u32	usb1_loopback_hsfscnt_tog;	/* 0x12c */
	u32	usphy_trim_override_en;		/* 0x130 */
	u32	usphy_trim_override_en_set;	/* 0x134 */
	u32	usphy_trim_override_en_clr;	/* 0x138 */
	u32	usphy_trim_override_en_tog;	/* 0x13c */
	u32	usb1_pfda_ctrl1;		/* 0x140 */
	u32	usb1_pfda_ctrl1_set;		/* 0x144 */
	u32	usb1_pfda_ctrl1_clr;		/* 0x148 */
	u32	usb1_pfda_ctrl1_tog;		/* 0x14c */
};

struct adc_regs {
	u32	verid;		/* 0x000 */
	u32	param;		/* 0x004 */
	u32	reserved0[2];	/* 0x008 */
	u32	ctrl;		/* 0x010 */
	u32	stat;		/* 0x014 */
	u32	ie;		/* 0x018 */
	u32	de;		/* 0x01c */
	u32	cfg;		/* 0x020 */
	u32	pause;		/* 0x024 */
	u32	reserved1[3];	/* 0x028 */
	u32	swtrig;		/* 0x034 */
	u32	tstat;		/* 0x038 */
	u32	reserved2[25];	/* 0x03c */
	u32	tctrl0;		/* 0x0a0 */
	u32	tctrl1;		/* 0x0a4 */
	u32	tctrl2;		/* 0x0a8 */
	u32	tctrl3;		/* 0x0ac */
	u32	reserved3[12];	/* 0x0b0 */
	u32	fctrl0;		/* 0x0e0 */
	u32	reserved4[7];	/* 0x0e4 */
	u32	cmdl1;		/* 0x100 */
	u32	cmdh1;		/* 0x104 */
	u32	cmdl2;		/* 0x108 */
	u32	cmdh2;		/* 0x10c */
	u32	cmdl3;		/* 0x110 */
	u32	cmdh3;		/* 0x114 */
	u32	cmdl4;		/* 0x118 */
	u32	cmdh4;		/* 0x11c */
	u32	cmdl5;		/* 0x120 */
	u32	cmdh5;		/* 0x124 */
	u32	cmdl6;		/* 0x128 */
	u32	cmdh6;		/* 0x12c */
	u32	cmdl7;		/* 0x130 */
	u32	cmdh7;		/* 0x134 */
	u32	cmdl8;		/* 0x138 */
	u32	cmdh8;		/* 0x13c */
	u32	cmdl9;		/* 0x140 */
	u32	cmdh9;		/* 0x144 */
	u32	cmdl10;		/* 0x148 */
	u32	cmdh10;		/* 0x14c */
	u32	cmdl11;		/* 0x150 */
	u32	cmdh11;		/* 0x154 */
	u32	cmdl12;		/* 0x158 */
	u32	cmdh12;		/* 0x15c */
	u32	cmdl13;		/* 0x160 */
	u32	cmdh13;		/* 0x164 */
	u32	cmdl14;		/* 0x168 */
	u32	cmdh14;		/* 0x16c */
	u32	cmdl15;		/* 0x170 */
	u32	cmdh15;		/* 0x174 */
	u32	reserved5[34];	/* 0x178 */
	u32	cv1;		/* 0x200 */
	u32	cv2;		/* 0x204 */
	u32	cv3;		/* 0x208 */
	u32	cv4;		/* 0x20c */
	u32	reserved6[60];	/* 0x210 */
	u32	resfifo0;	/* 0x300 */
};

enum apd_dgo_gpiox_op_range {
	RANGE_AUTO = 0,
	RANGE_1P8V,
	RANGE_3V3V,
};

enum apd_dgo_gpiox_port {
	PTE = 0,
	PTF,
	PTD,
};

#include <stdbool.h>
bool is_usb_boot(void);
void disconnect_from_pc(void);
#define is_boot_from_usb  is_usb_boot

#endif

#endif
