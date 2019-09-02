/* SPDX-License-Identifier: GPL-2.0 */
/* Copyright( c ) 2009-2012  Realtek Corporation.*/

#ifndef __RTL92CU_TABLE__H_
#define __RTL92CU_TABLE__H_

#include <linux/types.h>

#define RTL8192CUPHY_REG_2TARRAY_LENGTH		374
extern u32 RTL8192CUPHY_REG_2TARRAY[RTL8192CUPHY_REG_2TARRAY_LENGTH];
#define RTL8192CUPHY_REG_1TARRAY_LENGTH		374
extern u32 RTL8192CUPHY_REG_1TARRAY[RTL8192CUPHY_REG_1TARRAY_LENGTH];

#define RTL8192CUPHY_REG_ARRAY_PGLENGTH		336
extern u32 RTL8192CUPHY_REG_ARRAY_PG[RTL8192CUPHY_REG_ARRAY_PGLENGTH];

#define RTL8192CURADIOA_2TARRAYLENGTH	282
extern u32 RTL8192CURADIOA_2TARRAY[RTL8192CURADIOA_2TARRAYLENGTH];
#define RTL8192CURADIOB_2TARRAYLENGTH	78
extern u32 RTL8192CU_RADIOB_2TARRAY[RTL8192CURADIOB_2TARRAYLENGTH];
#define RTL8192CURADIOA_1TARRAYLENGTH	282
extern u32 RTL8192CU_RADIOA_1TARRAY[RTL8192CURADIOA_1TARRAYLENGTH];
#define RTL8192CURADIOB_1TARRAYLENGTH	1
extern u32 RTL8192CU_RADIOB_1TARRAY[RTL8192CURADIOB_1TARRAYLENGTH];

#define RTL8192CUMAC_2T_ARRAYLENGTH		172
extern u32 RTL8192CUMAC_2T_ARRAY[RTL8192CUMAC_2T_ARRAYLENGTH];

#define RTL8192CUAGCTAB_2TARRAYLENGTH	320
extern u32 RTL8192CUAGCTAB_2TARRAY[RTL8192CUAGCTAB_2TARRAYLENGTH];
#define RTL8192CUAGCTAB_1TARRAYLENGTH	320
extern u32 RTL8192CUAGCTAB_1TARRAY[RTL8192CUAGCTAB_1TARRAYLENGTH];

#define RTL8192CUPHY_REG_1T_HPARRAYLENGTH 378
extern u32 RTL8192CUPHY_REG_1T_HPARRAY[RTL8192CUPHY_REG_1T_HPARRAYLENGTH];

#define RTL8192CUPHY_REG_ARRAY_PG_HPLENGTH 336
extern u32 RTL8192CUPHY_REG_ARRAY_PG_HP[RTL8192CUPHY_REG_ARRAY_PG_HPLENGTH];

#define RTL8192CURADIOA_1T_HPARRAYLENGTH 282
extern u32 RTL8192CURADIOA_1T_HPARRAY[RTL8192CURADIOA_1T_HPARRAYLENGTH];
#define RTL8192CUAGCTAB_1T_HPARRAYLENGTH 320
extern u32 RTL8192CUAGCTAB_1T_HPARRAY[RTL8192CUAGCTAB_1T_HPARRAYLENGTH];

#endif
