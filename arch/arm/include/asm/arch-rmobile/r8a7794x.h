/*
 * arch/arm/include/asm/arch-rmobile/r8a7794x.h
 *     This file is r8a77945/r8a77946 processor definition.
 *
 * Copyright (C) 2014-2015 Renesas Electronics Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef __ASM_ARCH_R8A7794X_H
#define __ASM_ARCH_R8A7794X_H

/*
 * R8A7794X I/O Addresses
 */
#define	RWDT_BASE		0xE6020000
#define	SWDT_BASE		0xE6030000
#define	LBSC_BASE		0xFEC00200
#define DBSC3_0_BASE		0xE6790000
#define DBSC3_1_BASE		0xE67A0000
#define TMU_BASE		0xFFF60000
#define	GPIO5_BASE		0xE6055000
#define SDHI0_BASE		0xEE100000
#define SDHI1_BASE		0xEE300000
#define SDHI2_BASE		0xEE160000

#define MSTPSR0			0xe6150030
#define MSTPSR1			0xe6150038
#define MSTPSR2			0xe6150040
#define MSTPSR3			0xe6150048
#define MSTPSR4			0xe615004C
#define MSTPSR5			0xe615003C
#define MSTPSR7			0xe61501C4
#define MSTPSR8			0xe61509A0
#define MSTPSR9			0xe61509A4
#define MSTPSR10		0xe61509A8
#define MSTPSR11		0xe61509AC
#define RMSTPCR0		0xe6150110
#define RMSTPCR1		0xe6150114
#define RMSTPCR2		0xe6150118
#define RMSTPCR3		0xe615011C
#define RMSTPCR4		0xe6150120
#define RMSTPCR5		0xe6150124
#define RMSTPCR7		0xe615012C
#define RMSTPCR8		0xe6150980
#define RMSTPCR9		0xe6150984
#define RMSTPCR10		0xe6150988
#define RMSTPCR11		0xe615098C
#define SMSTPCR0		0xe6150130
#define SMSTPCR1		0xe6150134
#define SMSTPCR2		0xe6150138
#define SMSTPCR3		0xe615013C
#define SMSTPCR4		0xe6150140
#define SMSTPCR5		0xe6150144
#define SMSTPCR7		0xe615014C
#define SMSTPCR8		0xe6150990
#define SMSTPCR9		0xe6150994
#define SMSTPCR10		0xe6150998
#define SMSTPCR11		0xe615099C

#define S3C_BASE		0xE6784000
#define S3C_INT_BASE		0xE6784A00
#define S3C_MEDIA_BASE		0xE6784B00

#define S3C_QOS_DCACHE_BASE	0xE6784BDC
#define S3C_QOS_CCI0_BASE	0xE6784C00
#define S3C_QOS_CCI1_BASE	0xE6784C24
#define S3C_QOS_MXI_BASE	0xE6784C48
#define S3C_QOS_AXI_BASE	0xE6784C6C

#define DBSC3_0_QOS_R0_BASE	0xE6791000
#define DBSC3_0_QOS_R1_BASE	0xE6791100
#define DBSC3_0_QOS_R2_BASE	0xE6791200
#define DBSC3_0_QOS_R3_BASE	0xE6791300
#define DBSC3_0_QOS_R4_BASE	0xE6791400
#define DBSC3_0_QOS_R5_BASE	0xE6791500
#define DBSC3_0_QOS_R6_BASE	0xE6791600
#define DBSC3_0_QOS_R7_BASE	0xE6791700
#define DBSC3_0_QOS_R8_BASE	0xE6791800
#define DBSC3_0_QOS_R9_BASE	0xE6791900
#define DBSC3_0_QOS_R10_BASE	0xE6791A00
#define DBSC3_0_QOS_R11_BASE	0xE6791B00
#define DBSC3_0_QOS_R12_BASE	0xE6791C00
#define DBSC3_0_QOS_R13_BASE	0xE6791D00
#define DBSC3_0_QOS_R14_BASE	0xE6791E00
#define DBSC3_0_QOS_R15_BASE	0xE6791F00
#define DBSC3_0_QOS_W0_BASE	0xE6792000
#define DBSC3_0_QOS_W1_BASE	0xE6792100
#define DBSC3_0_QOS_W2_BASE	0xE6792200
#define DBSC3_0_QOS_W3_BASE	0xE6792300
#define DBSC3_0_QOS_W4_BASE	0xE6792400
#define DBSC3_0_QOS_W5_BASE	0xE6792500
#define DBSC3_0_QOS_W6_BASE	0xE6792600
#define DBSC3_0_QOS_W7_BASE	0xE6792700
#define DBSC3_0_QOS_W8_BASE	0xE6792800
#define DBSC3_0_QOS_W9_BASE	0xE6792900
#define DBSC3_0_QOS_W10_BASE	0xE6792A00
#define DBSC3_0_QOS_W11_BASE	0xE6792B00
#define DBSC3_0_QOS_W12_BASE	0xE6792C00
#define DBSC3_0_QOS_W13_BASE	0xE6792D00
#define DBSC3_0_QOS_W14_BASE	0xE6792E00
#define DBSC3_0_QOS_W15_BASE	0xE6792F00

#define DBSC3_0_DBADJ2		0xE67900C8
#define DBSC3_0_DBCALTR		0xE67900F8

#define CCI_400_MAXOT_1		0xF0091110
#define CCI_400_MAXOT_2		0xF0092110
#define CCI_400_QOSCNTL_1	0xF009110C
#define CCI_400_QOSCNTL_2	0xF009210C

#define	MXI_BASE		0xFE960000
#define	MXI_VIN_QOS		0xFE96020C
#define	MXI_QOS_BASE		0xFE960300

#define SYS_AXI_SYX64TO128_BASE	0xFF800300
#define SYS_AXI_AVB_BASE	0xFF800340
#define SYS_AXI_G2D_BASE	0xFF800540
#define SYS_AXI_IMP0_BASE	0xFF800580
#define SYS_AXI_IMP1_BASE	0xFF8005C0
#define SYS_AXI_IMUX0_BASE	0xFF800600
#define SYS_AXI_IMUX1_BASE	0xFF800640
#define SYS_AXI_IMUX2_BASE	0xFF800680
#define SYS_AXI_LBS_BASE	0xFF8006C0
#define SYS_AXI_MMUDS_BASE	0xFF800700
#define SYS_AXI_MMUM_BASE	0xFF800740
#define SYS_AXI_MMUR_BASE	0xFF800780
#define SYS_AXI_MMUS0_BASE	0xFF8007C0
#define SYS_AXI_MMUS1_BASE	0xFF800800
#define SYS_AXI_MTSB0_BASE	0xFF800880
#define SYS_AXI_MTSB1_BASE	0xFF8008C0
#define SYS_AXI_PCI_BASE	0xFF800900
#define SYS_AXI_RTX_BASE	0xFF800940
#define SYS_AXI_SDS0_BASE	0xFF800A80
#define SYS_AXI_SDS1_BASE	0xFF800AC0
#define SYS_AXI_USB20_BASE	0xFF800C00
#define SYS_AXI_USB21_BASE	0xFF800C40
#define SYS_AXI_USB22_BASE	0xFF800C80
#define SYS_AXI_USB30_BASE	0xFF800CC0
#define SYS_AXI_AX2M_BASE	0xFF800380
#define SYS_AXI_CC50_BASE	0xFF8003C0
#define SYS_AXI_CCI_BASE	0xFF800440
#define SYS_AXI_CS_BASE		0xFF800480
#define SYS_AXI_DDM_BASE	0xFF8004C0
#define SYS_AXI_ETH_BASE	0xFF800500
#define SYS_AXI_MPXM_BASE	0xFF800840
#define SYS_AXI_SAT0_BASE	0xFF800980
#define SYS_AXI_SAT1_BASE	0xFF8009C0
#define SYS_AXI_SDM0_BASE	0xFF800A00
#define SYS_AXI_SDM1_BASE	0xFF800A40
#define SYS_AXI_TRKF_BASE	0xFF800B00
#define SYS_AXI_UDM0_BASE	0xFF800B80
#define SYS_AXI_UDM1_BASE	0xFF800BC0

#define RT_AXI_SHX_BASE		0xFF810100
#define RT_AXI_DBG_BASE		0xFF810140
#define RT_AXI_RDM_BASE		0xFF810180
#define RT_AXI_RDS_BASE		0xFF8101C0
#define RT_AXI_RTX64TO128_BASE	0xFF810200
#define RT_AXI_STPRO_BASE	0xFF810240
#define RT_AXI_SY2RT_BASE	0xFF810280

#define MP_AXI_ADSP_BASE	0xFF820100
#define MP_AXI_ASDS0_BASE	0xFF8201C0
#define MP_AXI_ASDS1_BASE	0xFF820200
#define MP_AXI_MLP_BASE		0xFF820240
#define MP_AXI_MMUMP_BASE	0xFF820280
#define MP_AXI_SPU_BASE		0xFF8202C0
#define MP_AXI_SPUC_BASE	0xFF820300

#define SYS_AXI256_AXI128TO256_BASE	0xFF860100
#define SYS_AXI256_SYX_BASE	0xFF860140
#define SYS_AXI256_MPX_BASE	0xFF860180
#define SYS_AXI256_MXI_BASE	0xFF8601C0

#define CCI_AXI_MMUS0_BASE	0xFF880100
#define CCI_AXI_SYX2_BASE	0xFF880140
#define CCI_AXI_MMUR_BASE	0xFF880180
#define CCI_AXI_MMUDS_BASE	0xFF8801C0
#define CCI_AXI_MMUM_BASE	0xFF880200
#define CCI_AXI_MXI_BASE	0xFF880240
#define CCI_AXI_MMUS1_BASE	0xFF880280
#define CCI_AXI_MMUMP_BASE	0xFF8802C0

#define MEDIA_AXI_MXR_BASE	0xFE960080
#define MEDIA_AXI_MXW_BASE	0xFE9600C0
#define MEDIA_AXI_JPR_BASE	0xFE964100
#define MEDIA_AXI_JPW_BASE	0xFE966100
#define MEDIA_AXI_GCU0R_BASE	0xFE964140
#define MEDIA_AXI_GCU0W_BASE	0xFE966140
#define MEDIA_AXI_GCU1R_BASE	0xFE964180
#define MEDIA_AXI_GCU1W_BASE	0xFE966180
#define MEDIA_AXI_TDMR_BASE	0xFE964500
#define MEDIA_AXI_TDMW_BASE	0xFE966500
#define MEDIA_AXI_VSP0CR_BASE	0xFE964540
#define MEDIA_AXI_VSP0CW_BASE	0xFE966540
#define MEDIA_AXI_VSP1CR_BASE	0xFE964580
#define MEDIA_AXI_VSP1CW_BASE	0xFE966580
#define MEDIA_AXI_VSPDU0CR_BASE	0xFE9645C0
#define MEDIA_AXI_VSPDU0CW_BASE	0xFE9665C0
#define MEDIA_AXI_VSPDU1CR_BASE	0xFE964600
#define MEDIA_AXI_VSPDU1CW_BASE	0xFE966600
#define MEDIA_AXI_VIN0W_BASE	0xFE966900
#define MEDIA_AXI_VSP0R_BASE	0xFE964D00
#define MEDIA_AXI_VSP0W_BASE	0xFE966D00
#define MEDIA_AXI_FDP0R_BASE	0xFE964D40
#define MEDIA_AXI_FDP0W_BASE	0xFE966D40
#define MEDIA_AXI_IMSR_BASE	0xFE964D80
#define MEDIA_AXI_IMSW_BASE	0xFE966D80
#define MEDIA_AXI_VSP1R_BASE	0xFE965100
#define MEDIA_AXI_VSP1W_BASE	0xFE967100
#define MEDIA_AXI_FDP1R_BASE	0xFE965140
#define MEDIA_AXI_FDP1W_BASE	0xFE967140
#define MEDIA_AXI_IMRR_BASE	0xFE965180
#define MEDIA_AXI_IMRW_BASE	0xFE967180
#define MEDIA_AXI_FDP2R_BASE	0xFE9651C0
#define MEDIA_AXI_FDP2W_BASE	0xFE966DC0
#define MEDIA_AXI_VSPD0R_BASE	0xFE965500
#define MEDIA_AXI_VSPD0W_BASE	0xFE967500
#define MEDIA_AXI_VSPD1R_BASE	0xFE965540
#define MEDIA_AXI_VSPD1W_BASE	0xFE967540
#define MEDIA_AXI_DU0R_BASE	0xFE965580
#define MEDIA_AXI_DU0W_BASE	0xFE967580
#define MEDIA_AXI_DU1R_BASE	0xFE9655C0
#define MEDIA_AXI_DU1W_BASE	0xFE9675C0
#define MEDIA_AXI_VCP0CR_BASE	0xFE965900
#define MEDIA_AXI_VCP0CW_BASE	0xFE967900
#define MEDIA_AXI_VCP0VR_BASE	0xFE965940
#define MEDIA_AXI_VCP0VW_BASE	0xFE967940
#define MEDIA_AXI_VPC0R_BASE	0xFE965980
#define MEDIA_AXI_VCP1CR_BASE	0xFE965D00
#define MEDIA_AXI_VCP1CW_BASE	0xFE967D00
#define MEDIA_AXI_VCP1VR_BASE	0xFE965D40
#define MEDIA_AXI_VCP1VW_BASE	0xFE967D40
#define MEDIA_AXI_VPC1R_BASE	0xFE965D80

#define SYS_AXI_AVBDMSCR	0xFF802000
#define SYS_AXI_SYX2DMSCR	0xFF802004
#define SYS_AXI_CC50DMSCR	0xFF802008
#define SYS_AXI_CC51DMSCR	0xFF80200C
#define SYS_AXI_CCIDMSCR	0xFF802010
#define SYS_AXI_CSDMSCR		0xFF802014
#define SYS_AXI_DDMDMSCR	0xFF802018
#define SYS_AXI_ETHDMSCR	0xFF80201C
#define SYS_AXI_G2DDMSCR	0xFF802020
#define SYS_AXI_IMP0DMSCR	0xFF802024
#define SYS_AXI_IMP1DMSCR	0xFF802028
#define SYS_AXI_LBSDMSCR	0xFF80202C
#define SYS_AXI_MMUDSDMSCR	0xFF802030
#define SYS_AXI_MMUMXDMSCR	0xFF802034
#define SYS_AXI_MMURDDMSCR	0xFF802038
#define SYS_AXI_MMUS0DMSCR	0xFF80203C
#define SYS_AXI_MMUS1DMSCR	0xFF802040
#define SYS_AXI_MPXDMSCR	0xFF802044
#define SYS_AXI_MTSB0DMSCR	0xFF802048
#define SYS_AXI_MTSB1DMSCR	0xFF80204C
#define SYS_AXI_PCIDMSCR	0xFF802050
#define SYS_AXI_RTXDMSCR	0xFF802054
#define SYS_AXI_SAT0DMSCR	0xFF802058
#define SYS_AXI_SAT1DMSCR	0xFF80205C
#define SYS_AXI_SDM0DMSCR	0xFF802060
#define SYS_AXI_SDM1DMSCR	0xFF802064
#define SYS_AXI_SDS0DMSCR	0xFF802068
#define SYS_AXI_SDS1DMSCR	0xFF80206C
#define SYS_AXI_ETRABDMSCR	0xFF802070
#define SYS_AXI_ETRKFDMSCR	0xFF802074
#define SYS_AXI_UDM0DMSCR	0xFF802078
#define SYS_AXI_UDM1DMSCR	0xFF80207C
#define SYS_AXI_USB20DMSCR	0xFF802080
#define SYS_AXI_USB21DMSCR	0xFF802084
#define SYS_AXI_USB22DMSCR	0xFF802088
#define SYS_AXI_USB30DMSCR	0xFF80208C
#define SYS_AXI_X128TO64SLVDMSCR	0xFF802100
#define SYS_AXI_X64TO128SLVDMSCR	0xFF802104
#define SYS_AXI_AVBSLVDMSCR	0xFF802108
#define SYS_AXI_SYX2SLVDMSCR	0xFF80210C
#define SYS_AXI_ETHSLVDMSCR	0xFF802110
#define SYS_AXI_GICSLVDMSCR	0xFF802114
#define SYS_AXI_IMPSLVDMSCR	0xFF802118
#define SYS_AXI_IMX0SLVDMSCR	0xFF80211C
#define SYS_AXI_IMX1SLVDMSCR	0xFF802120
#define SYS_AXI_IMX2SLVDMSCR	0xFF802124
#define SYS_AXI_LBSSLVDMSCR	0xFF802128
#define SYS_AXI_MMC0SLVDMSCR	0xFF80212C
#define SYS_AXI_MMC1SLVDMSCR	0xFF802130
#define SYS_AXI_MPXSLVDMSCR	0xFF802134
#define SYS_AXI_MTSB0SLVDMSCR	0xFF802138
#define SYS_AXI_MTSB1SLVDMSCR	0xFF80213C
#define SYS_AXI_MXTSLVDMSCR	0xFF802140
#define SYS_AXI_PCISLVDMSCR	0xFF802144
#define SYS_AXI_SYAPBSLVDMSCR	0xFF802148
#define SYS_AXI_QSAPBSLVDMSCR	0xFF80214C
#define SYS_AXI_RTXSLVDMSCR	0xFF802150
#define SYS_AXI_SAT0SLVDMSCR	0xFF802168
#define SYS_AXI_SAT1SLVDMSCR	0xFF80216C
#define SYS_AXI_SDAP0SLVDMSCR	0xFF802170
#define SYS_AXI_SDAP1SLVDMSCR	0xFF802174
#define SYS_AXI_SDAP2SLVDMSCR	0xFF802178
#define SYS_AXI_SDAP3SLVDMSCR	0xFF80217C
#define SYS_AXI_SGXSLVDMSCR	0xFF802180
#define SYS_AXI_STBSLVDMSCR	0xFF802188
#define SYS_AXI_STMSLVDMSCR	0xFF80218C
#define SYS_AXI_TSPL0SLVDMSCR	0xFF802194
#define SYS_AXI_TSPL1SLVDMSCR	0xFF802198
#define SYS_AXI_TSPL2SLVDMSCR	0xFF80219C
#define SYS_AXI_USB20SLVDMSCR	0xFF8021A0
#define SYS_AXI_USB21SLVDMSCR	0xFF8021A4
#define SYS_AXI_USB22SLVDMSCR	0xFF8021A8
#define SYS_AXI_USB30SLVDMSCR	0xFF8021AC

#define RT_AXI_CBMDMSCR		0xFF812000
#define RT_AXI_DBDMSCR		0xFF812004
#define RT_AXI_RDMDMSCR		0xFF812008
#define RT_AXI_RDSDMSCR		0xFF81200C
#define RT_AXI_STRDMSCR		0xFF812010
#define RT_AXI_SY2RTDMSCR	0xFF812014
#define RT_AXI_CBSSLVDMSCR	0xFF812100
#define RT_AXI_DBSSLVDMSCR	0xFF812104
#define RT_AXI_RTAP1SLVDMSCR	0xFF812108
#define RT_AXI_RTAP2SLVDMSCR	0xFF81210C
#define RT_AXI_RTAP3SLVDMSCR	0xFF812110
#define RT_AXI_RT2SYSLVDMSCR	0xFF812114
#define RT_AXI_A128TO64SLVDMSCR	0xFF812118
#define RT_AXI_A64TO128SLVDMSCR	0xFF81211C
#define RT_AXI_A64TO128CSLVDMSCR	0xFF812120
#define RT_AXI_UTLBRSLVDMSCR	0xFF812128

#define MP_AXI_ADSPDMSCR	0xFF822000
#define MP_AXI_ASDM0DMSCR	0xFF822004
#define MP_AXI_ASDM1DMSCR	0xFF822008
#define MP_AXI_ASDS0DMSCR	0xFF82200C
#define MP_AXI_ASDS1DMSCR	0xFF822010
#define MP_AXI_MLPDMSCR		0xFF822014
#define MP_AXI_MMUMPDMSCR	0xFF822018
#define MP_AXI_SPUDMSCR		0xFF82201C
#define MP_AXI_SPUCDMSCR	0xFF822020
#define MP_AXI_SY2MPDMSCR	0xFF822024
#define MP_AXI_ADSPSLVDMSCR	0xFF822100
#define MP_AXI_MLMSLVDMSCR	0xFF822104
#define MP_AXI_MPAP4SLVDMSCR	0xFF822108
#define MP_AXI_MPAP5SLVDMSCR	0xFF82210C
#define MP_AXI_MPAP6SLVDMSCR	0xFF822110
#define MP_AXI_MPAP7SLVDMSCR	0xFF822114
#define MP_AXI_MP2SYSLVDMSCR	0xFF822118
#define MP_AXI_MP2SY2SLVDMSCR	0xFF82211C
#define MP_AXI_MPXAPSLVDMSCR	0xFF822124
#define MP_AXI_SPUSLVDMSCR	0xFF822128
#define MP_AXI_UTLBMPSLVDMSCR	0xFF82212C

#define ADM_AXI_ASDM0DMSCR	0xFF842000
#define ADM_AXI_ASDM1DMSCR	0xFF842004
#define ADM_AXI_MPAP1SLVDMSCR	0xFF842104
#define ADM_AXI_MPAP2SLVDMSCR	0xFF842108
#define ADM_AXI_MPAP3SLVDMSCR	0xFF84210C

#define DM_AXI_RDMDMSCR		0xFF852000
#define DM_AXI_SDM0DMSCR	0xFF852004
#define DM_AXI_SDM1DMSCR	0xFF852008
#define DM_AXI_MMAP0SLVDMSCR	0xFF852100
#define DM_AXI_MMAP1SLVDMSCR	0xFF852104
#define DM_AXI_QSPAPSLVDMSCR	0xFF852108
#define DM_AXI_RAP4SLVDMSCR	0xFF85210C
#define DM_AXI_RAP5SLVDMSCR	0xFF852110
#define DM_AXI_SAP4SLVDMSCR	0xFF852114
#define DM_AXI_SAP5SLVDMSCR	0xFF852118
#define DM_AXI_SAP6SLVDMSCR	0xFF85211C
#define DM_AXI_SAP65SLVDMSCR	0xFF852120
#define DM_AXI_SDAP0SLVDMSCR	0xFF852124
#define DM_AXI_SDAP1SLVDMSCR	0xFF852128
#define DM_AXI_SDAP2SLVDMSCR	0xFF85212C
#define DM_AXI_SDAP3SLVDMSCR	0xFF852130

#define SYS_AXI256_SYXDMSCR	0xFF862000
#define SYS_AXI256_MPXDMSCR	0xFF862004
#define SYS_AXI256_MXIDMSCR	0xFF862008
#define SYS_AXI256_X128TO256SLVDMSCR	0xFF862100
#define SYS_AXI256_X256TO128SLVDMSCR	0xFF862104
#define SYS_AXI256_SYXSLVDMSCR	0xFF862108
#define SYS_AXI256_CCXSLVDMSCR	0xFF86210C
#define SYS_AXI256_S3CSLVDMSCR	0xFF862110

#define MXT_SYXDMSCR		0xFF872000
#define MXT_CMM0SLVDMSCR	0xFF872100
#define MXT_CMM1SLVDMSCR	0xFF872104
#define MXT_CMM2SLVDMSCR	0xFF872108
#define MXT_FDPSLVDMSCR		0xFF87210C
#define MXT_IMRSLVDMSCR		0xFF872110
#define MXT_VINSLVDMSCR		0xFF872114
#define MXT_VPC0SLVDMSCR	0xFF872118
#define MXT_VPC1SLVDMSCR	0xFF87211C
#define MXT_VSP0SLVDMSCR	0xFF872120
#define MXT_VSP1SLVDMSCR	0xFF872124
#define MXT_VSPD0SLVDMSCR	0xFF872128
#define MXT_VSPD1SLVDMSCR	0xFF87212C
#define MXT_MAP1SLVDMSCR	0xFF872130
#define MXT_MAP2SLVDMSCR	0xFF872134

#define CCI_AXI_MMUS0DMSCR	0xFF882000
#define CCI_AXI_SYX2DMSCR	0xFF882004
#define CCI_AXI_MMURDMSCR	0xFF882008
#define CCI_AXI_MMUDSDMSCR	0xFF88200C
#define CCI_AXI_MMUMDMSCR	0xFF882010
#define CCI_AXI_MXIDMSCR	0xFF882014
#define CCI_AXI_MMUS1DMSCR	0xFF882018
#define CCI_AXI_MMUMPDMSCR	0xFF88201C
#define CCI_AXI_DVMDMSCR	0xFF882020
#define CCI_AXI_CCISLVDMSCR	0xFF882100

#define CCI_AXI_IPMMUIDVMCR	0xFF880400
#define CCI_AXI_IPMMURDVMCR	0xFF880404
#define CCI_AXI_IPMMUS0DVMCR	0xFF880408
#define CCI_AXI_IPMMUS1DVMCR	0xFF88040C
#define CCI_AXI_IPMMUMPDVMCR	0xFF880410
#define CCI_AXI_IPMMUDSDVMCR	0xFF880414
#define CCI_AXI_AX2ADDRMASK	0xFF88041C

#ifndef __ASSEMBLY__
#include <asm/types.h>

/* RWDT */
struct r8a7794x_rwdt {
	u32 rwtcnt;	/* 0x00 */
	u32 rwtcsra;	/* 0x04 */
	u16 rwtcsrb;	/* 0x08 */
};

/* SWDT */
struct r8a7794x_swdt {
	u32 swtcnt;	/* 0x00 */
	u32 swtcsra;	/* 0x04 */
	u16 swtcsrb;	/* 0x08 */
};

/* LBSC */
struct r8a7794x_lbsc {
	u32 cs0ctrl;
	u32 cs1ctrl;
	u32 ecs0ctrl;
	u32 ecs1ctrl;
	u32 ecs2ctrl;
	u32 ecs3ctrl;
	u32 ecs4ctrl;
	u32 ecs5ctrl;
	u32 dummy0[4];	/* 0x20 .. 0x2C */
	u32 cswcr0;
	u32 cswcr1;
	u32 ecswcr0;
	u32 ecswcr1;
	u32 ecswcr2;
	u32 ecswcr3;
	u32 ecswcr4;
	u32 ecswcr5;
	u32 exdmawcr0;
	u32 exdmawcr1;
	u32 exdmawcr2;
	u32 dummy1[9];	/* 0x5C .. 0x7C */
	u32 cspwcr0;
	u32 cspwcr1;
	u32 ecspwcr0;
	u32 ecspwcr1;
	u32 ecspwcr2;
	u32 ecspwcr3;
	u32 ecspwcr4;
	u32 ecspwcr5;
	u32 exwtsync;
	u32 dummy2[3];	/* 0xA4 .. 0xAC */
	u32 cs0bstctl;
	u32 cs0btph;
	u32 dummy3[2];	/* 0xB8 .. 0xBC */
	u32 cs1gdst;
	u32 ecs0gdst;
	u32 ecs1gdst;
	u32 ecs2gdst;
	u32 ecs3gdst;
	u32 ecs4gdst;
	u32 ecs5gdst;
	u32 dummy4[5];	/* 0xDC .. 0xEC */
	u32 exdmaset0;
	u32 exdmaset1;
	u32 exdmaset2;
	u32 dummy5[5];	/* 0xFC .. 0x10C */
	u32 exdmcr0;
	u32 exdmcr1;
	u32 exdmcr2;
	u32 dummy6[5];	/* 0x11C .. 0x12C */
	u32 bcintsr;
	u32 bcintcr;
	u32 bcintmr;
	u32 dummy7;	/* 0x13C */
	u32 exbatlv;
	u32 exwtsts;
	u32 dummy8[14];	/* 0x148 .. 0x17C */
	u32 atacsctrl;
	u32 dummy9[15]; /* 0x184 .. 0x1BC */
	u32 exbct;
	u32 extct;
};

/* GPIO */
struct r8a7794x_gpio {
	u32 iointsel;
	u32 inoutsel;
	u32 outdt;
	u32 indt;
	u32 intdt;
	u32 intclr;
	u32 intmsk;
	u32 posneg;
	u32 edglevel;
	u32 filonoff;
	u32 intmsks;
	u32 mskclrs;
	u32 outdtsel;
	u32 outdth;
	u32 outdtl;
	u32 bothedge;
};

/* S3C(QoS) */
struct r8a7794x_s3c {
	u32 s3cexcladdmsk;
	u32 s3cexclidmsk;
	u32 s3cadsplcr;
	u32 s3cmaar;
	u32 s3carcr11;
	u32 s3crorr;
	u32 s3cworr;
	u32 s3carcr22;
	u32 dummy1[2];	/* 0x20 .. 0x24 */
	u32 s3cmctr;
	u32 dummy2;	/* 0x2C */
	u32 cconf0;
	u32 cconf1;
	u32 cconf2;
	u32 cconf3;
};

struct r8a7794x_s3c_qos {
	u32 s3cqos0;
	u32 s3cqos1;
	u32 s3cqos2;
	u32 s3cqos3;
	u32 s3cqos4;
	u32 s3cqos5;
	u32 s3cqos6;
	u32 s3cqos7;
	u32 s3cqos8;
};

/* DBSC(QoS) */
struct r8a7794x_dbsc3_qos {
	u32 dblgcnt;
	u32 dbtmval0;
	u32 dbtmval1;
	u32 dbtmval2;
	u32 dbtmval3;
	u32 dbrqctr;
	u32 dbthres0;
	u32 dbthres1;
	u32 dbthres2;
	u32 dummy0;	/* 0x24 */
	u32 dblgqon;
};

/* MXI(QoS) */
struct r8a7794x_mxi {
	u32 mxsaar0;
	u32 mxsaar1;
	u32 dummy0[7];	/* 0x08 .. 0x20 */
	u32 mxaxiracr;
	u32 mxs3cracr;
	u32 dummy1[2];	/* 0x2C .. 0x30 */
	u32 mxaxiwacr;
	u32 mxs3cwacr;
	u32 dummy2;	/* 0x3C */
	u32 mxrtcr;
	u32 mxwtcr;
};

struct r8a7794x_mxi_qos {
	u32 vspdu0;
	u32 vspdu1;
	u32 du0;
	u32 du1;
};

/* AXI(QoS) */
struct r8a7794x_axi_qos {
	u32 qosconf;
	u32 qosctset0;
	u32 qosctset1;
	u32 qosctset2;
	u32 qosctset3;
	u32 qosreqctr;
	u32 qosthres0;
	u32 qosthres1;
	u32 qosthres2;
	u32 qosqon;
};

#endif

/*
 * R8A7794X I/O Product Information
 */
#define R8A7794X_CUT_ES2X		2

#endif /* __ASM_ARCH_R8A7794X_H */
