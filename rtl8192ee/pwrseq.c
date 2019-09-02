// SPDX-License-Identifier: GPL-2.0
/* Copyright( c ) 2009-2014  Realtek Corporation.*/

#include "pwrseq.h"

/* drivers should parse below arrays and do the corresponding actions */

/*3 Power on  Array*/
struct wlan_pwr_cfg rtl8192E_power_on_flow
		[RTL8192E_TRANS_CARDEMU_TO_ACT_STEPS +
		 RTL8192E_TRANS_END_STEPS] = {
	RTL8192E_TRANS_CARDEMU_TO_ACT
	RTL8192E_TRANS_END
};

/*3Radio off GPIO Array */
struct wlan_pwr_cfg rtl8192E_radio_off_flow
		[RTL8192E_TRANS_ACT_TO_CARDEMU_STEPS
		+ RTL8192E_TRANS_END_STEPS] = {
	RTL8192E_TRANS_ACT_TO_CARDEMU
	RTL8192E_TRANS_END
};

/*3Card Disable Array*/
struct wlan_pwr_cfg rtl8192E_card_disable_flow
		[RTL8192E_TRANS_ACT_TO_CARDEMU_STEPS +
		 RTL8192E_TRANS_CARDEMU_TO_PDN_STEPS +
		 RTL8192E_TRANS_END_STEPS] = {
	RTL8192E_TRANS_ACT_TO_CARDEMU
	RTL8192E_TRANS_CARDEMU_TO_CARDDIS
	RTL8192E_TRANS_END
};

/*3 Card Enable Array*/
struct wlan_pwr_cfg rtl8192E_card_enable_flow
		[RTL8192E_TRANS_ACT_TO_CARDEMU_STEPS +
		 RTL8192E_TRANS_CARDEMU_TO_PDN_STEPS +
		 RTL8192E_TRANS_END_STEPS] = {
	RTL8192E_TRANS_CARDDIS_TO_CARDEMU
	RTL8192E_TRANS_CARDEMU_TO_ACT
	RTL8192E_TRANS_END
};

/*3Suspend Array*/
struct wlan_pwr_cfg rtl8192E_suspend_flow
		[RTL8192E_TRANS_ACT_TO_CARDEMU_STEPS +
		 RTL8192E_TRANS_CARDEMU_TO_SUS_STEPS +
		 RTL8192E_TRANS_END_STEPS] = {
	RTL8192E_TRANS_ACT_TO_CARDEMU
	RTL8192E_TRANS_CARDEMU_TO_SUS
	RTL8192E_TRANS_END
};

/*3 Resume Array*/
struct wlan_pwr_cfg rtl8192E_resume_flow
		[RTL8192E_TRANS_ACT_TO_CARDEMU_STEPS +
		 RTL8192E_TRANS_CARDEMU_TO_SUS_STEPS +
		 RTL8192E_TRANS_END_STEPS] = {
	RTL8192E_TRANS_SUS_TO_CARDEMU
	RTL8192E_TRANS_CARDEMU_TO_ACT
	RTL8192E_TRANS_END
};

/*3HWPDN Array*/
struct wlan_pwr_cfg rtl8192E_hwpdn_flow
		[RTL8192E_TRANS_ACT_TO_CARDEMU_STEPS +
		 RTL8192E_TRANS_CARDEMU_TO_PDN_STEPS +
		 RTL8192E_TRANS_END_STEPS] = {
	RTL8192E_TRANS_ACT_TO_CARDEMU
	RTL8192E_TRANS_CARDEMU_TO_PDN
	RTL8192E_TRANS_END
};

/*3 Enter LPS */
struct wlan_pwr_cfg rtl8192E_enter_lps_flow
		[RTL8192E_TRANS_ACT_TO_LPS_STEPS +
		 RTL8192E_TRANS_END_STEPS] = {
	/*FW behavior*/
	RTL8192E_TRANS_ACT_TO_LPS
	RTL8192E_TRANS_END
};

/*3 Leave LPS */
struct wlan_pwr_cfg rtl8192E_leave_lps_flow
		[RTL8192E_TRANS_LPS_TO_ACT_STEPS +
		 RTL8192E_TRANS_END_STEPS] = {
	/*FW behavior*/
	RTL8192E_TRANS_LPS_TO_ACT
	RTL8192E_TRANS_END
};
