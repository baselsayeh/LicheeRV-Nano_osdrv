// $Module: sc_top $
// $RegisterBank Version: V 1.0.00 $
// $Author:  $
// $Date: Tue, 02 Nov 2021 10:01:48 AM $
//

//GEN REG ADDR/OFFSET/MASK
#define  SC_TOP_REG_00  0x0
#define  SC_TOP_REG_01  0x4
#define  SC_TOP_REG_02  0x8
#define  SC_TOP_REG_03  0xc
#define  SC_TOP_REG_04  0x10
#define  SC_TOP_REG_05  0x14
#define  SC_TOP_REG_06  0x18
#define  SC_TOP_REG_SB_CBAR  0x1c
#define  SC_TOP_REG_08  0x20
#define  SC_TOP_REG_0C  0x30
#define  SC_TOP_REG_0D  0x34
#define  SC_TOP_REG_0E  0x38
#define  SC_TOP_REG_0F  0x3c
#define  SC_TOP_REG_10  0x40
#define  SC_TOP_REG_11  0x44
#define  SC_TOP_REG_12  0x48
#define  SC_TOP_REG_13  0x4c
#define  SC_TOP_REG_LVDSTX  0x50
#define  SC_TOP_REG_BT_ENC_0  0x60
#define  SC_TOP_RGG_BT_SYNC_CODE  0x64
#define  SC_TOP_REG_BK_BLK_DATA  0x68
#define  SC_TOP_REG_VO_MUX  0x70
#define  SC_TOP_REG_SC_074  0x74
#define  SC_TOP_REG_SC_078  0x78
#define  SC_TOP_REG_VO_MUX_EXT  0x80
#define  SC_TOP_REG_VO_MUX_0  0x90
#define  SC_TOP_REG_VO_MUX_1  0x94
#define  SC_TOP_REG_VO_MUX_2  0x98
#define  SC_TOP_REG_VO_MUX_3  0x9c
#define  SC_TOP_REG_VO_MUX_4  0xa0
#define  SC_TOP_REG_VO_MUX_5  0xa4
#define  SC_TOP_REG_VO_MUX_6  0xa8
#define  SC_TOP_REG_VO_MUX_7  0xac
#define  SC_TOP_REG_VO_MUX_8  0xb0
#define  SC_TOP_REG_VO_MUX_9  0xb4
#define  SC_TOP_REG_VO_MUX_A  0xb8
#define  SC_TOP_REG_RMX_CTRL  0xc0
#define  SC_TOP_REG_FAB_LP  0xc4
#define  SC_TOP_REG_CLK_EN  0x100
#define  SC_TOP_REG_DBG_VALID  0x104
#define  SC_TOP_REG_DBG_READY  0x108
#define  SC_TOP_REG_BLD_CTRL  0x200
#define  SC_TOP_REG_BLD_SIZE  0x204
#define  SC_TOP_PRI_M_REG_0  0x300
#define  SC_TOP_PRI_M_REG_1  0x304
#define  SC_TOP_PRI_M_REG_2  0x308
#define  SC_TOP_PRI_M_REG_3  0x30c
#define  SC_TOP_PRI_M_REG_4  0x310
#define  SC_TOP_PRI_M_REG_5  0x318
#define  SC_TOP_PRI_M_REG_6  0x31c
#define  SC_TOP_PRI_M_REG_8  0x324
#define  SC_TOP_REG_SC_PROG_DONE_W1T   0x0
#define  SC_TOP_REG_SC_PROG_DONE_W1T_OFFSET 0
#define  SC_TOP_REG_SC_PROG_DONE_W1T_MASK   0x1
#define  SC_TOP_REG_IP_TRIG_SRC   0x0
#define  SC_TOP_REG_IP_TRIG_SRC_OFFSET 3
#define  SC_TOP_REG_IP_TRIG_SRC_MASK   0x8
#define  SC_TOP_REG_FORCE_CLK_ENABLE   0x0
#define  SC_TOP_REG_FORCE_CLK_ENABLE_OFFSET 31
#define  SC_TOP_REG_FORCE_CLK_ENABLE_MASK   0x80000000
#define  SC_TOP_REG_SC_D_EN   0x4
#define  SC_TOP_REG_SC_D_EN_OFFSET 0
#define  SC_TOP_REG_SC_D_EN_MASK   0x1
#define  SC_TOP_REG_SC_V1_EN   0x4
#define  SC_TOP_REG_SC_V1_EN_OFFSET 1
#define  SC_TOP_REG_SC_V1_EN_MASK   0x2
#define  SC_TOP_REG_SC_V2_EN   0x4
#define  SC_TOP_REG_SC_V2_EN_OFFSET 2
#define  SC_TOP_REG_SC_V2_EN_MASK   0x4
#define  SC_TOP_REG_SC_V3_EN   0x4
#define  SC_TOP_REG_SC_V3_EN_OFFSET 3
#define  SC_TOP_REG_SC_V3_EN_MASK   0x8
#define  SC_TOP_REG_DISP_EN   0x4
#define  SC_TOP_REG_DISP_EN_OFFSET 4
#define  SC_TOP_REG_DISP_EN_MASK   0x10
#define  SC_TOP_REG_DISP_SRC_SEL   0x4
#define  SC_TOP_REG_DISP_SRC_SEL_OFFSET 8
#define  SC_TOP_REG_DISP_SRC_SEL_MASK   0x100
#define  SC_TOP_REG_SC_D_SRC_SEL   0x4
#define  SC_TOP_REG_SC_D_SRC_SEL_OFFSET 9
#define  SC_TOP_REG_SC_D_SRC_SEL_MASK   0x200
#define  SC_TOP_REG_SC_ROT_SW_RST   0x4
#define  SC_TOP_REG_SC_ROT_SW_RST_OFFSET 10
#define  SC_TOP_REG_SC_ROT_SW_RST_MASK   0x400
#define  SC_TOP_REG_SC_DEBUG_EN   0x4
#define  SC_TOP_REG_SC_DEBUG_EN_OFFSET 12
#define  SC_TOP_REG_SC_DEBUG_EN_MASK   0x1000
#define  SC_TOP_REG_QOS_EN   0x4
#define  SC_TOP_REG_QOS_EN_OFFSET 16
#define  SC_TOP_REG_QOS_EN_MASK   0xff0000
#define  SC_TOP_REG_SC_D_RT   0x8
#define  SC_TOP_REG_SC_D_RT_OFFSET 0
#define  SC_TOP_REG_SC_D_RT_MASK   0x1
#define  SC_TOP_REG_SC_V_RT   0x8
#define  SC_TOP_REG_SC_V_RT_OFFSET 1
#define  SC_TOP_REG_SC_V_RT_MASK   0x2
#define  SC_TOP_REG_SC_ROT_RT   0x8
#define  SC_TOP_REG_SC_ROT_RT_OFFSET 2
#define  SC_TOP_REG_SC_ROT_RT_MASK   0x4
#define  SC_TOP_REG_IMG_D_MAP_CONV_RT   0x8
#define  SC_TOP_REG_IMG_D_MAP_CONV_RT_OFFSET 3
#define  SC_TOP_REG_IMG_D_MAP_CONV_RT_MASK   0x8
#define  SC_TOP_REG_IMG_V_RT   0x8
#define  SC_TOP_REG_IMG_V_RT_OFFSET 4
#define  SC_TOP_REG_IMG_V_RT_MASK   0x10
#define  SC_TOP_REG_IMG_D_SEL   0x8
#define  SC_TOP_REG_IMG_D_SEL_OFFSET 5
#define  SC_TOP_REG_IMG_D_SEL_MASK   0x20
#define  SC_TOP_REG_BT_ENC_EN   0xc
#define  SC_TOP_REG_BT_ENC_EN_OFFSET 0
#define  SC_TOP_REG_BT_ENC_EN_MASK   0x1
#define  SC_TOP_REG_BT_OUT_FMT   0xc
#define  SC_TOP_REG_BT_OUT_FMT_OFFSET 1
#define  SC_TOP_REG_BT_OUT_FMT_MASK   0x2
#define  SC_TOP_REG_BT_SRC_FMT   0xc
#define  SC_TOP_REG_BT_SRC_FMT_OFFSET 2
#define  SC_TOP_REG_BT_SRC_FMT_MASK   0xc
#define  SC_TOP_REG_SW_FORCE_UP_B0   0x10
#define  SC_TOP_REG_SW_FORCE_UP_B0_OFFSET 0
#define  SC_TOP_REG_SW_FORCE_UP_B0_MASK   0x1
#define  SC_TOP_REG_SW_FORCE_UP_B1   0x10
#define  SC_TOP_REG_SW_FORCE_UP_B1_OFFSET 1
#define  SC_TOP_REG_SW_FORCE_UP_B1_MASK   0x2
#define  SC_TOP_REG_SW_FORCE_UP_B2   0x10
#define  SC_TOP_REG_SW_FORCE_UP_B2_OFFSET 2
#define  SC_TOP_REG_SW_FORCE_UP_B2_MASK   0x4
#define  SC_TOP_REG_SW_FORCE_UP_B3   0x10
#define  SC_TOP_REG_SW_FORCE_UP_B3_OFFSET 3
#define  SC_TOP_REG_SW_FORCE_UP_B3_MASK   0x8
#define  SC_TOP_REG_SW_FORCE_UP_B4   0x10
#define  SC_TOP_REG_SW_FORCE_UP_B4_OFFSET 4
#define  SC_TOP_REG_SW_FORCE_UP_B4_MASK   0x10
#define  SC_TOP_REG_SW_FORCE_UP_B5   0x10
#define  SC_TOP_REG_SW_FORCE_UP_B5_OFFSET 5
#define  SC_TOP_REG_SW_FORCE_UP_B5_MASK   0x20
#define  SC_TOP_REG_SW_FORCE_UP_B6   0x10
#define  SC_TOP_REG_SW_FORCE_UP_B6_OFFSET 6
#define  SC_TOP_REG_SW_FORCE_UP_B6_MASK   0x40
#define  SC_TOP_REG_SW_FORCE_UP_B7   0x10
#define  SC_TOP_REG_SW_FORCE_UP_B7_OFFSET 7
#define  SC_TOP_REG_SW_FORCE_UP_B7_MASK   0x80
#define  SC_TOP_REG_SW_MASK_UP   0x10
#define  SC_TOP_REG_SW_MASK_UP_OFFSET 8
#define  SC_TOP_REG_SW_MASK_UP_MASK   0x100
#define  SC_TOP_REG_SHRD_SEL   0x10
#define  SC_TOP_REG_SHRD_SEL_OFFSET 9
#define  SC_TOP_REG_SHRD_SEL_MASK   0x200
#define  SC_TOP_REG_DUMMY   0x14
#define  SC_TOP_REG_DUMMY_OFFSET 0
#define  SC_TOP_REG_DUMMY_MASK   0xffffffff
#define  SC_TOP_REG_RO_DUMMY   0x18
#define  SC_TOP_REG_RO_DUMMY_OFFSET 0
#define  SC_TOP_REG_RO_DUMMY_MASK   0xffffffff
#define  SC_TOP_REG_SB_WR_CTRL0   0x1c
#define  SC_TOP_REG_SB_WR_CTRL0_OFFSET 0
#define  SC_TOP_REG_SB_WR_CTRL0_MASK   0x3
#define  SC_TOP_REG_SB_WR_CTRL1   0x1c
#define  SC_TOP_REG_SB_WR_CTRL1_OFFSET 2
#define  SC_TOP_REG_SB_WR_CTRL1_MASK   0xc
#define  SC_TOP_REG_SB_RD_CTRL   0x1c
#define  SC_TOP_REG_SB_RD_CTRL_OFFSET 4
#define  SC_TOP_REG_SB_RD_CTRL_MASK   0x10
#define  SC_TOP_REG_MAP_C_ADDR_39_31   0x20
#define  SC_TOP_REG_MAP_C_ADDR_39_31_OFFSET 0
#define  SC_TOP_REG_MAP_C_ADDR_39_31_MASK   0xff
#define  SC_TOP_REG_R_OVERDRAFT   0x20
#define  SC_TOP_REG_R_OVERDRAFT_OFFSET 8
#define  SC_TOP_REG_R_OVERDRAFT_MASK   0x1f00
#define  SC_TOP_REG_AR_BYPASS   0x20
#define  SC_TOP_REG_AR_BYPASS_OFFSET 13
#define  SC_TOP_REG_AR_BYPASS_MASK   0x2000
#define  SC_TOP_REG_LP_CTRL   0x20
#define  SC_TOP_REG_LP_CTRL_OFFSET 14
#define  SC_TOP_REG_LP_CTRL_MASK   0x4000
#define  SC_TOP_REG_ARRESIZE_MAP_C   0x20
#define  SC_TOP_REG_ARRESIZE_MAP_C_OFFSET 15
#define  SC_TOP_REG_ARRESIZE_MAP_C_MASK   0x8000
#define  SC_TOP_REG_MAP_C_UV_SEL   0x20
#define  SC_TOP_REG_MAP_C_UV_SEL_OFFSET 16
#define  SC_TOP_REG_MAP_C_UV_SEL_MASK   0x10000
#define  SC_TOP_REG_MAP_C_AXI_BUSY   0x20
#define  SC_TOP_REG_MAP_C_AXI_BUSY_OFFSET 24
#define  SC_TOP_REG_MAP_C_AXI_BUSY_MASK   0x1000000
#define  SC_TOP_REG_MAP_C_APB_IDLE   0x20
#define  SC_TOP_REG_MAP_C_APB_IDLE_OFFSET 25
#define  SC_TOP_REG_MAP_C_APB_IDLE_MASK   0x2000000
#define  SC_TOP_REG_SC_INT_MASK   0x30
#define  SC_TOP_REG_SC_INT_MASK_OFFSET 0
#define  SC_TOP_REG_SC_INT_MASK_MASK   0xffffffff
#define  SC_TOP_REG_SC_INT_STATUS   0x34
#define  SC_TOP_REG_SC_INT_STATUS_OFFSET 0
#define  SC_TOP_REG_SC_INT_STATUS_MASK   0xffffffff
#define  SC_TOP_REG_SC_INT_ENABLE   0x38
#define  SC_TOP_REG_SC_INT_ENABLE_OFFSET 0
#define  SC_TOP_REG_SC_INT_ENABLE_MASK   0xffffffff
#define  SC_TOP_REG_TRIG_NUM   0x3c
#define  SC_TOP_REG_TRIG_NUM_OFFSET 0
#define  SC_TOP_REG_TRIG_NUM_MASK   0xff
#define  SC_TOP_REG_IMG_IN_D_TRIG_W1T   0x40
#define  SC_TOP_REG_IMG_IN_D_TRIG_W1T_OFFSET 0
#define  SC_TOP_REG_IMG_IN_D_TRIG_W1T_MASK   0x1
#define  SC_TOP_REG_IMG_IN_V_TRIG_W1T   0x40
#define  SC_TOP_REG_IMG_IN_V_TRIG_W1T_OFFSET 1
#define  SC_TOP_REG_IMG_IN_V_TRIG_W1T_MASK   0x2
#define  SC_TOP_REG_TGEN_VSYNC_CLR_W1T   0x40
#define  SC_TOP_REG_TGEN_VSYNC_CLR_W1T_OFFSET 2
#define  SC_TOP_REG_TGEN_VSYNC_CLR_W1T_MASK   0x4
#define  SC_TOP_REG_IMG_IN_D_CTRL   0x40
#define  SC_TOP_REG_IMG_IN_D_CTRL_OFFSET 8
#define  SC_TOP_REG_IMG_IN_D_CTRL_MASK   0x100
#define  SC_TOP_REG_IMG_IN_V_CTRL   0x40
#define  SC_TOP_REG_IMG_IN_V_CTRL_OFFSET 9
#define  SC_TOP_REG_IMG_IN_V_CTRL_MASK   0x200
#define  SC_TOP_REG_IMG_IN_D_ISP   0x40
#define  SC_TOP_REG_IMG_IN_D_ISP_OFFSET 12
#define  SC_TOP_REG_IMG_IN_D_ISP_MASK   0x1000
#define  SC_TOP_REG_IMG_IN_V_ISP   0x40
#define  SC_TOP_REG_IMG_IN_V_ISP_OFFSET 13
#define  SC_TOP_REG_IMG_IN_V_ISP_MASK   0x2000
#define  SC_TOP_REG_SC_CMDQ_STR_EN   0x44
#define  SC_TOP_REG_SC_CMDQ_STR_EN_OFFSET 0
#define  SC_TOP_REG_SC_CMDQ_STR_EN_MASK   0xff
#define  SC_TOP_REG_SC_CMDQ_STR_STATUS   0x44
#define  SC_TOP_REG_SC_CMDQ_STR_STATUS_OFFSET 8
#define  SC_TOP_REG_SC_CMDQ_STR_STATUS_MASK   0xff00
#define  SC_TOP_REG_CLR_SC_CMDQ_STR_W1T   0x44
#define  SC_TOP_REG_CLR_SC_CMDQ_STR_W1T_OFFSET 16
#define  SC_TOP_REG_CLR_SC_CMDQ_STR_W1T_MASK   0x10000
#define  SC_TOP_REG_SC_CMDQ_STP_EN   0x48
#define  SC_TOP_REG_SC_CMDQ_STP_EN_OFFSET 0
#define  SC_TOP_REG_SC_CMDQ_STP_EN_MASK   0xff
#define  SC_TOP_REG_SC_CMDQ_STP_STATUS   0x48
#define  SC_TOP_REG_SC_CMDQ_STP_STATUS_OFFSET 8
#define  SC_TOP_REG_SC_CMDQ_STP_STATUS_MASK   0xff00
#define  SC_TOP_REG_CLR_SC_CMDQ_STP_W1T   0x48
#define  SC_TOP_REG_CLR_SC_CMDQ_STP_W1T_OFFSET 16
#define  SC_TOP_REG_CLR_SC_CMDQ_STP_W1T_MASK   0x10000
#define  SC_TOP_REG_SC_PROG_CHK_EN   0x4c
#define  SC_TOP_REG_SC_PROG_CHK_EN_OFFSET 0
#define  SC_TOP_REG_SC_PROG_CHK_EN_MASK   0xff
#define  SC_TOP_REG_SC_PROG_LATE_BUS   0x4c
#define  SC_TOP_REG_SC_PROG_LATE_BUS_OFFSET 8
#define  SC_TOP_REG_SC_PROG_LATE_BUS_MASK   0xff00
#define  SC_TOP_REG_SC_PROG_LATE_FLAG   0x4c
#define  SC_TOP_REG_SC_PROG_LATE_FLAG_OFFSET 16
#define  SC_TOP_REG_SC_PROG_LATE_FLAG_MASK   0x10000
#define  SC_TOP_REG_CLR_SC_PROG_W1T   0x4c
#define  SC_TOP_REG_CLR_SC_PROG_W1T_OFFSET 19
#define  SC_TOP_REG_CLR_SC_PROG_W1T_MASK   0x80000
#define  SC_TOP_REG_LVDSTX_OUT_BIT   0x50
#define  SC_TOP_REG_LVDSTX_OUT_BIT_OFFSET 0
#define  SC_TOP_REG_LVDSTX_OUT_BIT_MASK   0x3
#define  SC_TOP_REG_LVDSTX_VESA_MODE   0x50
#define  SC_TOP_REG_LVDSTX_VESA_MODE_OFFSET 2
#define  SC_TOP_REG_LVDSTX_VESA_MODE_MASK   0x4
#define  SC_TOP_REG_LVDSTX_DUAL_CH   0x50
#define  SC_TOP_REG_LVDSTX_DUAL_CH_OFFSET 3
#define  SC_TOP_REG_LVDSTX_DUAL_CH_MASK   0x8
#define  SC_TOP_REG_LVDSTX_VS_OUT_EN   0x50
#define  SC_TOP_REG_LVDSTX_VS_OUT_EN_OFFSET 4
#define  SC_TOP_REG_LVDSTX_VS_OUT_EN_MASK   0x10
#define  SC_TOP_REG_LVDSTX_HS_OUT_EN   0x50
#define  SC_TOP_REG_LVDSTX_HS_OUT_EN_OFFSET 5
#define  SC_TOP_REG_LVDSTX_HS_OUT_EN_MASK   0x20
#define  SC_TOP_REG_LVDSTX_HS_BLK_EN   0x50
#define  SC_TOP_REG_LVDSTX_HS_BLK_EN_OFFSET 6
#define  SC_TOP_REG_LVDSTX_HS_BLK_EN_MASK   0x40
#define  SC_TOP_REG_LVDSTX_ML_SWAP   0x50
#define  SC_TOP_REG_LVDSTX_ML_SWAP_OFFSET 8
#define  SC_TOP_REG_LVDSTX_ML_SWAP_MASK   0x100
#define  SC_TOP_REG_LVDSTX_CTRL_REV   0x50
#define  SC_TOP_REG_LVDSTX_CTRL_REV_OFFSET 9
#define  SC_TOP_REG_LVDSTX_CTRL_REV_MASK   0x200
#define  SC_TOP_REG_LVDSTX_OE_SWAP   0x50
#define  SC_TOP_REG_LVDSTX_OE_SWAP_OFFSET 10
#define  SC_TOP_REG_LVDSTX_OE_SWAP_MASK   0x400
#define  SC_TOP_REG_LVDSTX_EN   0x50
#define  SC_TOP_REG_LVDSTX_EN_OFFSET 11
#define  SC_TOP_REG_LVDSTX_EN_MASK   0x800
#define  SC_TOP_REG_BT_FMT_SEL   0x60
#define  SC_TOP_REG_BT_FMT_SEL_OFFSET 0
#define  SC_TOP_REG_BT_FMT_SEL_MASK   0x3
#define  SC_TOP_REG_BT_HDE_GATE   0x60
#define  SC_TOP_REG_BT_HDE_GATE_OFFSET 3
#define  SC_TOP_REG_BT_HDE_GATE_MASK   0x8
#define  SC_TOP_REG_BT_DATA_SEQ   0x60
#define  SC_TOP_REG_BT_DATA_SEQ_OFFSET 4
#define  SC_TOP_REG_BT_DATA_SEQ_MASK   0x30
#define  SC_TOP_REG_BT_CLK_INV   0x60
#define  SC_TOP_REG_BT_CLK_INV_OFFSET 8
#define  SC_TOP_REG_BT_CLK_INV_MASK   0x100
#define  SC_TOP_REG_BT_VS_INV   0x60
#define  SC_TOP_REG_BT_VS_INV_OFFSET 9
#define  SC_TOP_REG_BT_VS_INV_MASK   0x200
#define  SC_TOP_REG_BT_HS_INV   0x60
#define  SC_TOP_REG_BT_HS_INV_OFFSET 10
#define  SC_TOP_REG_BT_HS_INV_MASK   0x400
#define  SC_TOP_REG_BT_EN_SIG_OUT   0x60
#define  SC_TOP_REG_BT_EN_SIG_OUT_OFFSET 12
#define  SC_TOP_REG_BT_EN_SIG_OUT_MASK   0x1000
#define  SC_TOP_REG_BT_SAV_VLD   0x64
#define  SC_TOP_REG_BT_SAV_VLD_OFFSET 0
#define  SC_TOP_REG_BT_SAV_VLD_MASK   0xff
#define  SC_TOP_REG_BT_SAV_BLK   0x64
#define  SC_TOP_REG_BT_SAV_BLK_OFFSET 8
#define  SC_TOP_REG_BT_SAV_BLK_MASK   0xff00
#define  SC_TOP_REG_BT_EAV_VLD   0x64
#define  SC_TOP_REG_BT_EAV_VLD_OFFSET 16
#define  SC_TOP_REG_BT_EAV_VLD_MASK   0xff0000
#define  SC_TOP_REG_BT_EAV_BLK   0x64
#define  SC_TOP_REG_BT_EAV_BLK_OFFSET 24
#define  SC_TOP_REG_BT_EAV_BLK_MASK   0xff000000
#define  SC_TOP_REG_BT_BLK_Y   0x68
#define  SC_TOP_REG_BT_BLK_Y_OFFSET 0
#define  SC_TOP_REG_BT_BLK_Y_MASK   0xff
#define  SC_TOP_REG_BT_BLK_C   0x68
#define  SC_TOP_REG_BT_BLK_C_OFFSET 8
#define  SC_TOP_REG_BT_BLK_C_MASK   0xff00
#define  SC_TOP_REG_SC_VO_SEL   0x70
#define  SC_TOP_REG_SC_VO_SEL_OFFSET 0
#define  SC_TOP_REG_SC_VO_SEL_MASK   0xf
#define  SC_TOP_REG_SC_VO_OUT   0x70
#define  SC_TOP_REG_SC_VO_OUT_OFFSET 8
#define  SC_TOP_REG_SC_VO_OUT_MASK   0xffffff00
#define  SC_TOP_REG_SC_CMDQ_LINE_HIT_EN   0x74
#define  SC_TOP_REG_SC_CMDQ_LINE_HIT_EN_OFFSET 0
#define  SC_TOP_REG_SC_CMDQ_LINE_HIT_EN_MASK   0xff
#define  SC_TOP_REG_SC_CMDQ_LINE_HIT_STATUS   0x74
#define  SC_TOP_REG_SC_CMDQ_LINE_HIT_STATUS_OFFSET 8
#define  SC_TOP_REG_SC_CMDQ_LINE_HIT_STATUS_MASK   0xff00
#define  SC_TOP_REG_CLR_SC_CMDQ_LINE_HIT_W1T   0x74
#define  SC_TOP_REG_CLR_SC_CMDQ_LINE_HIT_W1T_OFFSET 16
#define  SC_TOP_REG_CLR_SC_CMDQ_LINE_HIT_W1T_MASK   0x10000
#define  SC_TOP_REG_SC_CMDQ_CYCLE_LINE_HIT_EN   0x78
#define  SC_TOP_REG_SC_CMDQ_CYCLE_LINE_HIT_EN_OFFSET 0
#define  SC_TOP_REG_SC_CMDQ_CYCLE_LINE_HIT_EN_MASK   0xff
#define  SC_TOP_REG_SC_CMDQ_CYCLE_LINE_HIT_STATUS   0x78
#define  SC_TOP_REG_SC_CMDQ_CYCLE_LINE_HIT_STATUS_OFFSET 8
#define  SC_TOP_REG_SC_CMDQ_CYCLE_LINE_HIT_STATUS_MASK   0xff00
#define  SC_TOP_REG_CLR_SC_CMDQ_CYCLE_LINE_HIT_W1T   0x78
#define  SC_TOP_REG_CLR_SC_CMDQ_CYCLE_LINE_HIT_W1T_OFFSET 16
#define  SC_TOP_REG_CLR_SC_CMDQ_CYCLE_LINE_HIT_W1T_MASK   0x10000
#define  SC_TOP_REG_SC_VO_OUT_28_24   0x80
#define  SC_TOP_REG_SC_VO_OUT_28_24_OFFSET 0
#define  SC_TOP_REG_SC_VO_OUT_28_24_MASK   0x1f
#define  SC_TOP_REG_SC_VO_OUT_38_29   0x80
#define  SC_TOP_REG_SC_VO_OUT_38_29_OFFSET 5
#define  SC_TOP_REG_SC_VO_OUT_38_29_MASK   0x7fe0
#define  SC_TOP_REG_VO_VOCLK0_SEL   0x90
#define  SC_TOP_REG_VO_VOCLK0_SEL_OFFSET 0
#define  SC_TOP_REG_VO_VOCLK0_SEL_MASK   0x1f
#define  SC_TOP_REG_VO_VOCLK1_SEL   0x90
#define  SC_TOP_REG_VO_VOCLK1_SEL_OFFSET 8
#define  SC_TOP_REG_VO_VOCLK1_SEL_MASK   0x1f00
#define  SC_TOP_REG_VO_VOD0_SEL   0x90
#define  SC_TOP_REG_VO_VOD0_SEL_OFFSET 16
#define  SC_TOP_REG_VO_VOD0_SEL_MASK   0x1f0000
#define  SC_TOP_REG_VO_VOD1_SEL   0x90
#define  SC_TOP_REG_VO_VOD1_SEL_OFFSET 24
#define  SC_TOP_REG_VO_VOD1_SEL_MASK   0x1f000000
#define  SC_TOP_REG_VO_VOD2_SEL   0x94
#define  SC_TOP_REG_VO_VOD2_SEL_OFFSET 0
#define  SC_TOP_REG_VO_VOD2_SEL_MASK   0x1f
#define  SC_TOP_REG_VO_VOD3_SEL   0x94
#define  SC_TOP_REG_VO_VOD3_SEL_OFFSET 8
#define  SC_TOP_REG_VO_VOD3_SEL_MASK   0x1f00
#define  SC_TOP_REG_VO_VOD4_SEL   0x94
#define  SC_TOP_REG_VO_VOD4_SEL_OFFSET 16
#define  SC_TOP_REG_VO_VOD4_SEL_MASK   0x1f0000
#define  SC_TOP_REG_VO_VOD5_SEL   0x94
#define  SC_TOP_REG_VO_VOD5_SEL_OFFSET 24
#define  SC_TOP_REG_VO_VOD5_SEL_MASK   0x1f000000
#define  SC_TOP_REG_VO_VOD6_SEL   0x98
#define  SC_TOP_REG_VO_VOD6_SEL_OFFSET 0
#define  SC_TOP_REG_VO_VOD6_SEL_MASK   0x1f
#define  SC_TOP_REG_VO_VOD7_SEL   0x98
#define  SC_TOP_REG_VO_VOD7_SEL_OFFSET 8
#define  SC_TOP_REG_VO_VOD7_SEL_MASK   0x1f00
#define  SC_TOP_REG_VO_VOD8_SEL   0x98
#define  SC_TOP_REG_VO_VOD8_SEL_OFFSET 16
#define  SC_TOP_REG_VO_VOD8_SEL_MASK   0x1f0000
#define  SC_TOP_REG_VO_VOD9_SEL   0x98
#define  SC_TOP_REG_VO_VOD9_SEL_OFFSET 24
#define  SC_TOP_REG_VO_VOD9_SEL_MASK   0x1f000000
#define  SC_TOP_REG_VO_VOD10_SEL   0x9c
#define  SC_TOP_REG_VO_VOD10_SEL_OFFSET 0
#define  SC_TOP_REG_VO_VOD10_SEL_MASK   0x1f
#define  SC_TOP_REG_VO_VOD11_SEL   0x9c
#define  SC_TOP_REG_VO_VOD11_SEL_OFFSET 8
#define  SC_TOP_REG_VO_VOD11_SEL_MASK   0x1f00
#define  SC_TOP_REG_VO_VOD12_SEL   0x9c
#define  SC_TOP_REG_VO_VOD12_SEL_OFFSET 16
#define  SC_TOP_REG_VO_VOD12_SEL_MASK   0x1f0000
#define  SC_TOP_REG_VO_VOD13_SEL   0x9c
#define  SC_TOP_REG_VO_VOD13_SEL_OFFSET 24
#define  SC_TOP_REG_VO_VOD13_SEL_MASK   0x1f000000
#define  SC_TOP_REG_VO_VOD14_SEL   0xa0
#define  SC_TOP_REG_VO_VOD14_SEL_OFFSET 0
#define  SC_TOP_REG_VO_VOD14_SEL_MASK   0x1f
#define  SC_TOP_REG_VO_VOD15_SEL   0xa0
#define  SC_TOP_REG_VO_VOD15_SEL_OFFSET 8
#define  SC_TOP_REG_VO_VOD15_SEL_MASK   0x1f00
#define  SC_TOP_REG_VO_VOD16_SEL   0xa0
#define  SC_TOP_REG_VO_VOD16_SEL_OFFSET 16
#define  SC_TOP_REG_VO_VOD16_SEL_MASK   0x1f0000
#define  SC_TOP_REG_VO_VOD17_SEL   0xa0
#define  SC_TOP_REG_VO_VOD17_SEL_OFFSET 24
#define  SC_TOP_REG_VO_VOD17_SEL_MASK   0x1f000000
#define  SC_TOP_REG_VO_VOD18_SEL   0xa4
#define  SC_TOP_REG_VO_VOD18_SEL_OFFSET 0
#define  SC_TOP_REG_VO_VOD18_SEL_MASK   0x1f
#define  SC_TOP_REG_VO_VOD19_SEL   0xa4
#define  SC_TOP_REG_VO_VOD19_SEL_OFFSET 8
#define  SC_TOP_REG_VO_VOD19_SEL_MASK   0x1f00
#define  SC_TOP_REG_VO_VOD20_SEL   0xa4
#define  SC_TOP_REG_VO_VOD20_SEL_OFFSET 16
#define  SC_TOP_REG_VO_VOD20_SEL_MASK   0x1f0000
#define  SC_TOP_REG_VO_VOD21_SEL   0xa4
#define  SC_TOP_REG_VO_VOD21_SEL_OFFSET 24
#define  SC_TOP_REG_VO_VOD21_SEL_MASK   0x1f000000
#define  SC_TOP_REG_VO_VOD22_SEL   0xa8
#define  SC_TOP_REG_VO_VOD22_SEL_OFFSET 0
#define  SC_TOP_REG_VO_VOD22_SEL_MASK   0x1f
#define  SC_TOP_REG_VO_VOD23_SEL   0xa8
#define  SC_TOP_REG_VO_VOD23_SEL_OFFSET 8
#define  SC_TOP_REG_VO_VOD23_SEL_MASK   0x1f00
#define  SC_TOP_REG_VO_VOD24_SEL   0xa8
#define  SC_TOP_REG_VO_VOD24_SEL_OFFSET 16
#define  SC_TOP_REG_VO_VOD24_SEL_MASK   0x1f0000
#define  SC_TOP_REG_VO_VOD25_SEL   0xa8
#define  SC_TOP_REG_VO_VOD25_SEL_OFFSET 24
#define  SC_TOP_REG_VO_VOD25_SEL_MASK   0x1f000000
#define  SC_TOP_REG_VO_VOD26_SEL   0xac
#define  SC_TOP_REG_VO_VOD26_SEL_OFFSET 0
#define  SC_TOP_REG_VO_VOD26_SEL_MASK   0x1f
#define  SC_TOP_REG_VO_VOD27_SEL   0xac
#define  SC_TOP_REG_VO_VOD27_SEL_OFFSET 8
#define  SC_TOP_REG_VO_VOD27_SEL_MASK   0x1f00
#define  SC_TOP_REG_VO_VOCLK0_INV   0xac
#define  SC_TOP_REG_VO_VOCLK0_INV_OFFSET 16
#define  SC_TOP_REG_VO_VOCLK0_INV_MASK   0x10000
#define  SC_TOP_REG_VO_VOCLK1_INV   0xac
#define  SC_TOP_REG_VO_VOCLK1_INV_OFFSET 17
#define  SC_TOP_REG_VO_VOCLK1_INV_MASK   0x20000
#define  SC_TOP_REG_VO_VOCLK0_AS_DAT   0xac
#define  SC_TOP_REG_VO_VOCLK0_AS_DAT_OFFSET 20
#define  SC_TOP_REG_VO_VOCLK0_AS_DAT_MASK   0x100000
#define  SC_TOP_REG_VO_VOCLK1_AS_DAT   0xac
#define  SC_TOP_REG_VO_VOCLK1_AS_DAT_OFFSET 21
#define  SC_TOP_REG_VO_VOCLK1_AS_DAT_MASK   0x200000
#define  SC_TOP_REG_VO_VOD28_SEL   0xb0
#define  SC_TOP_REG_VO_VOD28_SEL_OFFSET 0
#define  SC_TOP_REG_VO_VOD28_SEL_MASK   0x1f
#define  SC_TOP_REG_VO_VOD29_SEL   0xb0
#define  SC_TOP_REG_VO_VOD29_SEL_OFFSET 8
#define  SC_TOP_REG_VO_VOD29_SEL_MASK   0x1f00
#define  SC_TOP_REG_VO_VOD30_SEL   0xb0
#define  SC_TOP_REG_VO_VOD30_SEL_OFFSET 16
#define  SC_TOP_REG_VO_VOD30_SEL_MASK   0x1f0000
#define  SC_TOP_REG_VO_VOD31_SEL   0xb0
#define  SC_TOP_REG_VO_VOD31_SEL_OFFSET 24
#define  SC_TOP_REG_VO_VOD31_SEL_MASK   0x1f000000
#define  SC_TOP_REG_VO_VOD32_SEL   0xb4
#define  SC_TOP_REG_VO_VOD32_SEL_OFFSET 0
#define  SC_TOP_REG_VO_VOD32_SEL_MASK   0x1f
#define  SC_TOP_REG_VO_VOD33_SEL   0xb4
#define  SC_TOP_REG_VO_VOD33_SEL_OFFSET 8
#define  SC_TOP_REG_VO_VOD33_SEL_MASK   0x1f00
#define  SC_TOP_REG_VO_VOD34_SEL   0xb4
#define  SC_TOP_REG_VO_VOD34_SEL_OFFSET 16
#define  SC_TOP_REG_VO_VOD34_SEL_MASK   0x1f0000
#define  SC_TOP_REG_VO_VOD35_SEL   0xb4
#define  SC_TOP_REG_VO_VOD35_SEL_OFFSET 24
#define  SC_TOP_REG_VO_VOD35_SEL_MASK   0x1f000000
#define  SC_TOP_REG_VO_VOD36_SEL   0xb8
#define  SC_TOP_REG_VO_VOD36_SEL_OFFSET 0
#define  SC_TOP_REG_VO_VOD36_SEL_MASK   0x1f
#define  SC_TOP_REG_VO_VOD37_SEL   0xb8
#define  SC_TOP_REG_VO_VOD37_SEL_OFFSET 8
#define  SC_TOP_REG_VO_VOD37_SEL_MASK   0x1f00
#define  SC_TOP_REG_RMX_OS_MAX   0xc0
#define  SC_TOP_REG_RMX_OS_MAX_OFFSET 0
#define  SC_TOP_REG_RMX_OS_MAX_MASK   0xf
#define  SC_TOP_REG_RMX_CS_STATE   0xc0
#define  SC_TOP_REG_RMX_CS_STATE_OFFSET 4
#define  SC_TOP_REG_RMX_CS_STATE_MASK   0xf0
#define  SC_TOP_REG_RMX_OS_EMPTY   0xc0
#define  SC_TOP_REG_RMX_OS_EMPTY_OFFSET 8
#define  SC_TOP_REG_RMX_OS_EMPTY_MASK   0x100
#define  SC_TOP_REG_DIS_FAB_LP_OPT_M0   0xc4
#define  SC_TOP_REG_DIS_FAB_LP_OPT_M0_OFFSET 0
#define  SC_TOP_REG_DIS_FAB_LP_OPT_M0_MASK   0xff
#define  SC_TOP_REG_DIS_FAB_LP_OPT_M1   0xc4
#define  SC_TOP_REG_DIS_FAB_LP_OPT_M1_OFFSET 8
#define  SC_TOP_REG_DIS_FAB_LP_OPT_M1_MASK   0xff00
#define  SC_TOP_REG_SC_CKEN   0x100
#define  SC_TOP_REG_SC_CKEN_OFFSET 0
#define  SC_TOP_REG_SC_CKEN_MASK   0xffffffff
#define  SC_TOP_REG_DBG_VALID   0x104
#define  SC_TOP_REG_DBG_VALID_OFFSET 0
#define  SC_TOP_REG_DBG_VALID_MASK   0xffffffff
#define  SC_TOP_REG_DBG_READY   0x108
#define  SC_TOP_REG_DBG_READY_OFFSET 0
#define  SC_TOP_REG_DBG_READY_MASK   0xffffffff
#define  SC_TOP_REG_BLD_EN   0x200
#define  SC_TOP_REG_BLD_EN_OFFSET 0
#define  SC_TOP_REG_BLD_EN_MASK   0x1
#define  SC_TOP_REG_BLD_FIX_ALPHA   0x200
#define  SC_TOP_REG_BLD_FIX_ALPHA_OFFSET 1
#define  SC_TOP_REG_BLD_FIX_ALPHA_MASK   0x2
#define  SC_TOP_REG_BLD_BLEND_Y_ONLY   0x200
#define  SC_TOP_REG_BLD_BLEND_Y_ONLY_OFFSET 2
#define  SC_TOP_REG_BLD_BLEND_Y_ONLY_MASK   0x4
#define  SC_TOP_REG_BLD_Y2R_ENABLE   0x200
#define  SC_TOP_REG_BLD_Y2R_ENABLE_OFFSET 3
#define  SC_TOP_REG_BLD_Y2R_ENABLE_MASK   0x8
#define  SC_TOP_REG_BLD_ALPHA_FACTOR   0x200
#define  SC_TOP_REG_BLD_ALPHA_FACTOR_OFFSET 8
#define  SC_TOP_REG_BLD_ALPHA_FACTOR_MASK   0x1ff00
#define  SC_TOP_REG_BLD_ALPHA_STP   0x204
#define  SC_TOP_REG_BLD_ALPHA_STP_OFFSET 0
#define  SC_TOP_REG_BLD_ALPHA_STP_MASK   0xffff
#define  SC_TOP_REG_BLD_WD   0x204
#define  SC_TOP_REG_BLD_WD_OFFSET 16
#define  SC_TOP_REG_BLD_WD_MASK   0xffff0000
#define  SC_TOP_REG_PRI_M_EN   0x300
#define  SC_TOP_REG_PRI_M_EN_OFFSET 0
#define  SC_TOP_REG_PRI_M_EN_MASK   0x1
#define  SC_TOP_REG_PRI_M_PIXEL_MD   0x300
#define  SC_TOP_REG_PRI_M_PIXEL_MD_OFFSET 1
#define  SC_TOP_REG_PRI_M_PIXEL_MD_MASK   0x2
#define  SC_TOP_REG_PRI_FORCE_ALPHA   0x300
#define  SC_TOP_REG_PRI_FORCE_ALPHA_OFFSET 2
#define  SC_TOP_REG_PRI_FORCE_ALPHA_MASK   0x4
#define  SC_TOP_REG_PRI_MASK_RGB332   0x300
#define  SC_TOP_REG_PRI_MASK_RGB332_OFFSET 3
#define  SC_TOP_REG_PRI_MASK_RGB332_MASK   0x8
#define  SC_TOP_REG_PRI_BLEND_Y_ONLY   0x300
#define  SC_TOP_REG_PRI_BLEND_Y_ONLY_OFFSET 4
#define  SC_TOP_REG_PRI_BLEND_Y_ONLY_MASK   0x10
#define  SC_TOP_REG_PRI_Y2R_ENABLE   0x300
#define  SC_TOP_REG_PRI_Y2R_ENABLE_OFFSET 5
#define  SC_TOP_REG_PRI_Y2R_ENABLE_MASK   0x20
#define  SC_TOP_REG_PRI_GRID_SIZE   0x300
#define  SC_TOP_REG_PRI_GRID_SIZE_OFFSET 6
#define  SC_TOP_REG_PRI_GRID_SIZE_MASK   0x40
#define  SC_TOP_REG_PRI_M_FIT_P   0x300
#define  SC_TOP_REG_PRI_M_FIT_P_OFFSET 7
#define  SC_TOP_REG_PRI_M_FIT_P_MASK   0x80
#define  SC_TOP_REG_PRI_M_X_STR   0x304
#define  SC_TOP_REG_PRI_M_X_STR_OFFSET 0
#define  SC_TOP_REG_PRI_M_X_STR_MASK   0xffff
#define  SC_TOP_REG_PRI_M_Y_STR   0x304
#define  SC_TOP_REG_PRI_M_Y_STR_OFFSET 16
#define  SC_TOP_REG_PRI_M_Y_STR_MASK   0xffff0000
#define  SC_TOP_REG_PRI_M_X_STP   0x308
#define  SC_TOP_REG_PRI_M_X_STP_OFFSET 0
#define  SC_TOP_REG_PRI_M_X_STP_MASK   0xffff
#define  SC_TOP_REG_PRI_M_Y_STP   0x308
#define  SC_TOP_REG_PRI_M_Y_STP_OFFSET 16
#define  SC_TOP_REG_PRI_M_Y_STP_MASK   0xffff0000
#define  SC_TOP_REG_PRI_NO_MASK_IDX   0x30c
#define  SC_TOP_REG_PRI_NO_MASK_IDX_OFFSET 0
#define  SC_TOP_REG_PRI_NO_MASK_IDX_MASK   0xff
#define  SC_TOP_REG_PRI_ALPHA_FACTOR   0x30c
#define  SC_TOP_REG_PRI_ALPHA_FACTOR_OFFSET 8
#define  SC_TOP_REG_PRI_ALPHA_FACTOR_MASK   0x1ff00
#define  SC_TOP_REG_PRI_M_AXI_BASE   0x310
#define  SC_TOP_REG_PRI_M_AXI_BASE_OFFSET 0
#define  SC_TOP_REG_PRI_M_AXI_BASE_MASK   0xffffffffff
#define  SC_TOP_REG_PRI_M_AXI_STRIP   0x318
#define  SC_TOP_REG_PRI_M_AXI_STRIP_OFFSET 0
#define  SC_TOP_REG_PRI_M_AXI_STRIP_MASK   0xffff
#define  SC_TOP_REG_PRI_M_AXI_ARLEN   0x318
#define  SC_TOP_REG_PRI_M_AXI_ARLEN_OFFSET 16
#define  SC_TOP_REG_PRI_M_AXI_ARLEN_MASK   0xf0000
#define  SC_TOP_REG_PRI_M_AXI_LINE_NUM   0x31c
#define  SC_TOP_REG_PRI_M_AXI_LINE_NUM_OFFSET 0
#define  SC_TOP_REG_PRI_M_AXI_LINE_NUM_MASK   0xfff
#define  SC_TOP_REG_PRI_M_LINE_SIZE   0x31c
#define  SC_TOP_REG_PRI_M_LINE_SIZE_OFFSET 16
#define  SC_TOP_REG_PRI_M_LINE_SIZE_MASK   0xfff0000
#define  SC_TOP_REG_PRI_P_WD   0x324
#define  SC_TOP_REG_PRI_P_WD_OFFSET 0
#define  SC_TOP_REG_PRI_P_WD_MASK   0xffff
#define  SC_TOP_REG_PRI_P_HT   0x324
#define  SC_TOP_REG_PRI_P_HT_OFFSET 16
#define  SC_TOP_REG_PRI_P_HT_MASK   0xffff0000
