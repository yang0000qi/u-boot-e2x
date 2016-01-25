#ifndef __ASM_R8A7794X_H__
#define __ASM_R8A7794X_H__

/* Pin Function Controller:
 * GPIO_FN_xx - GPIO used to select pin function
 * GPIO_GP_x_x - GPIO mapped to real I/O pin on CPU
 */
enum {
	GPIO_GP_0_0, GPIO_GP_0_1, GPIO_GP_0_2, GPIO_GP_0_3,
	GPIO_GP_0_4, GPIO_GP_0_5, GPIO_GP_0_6, GPIO_GP_0_7,
	GPIO_GP_0_8, GPIO_GP_0_9, GPIO_GP_0_10, GPIO_GP_0_11,
	GPIO_GP_0_12, GPIO_GP_0_13, GPIO_GP_0_14, GPIO_GP_0_15,
	GPIO_GP_0_16, GPIO_GP_0_17, GPIO_GP_0_18, GPIO_GP_0_19,
	GPIO_GP_0_20, GPIO_GP_0_21, GPIO_GP_0_22,

	GPIO_GP_1_0, GPIO_GP_1_1, GPIO_GP_1_2, GPIO_GP_1_3,
	GPIO_GP_1_4, GPIO_GP_1_5, GPIO_GP_1_6, GPIO_GP_1_7,
	GPIO_GP_1_8, GPIO_GP_1_9, GPIO_GP_1_10, GPIO_GP_1_11,
	GPIO_GP_1_12, GPIO_GP_1_13, GPIO_GP_1_14, GPIO_GP_1_15,
	GPIO_GP_1_16, GPIO_GP_1_17, GPIO_GP_1_18, GPIO_GP_1_19,
	GPIO_GP_1_20, GPIO_GP_1_21, GPIO_GP_1_22,

	GPIO_GP_2_0, GPIO_GP_2_1, GPIO_GP_2_2, GPIO_GP_2_3,
	GPIO_GP_2_4, GPIO_GP_2_5, GPIO_GP_2_6, GPIO_GP_2_7,
	GPIO_GP_2_8, GPIO_GP_2_9, GPIO_GP_2_10, GPIO_GP_2_11,
	GPIO_GP_2_12, GPIO_GP_2_13, GPIO_GP_2_14, GPIO_GP_2_15,
	GPIO_GP_2_16, GPIO_GP_2_17, GPIO_GP_2_18, GPIO_GP_2_19,
	GPIO_GP_2_20, GPIO_GP_2_21, GPIO_GP_2_22, GPIO_GP_2_23,
	GPIO_GP_2_24, GPIO_GP_2_25, GPIO_GP_2_26, GPIO_GP_2_27,
	GPIO_GP_2_28, GPIO_GP_2_29, GPIO_GP_2_30, GPIO_GP_2_31,

	GPIO_GP_3_0, GPIO_GP_3_1, GPIO_GP_3_2, GPIO_GP_3_3,
	GPIO_GP_3_4, GPIO_GP_3_5, GPIO_GP_3_6, GPIO_GP_3_7,
	GPIO_GP_3_8, GPIO_GP_3_9, GPIO_GP_3_10, GPIO_GP_3_11,
	GPIO_GP_3_12, GPIO_GP_3_13, GPIO_GP_3_14, GPIO_GP_3_15,
	GPIO_GP_3_16, GPIO_GP_3_27, GPIO_GP_3_28, GPIO_GP_3_29,

	GPIO_GP_4_0, GPIO_GP_4_1, GPIO_GP_4_2, GPIO_GP_4_3,
	GPIO_GP_4_4, GPIO_GP_4_5, GPIO_GP_4_6, GPIO_GP_4_7,
	GPIO_GP_4_8, GPIO_GP_4_9, GPIO_GP_4_10, GPIO_GP_4_11,
	GPIO_GP_4_12, GPIO_GP_4_13, GPIO_GP_4_14, GPIO_GP_4_15,
	GPIO_GP_4_16, GPIO_GP_4_17, GPIO_GP_4_18, GPIO_GP_4_19,
	GPIO_GP_4_20, GPIO_GP_4_21, GPIO_GP_4_22, GPIO_GP_4_23,
	GPIO_GP_4_24, GPIO_GP_4_25,

	GPIO_GP_5_0, GPIO_GP_5_1, GPIO_GP_5_2, GPIO_GP_5_3,
	GPIO_GP_5_4, GPIO_GP_5_5, GPIO_GP_5_6, GPIO_GP_5_7,
	GPIO_GP_5_8, GPIO_GP_5_9, GPIO_GP_5_10, GPIO_GP_5_11,
	GPIO_GP_5_12, GPIO_GP_5_13, GPIO_GP_5_14, GPIO_GP_5_15,
	GPIO_GP_5_16, GPIO_GP_5_17, GPIO_GP_5_18, GPIO_GP_5_19,
	GPIO_GP_5_20, GPIO_GP_5_21, GPIO_GP_5_22, GPIO_GP_5_23,
	GPIO_GP_5_24, GPIO_GP_5_25, GPIO_GP_5_26, GPIO_GP_5_27,
	GPIO_GP_5_28, GPIO_GP_5_29, GPIO_GP_5_30, GPIO_GP_5_31,

	GPIO_FN_USB0_PWEN, GPIO_FN_USB0_OVC, GPIO_FN_USB1_PWEN,
	GPIO_FN_USB1_OVC, GPIO_FN_CLKOUT, GPIO_FN_MMC0_CLK_SDHI1_CLK,
	GPIO_FN_MMC0_CMD_SDHI1_CMD, GPIO_FN_MMC0_D0_SDHI1_D0,
	GPIO_FN_MMC0_D1_SDHI1_D1, GPIO_FN_MMC0_D2_SDHI1_D2,
	GPIO_FN_MMC0_D3_SDHI1_D3, GPIO_FN_MMC0_D6, GPIO_FN_MMC0_D7,

	/* IPSR0 */
	GPIO_FN_SD0_CLK, GPIO_FN_SSI_SCK1_C, GPIO_FN_RX3_C, GPIO_FN_SD0_CMD,
	GPIO_FN_SSI_WS1_C, GPIO_FN_TX3_C, GPIO_FN_SD0_DATA0,
	GPIO_FN_SSI_SDATA1_C, GPIO_FN_RX4_E, GPIO_FN_SD0_DATA1,
	GPIO_FN_SSI_SCK0129_B, GPIO_FN_TX4_E, GPIO_FN_SD0_DATA2,
	GPIO_FN_SSI_WS0129_B, GPIO_FN_RX5_E, GPIO_FN_SD0_DATA3,
	GPIO_FN_SSI_SDATA0_B, GPIO_FN_TX5_E, GPIO_FN_SD0_CD,
	GPIO_FN_CAN0_RX_A, GPIO_FN_SD0_WP, GPIO_FN_IRQ7, GPIO_FN_CAN0_TX_A,

	/* IPSR1 */
	GPIO_FN_MMC0_D4, GPIO_FN_SD1_CD, GPIO_FN_MMC0_D5, GPIO_FN_SD1_WP,
	GPIO_FN_D0, GPIO_FN_RIF0_D0_A, GPIO_FN_SCL3_B, GPIO_FN_RX5_B,
	GPIO_FN_IRQ4, GPIO_FN_MSIOF2_RXD_C, GPIO_FN_SSI_SDATA5_B,
	GPIO_FN_D1, GPIO_FN_RIF0_D1_A, GPIO_FN_SDA3_B, GPIO_FN_TX5_B,
	GPIO_FN_MSIOF2_TXD_C, GPIO_FN_SSI_WS5_B, GPIO_FN_D2,
	GPIO_FN_RIF0_CLK_A, GPIO_FN_RX4_B, GPIO_FN_SCL0_D, GPIO_FN_PWM1_C,
	GPIO_FN_MSIOF2_SCK_C, GPIO_FN_SSI_SCK5_B, GPIO_FN_D3,
	GPIO_FN_RIF0_SYNC_A, GPIO_FN_TX4_B, GPIO_FN_SDA0_D,
	GPIO_FN_PWM0_A, GPIO_FN_MSIOF2_SYNC_C, GPIO_FN_D4, GPIO_FN_IRQ3,
	GPIO_FN_TCLK1_A, GPIO_FN_PWM6_C, GPIO_FN_TS_SDAT0_B, GPIO_FN_D5,
	GPIO_FN_HRX2, GPIO_FN_SCL1_B, GPIO_FN_PWM2_C, GPIO_FN_TCLK2_B,
	GPIO_FN_TS_SCK0_B,

	/* IPSR2 */
	GPIO_FN_D6, GPIO_FN_HTX2, GPIO_FN_SDA1_B, GPIO_FN_PWM4_C,
	GPIO_FN_TS_SDEN0_B, GPIO_FN_D7, GPIO_FN_HSCK2, GPIO_FN_SCIF1_SCK_C,
	GPIO_FN_IRQ6, GPIO_FN_PWM5_C, GPIO_FN_TS_SPSYNC0_B, GPIO_FN_D8,
	GPIO_FN_HCTS2_N, GPIO_FN_RX1_C, GPIO_FN_SCL1_D, GPIO_FN_PWM3_C,
	GPIO_FN_ADIDATA, GPIO_FN_D9, GPIO_FN_HRTS2_N, GPIO_FN_TX1_C,
	GPIO_FN_SDA1_D, GPIO_FN_ADICS_SAMP, GPIO_FN_D10, GPIO_FN_MSIOF2_RXD_A,
	GPIO_FN_HRX0_B, GPIO_FN_ADICLK, GPIO_FN_D11, GPIO_FN_MSIOF2_TXD_A,
	GPIO_FN_HTX0_B, GPIO_FN_ADICHS0, GPIO_FN_D12, GPIO_FN_MSIOF2_SCK_A,
	GPIO_FN_HSCK0, GPIO_FN_SPEEDIN_A, GPIO_FN_CAN_CLK_C, GPIO_FN_ADICHS1,
	GPIO_FN_D13, GPIO_FN_MSIOF2_SYNC_A, GPIO_FN_RX4_C, GPIO_FN_ADICHS2,

	/* IPSR3 */
	GPIO_FN_D14, GPIO_FN_MSIOF2_SS1_A, GPIO_FN_TX4_C, GPIO_FN_CAN1_RX_B,
	GPIO_FN_SPEEDIN_C, GPIO_FN_AVB_AVTP_CAPTURE_A, GPIO_FN_D15,
	GPIO_FN_MSIOF2_SS2_A, GPIO_FN_PWM4_A, GPIO_FN_CAN1_TX_B,
	GPIO_FN_IRQ2, GPIO_FN_AVB_AVTP_MATCH_A, GPIO_FN_QSPI0_SPCLK,
	GPIO_FN_WE0_N, GPIO_FN_QSPI0_MOSI_IO0, GPIO_FN_BS_N,
	GPIO_FN_QSPI0_MISO_IO1, GPIO_FN_RD_WR_N, GPIO_FN_QSPI0_IO2,
	GPIO_FN_CS0_N, GPIO_FN_QSPI0_IO3, GPIO_FN_RD_N, GPIO_FN_QSPI0_SSL,
	GPIO_FN_WE1_N,

	/* IPSR4 */
	GPIO_FN_EX_WAIT0, GPIO_FN_CAN_CLK_B, GPIO_FN_SCIF_CLK_A,
	GPIO_FN_PWMFSW0, GPIO_FN_DU0_DR0, GPIO_FN_LCDOUT16, GPIO_FN_RX5_C,
	GPIO_FN_SCL2_D, GPIO_FN_A0, GPIO_FN_DU0_DR1, GPIO_FN_LCDOUT17,
	GPIO_FN_TX5_C, GPIO_FN_SDA2_D, GPIO_FN_A1, GPIO_FN_DU0_DR2,
	GPIO_FN_LCDOUT18, GPIO_FN_RX0_D, GPIO_FN_SCL0_E, GPIO_FN_A2,
	GPIO_FN_DU0_DR3, GPIO_FN_LCDOUT19, GPIO_FN_TX0_D, GPIO_FN_SDA0_E,
	GPIO_FN_PWM0_B, GPIO_FN_A3, GPIO_FN_DU0_DR4, GPIO_FN_LCDOUT20,
	GPIO_FN_RX1_D, GPIO_FN_A4, GPIO_FN_DU0_DR5, GPIO_FN_LCDOUT21,
	GPIO_FN_TX1_D, GPIO_FN_PWM1_B, GPIO_FN_A5, GPIO_FN_DU0_DR6,
	GPIO_FN_LCDOUT22, GPIO_FN_RX2_C, GPIO_FN_A6,

	/* IPSR5 */
	GPIO_FN_DU0_DR7, GPIO_FN_LCDOUT23, GPIO_FN_TX2_C, GPIO_FN_PWM2_B,
	GPIO_FN_A7, GPIO_FN_DU0_DG0, GPIO_FN_LCDOUT8, GPIO_FN_RX3_B,
	GPIO_FN_SCL3_D, GPIO_FN_A8, GPIO_FN_DU0_DG1, GPIO_FN_LCDOUT9,
	GPIO_FN_TX3_B, GPIO_FN_SDA3_D, GPIO_FN_PWM3_B, GPIO_FN_A9,
	GPIO_FN_DU0_DG2, GPIO_FN_LCDOUT10, GPIO_FN_RX4_D, GPIO_FN_A10,
	GPIO_FN_DU0_DG3, GPIO_FN_LCDOUT11, GPIO_FN_TX4_D, GPIO_FN_PWM4_B,
	GPIO_FN_A11, GPIO_FN_DU0_DG4, GPIO_FN_LCDOUT12, GPIO_FN_HRX0_A,
	GPIO_FN_A12, GPIO_FN_DU0_DG5, GPIO_FN_LCDOUT13, GPIO_FN_HTX0_A,
	GPIO_FN_PWM5_B, GPIO_FN_A13, GPIO_FN_DU0_DG6, GPIO_FN_LCDOUT14,
	GPIO_FN_HRX1_C, GPIO_FN_A14,

	/* IPSR6 */
	GPIO_FN_DU0_DG7, GPIO_FN_LCDOUT15, GPIO_FN_HTX1_C, GPIO_FN_PWM6_B,
	GPIO_FN_A15, GPIO_FN_DU0_DB0, GPIO_FN_LCDOUT0, GPIO_FN_SCL4_D,
	GPIO_FN_CAN0_RX_C, GPIO_FN_A16, GPIO_FN_DU0_DB1, GPIO_FN_LCDOUT1,
	GPIO_FN_SDA4_D, GPIO_FN_CAN0_TX_C, GPIO_FN_A17, GPIO_FN_DU0_DB2,
	GPIO_FN_LCDOUT2, GPIO_FN_HCTS0_N, GPIO_FN_A18, GPIO_FN_DU0_DB3,
	GPIO_FN_LCDOUT3, GPIO_FN_HRTS0_N, GPIO_FN_A19, GPIO_FN_DU0_DB4,
	GPIO_FN_LCDOUT4, GPIO_FN_HCTS1_N_C, GPIO_FN_RIF0_CLK_B,
	GPIO_FN_A20, GPIO_FN_DU0_DB5, GPIO_FN_LCDOUT5, GPIO_FN_HRTS1_N_C,
	GPIO_FN_RIF0_SYNC_B, GPIO_FN_A21, GPIO_FN_DU0_DB6, GPIO_FN_LCDOUT6,
	GPIO_FN_RIF0_D0_B, GPIO_FN_A22,

	/* IPSR7 */
	GPIO_FN_DU0_DB7, GPIO_FN_LCDOUT7, GPIO_FN_RIF0_D1_B, GPIO_FN_A23,
	GPIO_FN_DU0_DOTCLKIN, GPIO_FN_QSTVA_QVS, GPIO_FN_A24,
	GPIO_FN_DU0_DOTCLKOUT0, GPIO_FN_QCLK, GPIO_FN_A25,
	GPIO_FN_DU0_DOTCLKOUT1, GPIO_FN_QSTVB_QVE, GPIO_FN_MSIOF2_RXD_B,
	GPIO_FN_CS1_N_A26, GPIO_FN_DU0_EXHSYNC_DU0_HSYNC, GPIO_FN_QSTH_QHS,
	GPIO_FN_MSIOF2_TXD_B, GPIO_FN_DREQ0_N,
	GPIO_FN_DU0_EXVSYNC_DU0_VSYNC, GPIO_FN_QSTB_QHE,
	GPIO_FN_MSIOF2_SYNC_B, GPIO_FN_DACK0,
	GPIO_FN_DU0_EXODDF_DU0_ODDF_DISP_CDE, GPIO_FN_QCPV_QDE,
	GPIO_FN_MSIOF2_SCK_B, GPIO_FN_DRACK0, GPIO_FN_DU0_DISP, GPIO_FN_QPOLA,
	GPIO_FN_CAN1_RX_C,

	/* IPSR8 */
	GPIO_FN_DU0_CDE, GPIO_FN_QPOLB, GPIO_FN_CAN1_TX_C, GPIO_FN_VI1_CLK,
	GPIO_FN_AVB_RX_CLK, GPIO_FN_ETH_REF_CLK, GPIO_FN_VI1_DATA0,
	GPIO_FN_AVB_RX_DV, GPIO_FN_ETH_CRS_DV, GPIO_FN_VI1_DATA1,
	GPIO_FN_AVB_RXD0, GPIO_FN_ETH_RXD0, GPIO_FN_VI1_DATA2,
	GPIO_FN_AVB_RXD1, GPIO_FN_ETH_RXD1, GPIO_FN_VI1_DATA3,
	GPIO_FN_AVB_RXD2, GPIO_FN_ETH_MDIO, GPIO_FN_VI1_DATA4,
	GPIO_FN_AVB_RXD3, GPIO_FN_ETH_RX_ER, GPIO_FN_VI1_DATA5,
	GPIO_FN_AVB_RXD4, GPIO_FN_ETH_LINK,

	/* IPSR9 */
	GPIO_FN_VI1_DATA6, GPIO_FN_AVB_RXD5, GPIO_FN_ETH_TXD1,
	GPIO_FN_VI1_DATA7, GPIO_FN_AVB_RXD6, GPIO_FN_ETH_TX_EN,
	GPIO_FN_VI1_CLKENB, GPIO_FN_SCL3_A, GPIO_FN_AVB_RXD7,
	GPIO_FN_ETH_MAGIC, GPIO_FN_VI1_FIELD, GPIO_FN_SDA3_A,
	GPIO_FN_AVB_RX_ER, GPIO_FN_ETH_TXD0, GPIO_FN_VI1_HSYNC_N,
	GPIO_FN_RX0_B, GPIO_FN_SCL0_C, GPIO_FN_AVB_GTXREFCLK,
	GPIO_FN_ETH_MDC, GPIO_FN_VI1_VSYNC_N, GPIO_FN_TX0_B,
	GPIO_FN_SDA0_C, GPIO_FN_AUDIO_CLKOUT_B, GPIO_FN_AVB_TX_CLK,
	GPIO_FN_VI1_DATA8, GPIO_FN_SCL2_B, GPIO_FN_AVB_TX_EN,
	GPIO_FN_VI1_DATA9, GPIO_FN_SDA2_B, GPIO_FN_AVB_TXD0,

	/* IPSR10 */
	GPIO_FN_VI1_DATA10, GPIO_FN_CAN0_RX_B, GPIO_FN_AVB_TXD1,
	GPIO_FN_VI1_DATA11, GPIO_FN_CAN0_TX_B, GPIO_FN_AVB_TXD2,
	GPIO_FN_AVB_TXD3, GPIO_FN_AUDIO_CLKA_B, GPIO_FN_SSI_SCK1_D,
	GPIO_FN_RX5_F, GPIO_FN_MSIOF0_RXD_B, GPIO_FN_AVB_TXD4,
	GPIO_FN_AUDIO_CLKB_B, GPIO_FN_SSI_WS1_D, GPIO_FN_TX5_F,
	GPIO_FN_MSIOF0_TXD_B, GPIO_FN_AVB_TXD5, GPIO_FN_SCIF_CLK_B,
	GPIO_FN_AUDIO_CLKC_B, GPIO_FN_SSI_SDATA1_D, GPIO_FN_MSIOF0_SCK_B,
	GPIO_FN_SCL0_A, GPIO_FN_RX0_C, GPIO_FN_PWM5_A, GPIO_FN_TCLK1_B,
	GPIO_FN_AVB_TXD6, GPIO_FN_CAN1_RX_D, GPIO_FN_MSIOF0_SYNC_B,
	GPIO_FN_SDA0_A, GPIO_FN_TX0_C, GPIO_FN_IRQ5, GPIO_FN_CAN_CLK_A,
	GPIO_FN_AVB_GTX_CLK, GPIO_FN_CAN1_TX_D, GPIO_FN_DVC_MUTE,
	GPIO_FN_SCL1_A, GPIO_FN_RX4_A, GPIO_FN_PWM5_D, GPIO_FN_DU1_DR0,
	GPIO_FN_SSI_SCK6_B, GPIO_FN_VI0_G0,

	/* IPSR11 */
	GPIO_FN_SDA1_A, GPIO_FN_TX4_A, GPIO_FN_DU1_DR1, GPIO_FN_SSI_WS6_B,
	GPIO_FN_VI0_G1, GPIO_FN_MSIOF0_RXD_A, GPIO_FN_RX5_A, GPIO_FN_SCL2_C,
	GPIO_FN_DU1_DR2, GPIO_FN_QSPI1_MOSI_IO0, GPIO_FN_SSI_SDATA6_B,
	GPIO_FN_VI0_G2, GPIO_FN_MSIOF0_TXD_A, GPIO_FN_TX5_A, GPIO_FN_SDA2_C,
	GPIO_FN_DU1_DR3, GPIO_FN_QSPI1_MISO_IO1, GPIO_FN_SSI_WS78_B,
	GPIO_FN_VI0_G3, GPIO_FN_MSIOF0_SCK_A, GPIO_FN_IRQ0,
	GPIO_FN_TS_SCK0_A, GPIO_FN_DU1_DR4, GPIO_FN_RIF1_CLK,
	GPIO_FN_QSPI1_SPCLK, GPIO_FN_SSI_SCK78_B, GPIO_FN_VI0_G4,
	GPIO_FN_MSIOF0_SYNC_A, GPIO_FN_PWM1_A, GPIO_FN_TS_SDAT0_A,
	GPIO_FN_DU1_DR5, GPIO_FN_RIF1_SYNC, GPIO_FN_QSPI1_IO2,
	GPIO_FN_SSI_SDATA7_B, GPIO_FN_MSIOF0_SS1_A, GPIO_FN_TS_SDEN0_A,
	GPIO_FN_DU1_DR6, GPIO_FN_RIF1_D0, GPIO_FN_QSPI1_IO3,
	GPIO_FN_SSI_SDATA8_B, GPIO_FN_MSIOF0_SS2_A, GPIO_FN_TS_SPSYNC0_A,
	GPIO_FN_DU1_DR7, GPIO_FN_RIF1_D1, GPIO_FN_QSPI1_SSL, GPIO_FN_HRX1_A,
	GPIO_FN_SCL4_A, GPIO_FN_PWM6_A, GPIO_FN_DU1_DG0, GPIO_FN_RX0_A,

	/* IPSR12 */
	GPIO_FN_HTX1_A, GPIO_FN_SDA4_A, GPIO_FN_DU1_DG1, GPIO_FN_TX0_A,
	GPIO_FN_HCTS1_N_A, GPIO_FN_PWM2_A, GPIO_FN_DU1_DG2, GPIO_FN_REMOCON_B,
	GPIO_FN_SPEEDIN_B, GPIO_FN_HRTS1_N_A, GPIO_FN_DU1_DG3,
	GPIO_FN_SSI_WS1_B, GPIO_FN_IRQ1, GPIO_FN_SD2_CLK, GPIO_FN_HSCK1,
	GPIO_FN_DU1_DG4, GPIO_FN_SSI_SCK1_B, GPIO_FN_SD2_CMD,
	GPIO_FN_SCIF1_SCK_A, GPIO_FN_TCLK2_A, GPIO_FN_DU1_DG5,
	GPIO_FN_SSI_SCK2_B, GPIO_FN_PWM3_A, GPIO_FN_SD2_DATA0, GPIO_FN_RX1_A,
	GPIO_FN_SCL1_E, GPIO_FN_DU1_DG6, GPIO_FN_SSI_SDATA1_B,
	GPIO_FN_SD2_DATA1, GPIO_FN_TX1_A, GPIO_FN_SDA1_E, GPIO_FN_DU1_DG7,
	GPIO_FN_SSI_WS2_B, GPIO_FN_SD2_DATA2, GPIO_FN_RX2_A, GPIO_FN_DU1_DB0,
	GPIO_FN_SSI_SDATA2_B,

	/* IPSR13 */
	GPIO_FN_SD2_DATA3, GPIO_FN_TX2_A, GPIO_FN_DU1_DB1, GPIO_FN_SSI_WS9_B,
	GPIO_FN_SD2_CD, GPIO_FN_SCIF2_SCK_A, GPIO_FN_DU1_DB2,
	GPIO_FN_SSI_SCK9_B, GPIO_FN_SD2_WP, GPIO_FN_SCIF3_SCK_A,
	GPIO_FN_DU1_DB3, GPIO_FN_SSI_SDATA9_B, GPIO_FN_RX3_A, GPIO_FN_SCL1_C,
	GPIO_FN_MSIOF1_RXD_B, GPIO_FN_DU1_DB4, GPIO_FN_AUDIO_CLKA_C,
	GPIO_FN_SSI_SDATA4_B, GPIO_FN_TX3_A, GPIO_FN_SDA1_C,
	GPIO_FN_MSIOF1_TXD_B, GPIO_FN_DU1_DB5, GPIO_FN_AUDIO_CLKB_C,
	GPIO_FN_SSI_WS4_B, GPIO_FN_SCL2_A, GPIO_FN_MSIOF1_SCK_B,
	GPIO_FN_DU1_DB6, GPIO_FN_AUDIO_CLKC_C, GPIO_FN_SSI_SCK4_B,
	GPIO_FN_SDA2_A, GPIO_FN_MSIOF1_SYNC_B, GPIO_FN_DU1_DB7,
	GPIO_FN_AUDIO_CLKOUT_C, GPIO_FN_SSI_SCK5_A, GPIO_FN_DU1_DOTCLKOUT1,

	/* IPSR14 */
	GPIO_FN_SSI_WS5_A, GPIO_FN_SCL3_C, GPIO_FN_DU1_DOTCLKIN,
	GPIO_FN_SSI_SDATA5_A, GPIO_FN_SDA3_C, GPIO_FN_DU1_DOTCLKOUT0,
	GPIO_FN_SSI_SCK6_A, GPIO_FN_DU1_EXODDF_DU1_ODDF_DISP_CDE,
	GPIO_FN_SSI_WS6_A, GPIO_FN_SCL4_C, GPIO_FN_DU1_EXHSYNC_DU1_HSYNC,
	GPIO_FN_SSI_SDATA6_A, GPIO_FN_SDA4_C, GPIO_FN_DU1_EXVSYNC_DU1_VSYNC,
	GPIO_FN_SSI_SCK78_A, GPIO_FN_SDA4_E, GPIO_FN_DU1_DISP,
	GPIO_FN_SSI_WS78_A, GPIO_FN_SCL4_E, GPIO_FN_DU1_CDE,
	GPIO_FN_SSI_SDATA7_A, GPIO_FN_IRQ8, GPIO_FN_AUDIO_CLKA_D,
	GPIO_FN_CAN_CLK_D, GPIO_FN_VI0_G5,

	/* IPSR15 */
	GPIO_FN_SSI_SCK0129_A, GPIO_FN_MSIOF1_RXD_A, GPIO_FN_RX5_D,
	GPIO_FN_VI0_G6, GPIO_FN_SSI_WS0129_A, GPIO_FN_MSIOF1_TXD_A,
	GPIO_FN_TX5_D, GPIO_FN_VI0_G7, GPIO_FN_SSI_SDATA0_A,
	GPIO_FN_MSIOF1_SYNC_A, GPIO_FN_PWM0_C, GPIO_FN_VI0_R0,
	GPIO_FN_SSI_SCK34, GPIO_FN_MSIOF1_SCK_A, GPIO_FN_AVB_MDC,
	GPIO_FN_DACK1, GPIO_FN_VI0_R1, GPIO_FN_SSI_WS34,
	GPIO_FN_MSIOF1_SS1_A, GPIO_FN_AVB_MDIO, GPIO_FN_CAN1_RX_A,
	GPIO_FN_DREQ1_N, GPIO_FN_VI0_R2, GPIO_FN_SSI_SDATA3,
	GPIO_FN_MSIOF1_SS2_A, GPIO_FN_AVB_LINK, GPIO_FN_CAN1_TX_A,
	GPIO_FN_DREQ2_N, GPIO_FN_VI0_R3, GPIO_FN_SSI_SCK4_A,
	GPIO_FN_AVB_MAGIC, GPIO_FN_VI0_R4, GPIO_FN_SSI_WS4_A,
	GPIO_FN_AVB_PHY_INT, GPIO_FN_VI0_R5,

	/* IPSR16 */
	GPIO_FN_SSI_SDATA4_A, GPIO_FN_AVB_CRS, GPIO_FN_VI0_R6,
	GPIO_FN_SSI_SCK1_A, GPIO_FN_SCIF1_SCK_B, GPIO_FN_PWM1_D,
	GPIO_FN_IRQ9, GPIO_FN_REMOCON_A, GPIO_FN_DACK2, GPIO_FN_VI0_CLK,
	GPIO_FN_AVB_COL, GPIO_FN_SSI_SDATA8_A, GPIO_FN_RX1_B,
	GPIO_FN_CAN0_RX_D, GPIO_FN_AVB_AVTP_CAPTURE_B, GPIO_FN_VI0_R7,
	GPIO_FN_SSI_WS1_A, GPIO_FN_TX1_B, GPIO_FN_CAN0_TX_D,
	GPIO_FN_AVB_AVTP_MATCH_B, GPIO_FN_VI0_DATA0_VI0_B0,
	GPIO_FN_SSI_SDATA1_A, GPIO_FN_HRX1_B, GPIO_FN_VI0_DATA1_VI0_B1,
	GPIO_FN_SSI_SCK2_A, GPIO_FN_HTX1_B, GPIO_FN_AVB_TXD7,
	GPIO_FN_VI0_DATA2_VI0_B2, GPIO_FN_SSI_WS2_A, GPIO_FN_HCTS1_N_B,
	GPIO_FN_AVB_TX_ER, GPIO_FN_VI0_DATA3_VI0_B3, GPIO_FN_SSI_SDATA2_A,
	GPIO_FN_HRTS1_N_B, GPIO_FN_VI0_DATA4_VI0_B4,

	/* IPSR17 */
	GPIO_FN_SSI_SCK9_A, GPIO_FN_RX2_B, GPIO_FN_SCL3_E, GPIO_FN_EX_WAIT1,
	GPIO_FN_VI0_DATA5_VI0_B5, GPIO_FN_SSI_WS9_A, GPIO_FN_TX2_B,
	GPIO_FN_SDA3_E, GPIO_FN_VI0_DATA6_VI0_B6, GPIO_FN_SSI_SDATA9_A,
	GPIO_FN_SCIF2_SCK_B, GPIO_FN_PWM2_D, GPIO_FN_VI0_DATA7_VI0_B7,
	GPIO_FN_AUDIO_CLKA_A, GPIO_FN_SCL0_B, GPIO_FN_TS_SDAT0_C,
	GPIO_FN_TANS1, GPIO_FN_VI0_CLKENB, GPIO_FN_AUDIO_CLKB_A,
	GPIO_FN_SDA0_B, GPIO_FN_TS_SCK0_C, GPIO_FN_TANS2, GPIO_FN_VI0_FIELD,
	GPIO_FN_AUDIO_CLKC_A, GPIO_FN_SCL4_B, GPIO_FN_TS_SDEN0_C,
	GPIO_FN_VI0_HSYNC_N, GPIO_FN_AUDIO_CLKOUT_A, GPIO_FN_SDA4_B,
	GPIO_FN_TS_SPSYNC0_C, GPIO_FN_VI0_VSYNC_N,
};

#endif /* __ASM_R8A7794X_H__ */
