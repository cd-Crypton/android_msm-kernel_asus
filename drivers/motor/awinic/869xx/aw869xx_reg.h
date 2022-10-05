#ifndef _AW869XX_REG_H_
#define _AW869XX_REG_H_

/********************************************
 * Register List
 *******************************************/

#define AW869XX_REG_ID		0x00
#define AW869XX_REG_SYSST	0x01
#define AW869XX_REG_SYSINT	0x02
#define AW869XX_REG_SYSINTM	0x03
#define AW869XX_REG_SYSST2	0x04
#define AW869XX_REG_SYSER	0x05
#define AW869XX_REG_PLAYCFG1	0x06
#define AW869XX_REG_PLAYCFG2	0x07
#define AW869XX_REG_PLAYCFG3	0x08
#define AW869XX_REG_PLAYCFG4	0x09
#define AW869XX_REG_WAVCFG1	0x0A
#define AW869XX_REG_WAVCFG2	0x0B
#define AW869XX_REG_WAVCFG3	0x0C
#define AW869XX_REG_WAVCFG4	0x0D
#define AW869XX_REG_WAVCFG5	0x0E
#define AW869XX_REG_WAVCFG6	0x0F
#define AW869XX_REG_WAVCFG7	0x10
#define AW869XX_REG_WAVCFG8	0x11
#define AW869XX_REG_WAVCFG9	0x12
#define AW869XX_REG_WAVCFG10	0x13
#define AW869XX_REG_WAVCFG11	0x14
#define AW869XX_REG_WAVCFG12	0x15
#define AW869XX_REG_WAVCFG13	0x16
#define AW869XX_REG_WAVCFG14	0x17
#define AW869XX_REG_CONTCFG1	0x18
#define AW869XX_REG_CONTCFG2	0x19
#define AW869XX_REG_CONTCFG3	0x1A
#define AW869XX_REG_CONTCFG4	0x1B
#define AW869XX_REG_CONTCFG5	0x1C
#define AW869XX_REG_CONTCFG6	0x1D
#define AW869XX_REG_CONTCFG7	0x1E
#define AW869XX_REG_CONTCFG8	0x1F
#define AW869XX_REG_CONTCFG9	0x20
#define AW869XX_REG_CONTCFG10	0x21
#define AW869XX_REG_CONTCFG11	0x22
#define AW869XX_REG_CONTCFG12	0x23
#define AW869XX_REG_CONTCFG13	0x24
#define AW869XX_REG_CONTRD14	0x25
#define AW869XX_REG_CONTRD15	0x26
#define AW869XX_REG_CONTRD16	0x27
#define AW869XX_REG_CONTRD17	0x28
#define AW869XX_REG_CONTRD18	0x29
#define AW869XX_REG_CONTRD19	0x2A
#define AW869XX_REG_CONTRD20	0x2B
#define AW869XX_REG_CONTRD21	0x2C
#define AW869XX_REG_RTPCFG1	0x2D
#define AW869XX_REG_RTPCFG2	0x2E
#define AW869XX_REG_RTPCFG3	0x2F
#define AW869XX_REG_RTPCFG4	0x30
#define AW869XX_REG_RTPCFG5	0x31
#define AW869XX_REG_RTPDATA	0x32
#define AW869XX_REG_TRGCFG1	0x33
#define AW869XX_REG_TRGCFG2	0x34
#define AW869XX_REG_TRGCFG3	0x35
#define AW869XX_REG_TRGCFG4	0x36
#define AW869XX_REG_TRGCFG5	0x37
#define AW869XX_REG_TRGCFG6	0x38
#define AW869XX_REG_TRGCFG7	0x39
#define AW869XX_REG_TRGCFG8	0x3A
#define AW869XX_REG_GLBCFG1	0x3B
#define AW869XX_REG_GLBCFG2	0x3C
#define AW869XX_REG_GLBCFG3	0x3D
#define AW869XX_REG_GLBCFG4	0x3E
#define AW869XX_REG_GLBRD5	0x3F
#define AW869XX_REG_RAMADDRH	0x40
#define AW869XX_REG_RAMADDRL	0x41
#define AW869XX_REG_RAMDATA	0x42
#define AW869XX_REG_SYSCTRL1	0x43
#define AW869XX_REG_SYSCTRL2	0x44
#define AW869XX_REG_SYSCTRL3	0x45
#define AW869XX_REG_SYSCTRL4	0x46
#define AW869XX_REG_SYSCTRL5	0x47
#define AW869XX_REG_SYSCTRL6	0x48
#define AW869XX_REG_SYSCTRL7	0x49
#define AW869XX_REG_I2SCFG1	0x4A
#define AW869XX_REG_I2SCFG2	0x4B
#define AW869XX_REG_PWMCFG1	0x4C
#define AW869XX_REG_PWMCFG2	0x4D
#define AW869XX_REG_PWMCFG3	0x4E
#define AW869XX_REG_PWMCFG4	0x4F
#define AW869XX_REG_TMCFG	0x50
#define AW869XX_REG_DETCFG1	0x51
#define AW869XX_REG_DETCFG2	0x52
#define AW869XX_REG_DET_RL	0x53
#define AW869XX_REG_DET_OS	0x54
#define AW869XX_REG_DET_VBAT	0x55
#define AW869XX_REG_DET_TEST	0x56
#define AW869XX_REG_DET_LO	0x57
#define AW869XX_REG_TRIMCFG1	0x58
#define AW869XX_REG_TRIMCFG2	0x59
#define AW869XX_REG_TRIMCFG3	0x5A
#define AW869XX_REG_TRIMCFG4	0x5B
#define AW869XX_REG_PLLCFG1	0x68
#define AW869XX_REG_PLLCFG2	0x69
#define AW869XX_REG_HDRVCFG1	0x6A
#define AW869XX_REG_IOCFG1	0x6B
#define AW869XX_REG_BEMFCFG1	0x6C
#define AW869XX_REG_BSTCFG1	0x6D
#define AW869XX_REG_BSTCFG2	0x6E
#define AW869XX_REG_BSTCFG3	0x6F
#define AW869XX_REG_BSTCFG4	0x70
#define AW869XX_REG_BSTCFG5	0x71
#define AW869XX_REG_CPCFG1	0x72
#define AW869XX_REG_LDOCFG1	0x73
#define AW869XX_REG_OCCFG1	0x74
#define AW869XX_REG_ADCCFG1	0x75
#define AW869XX_REG_D2SCFG1	0x76

/********************************************
 * Register Access
 *******************************************/
#define REG_NONE_ACCESS		0
#define REG_RD_ACCESS		(1 << 0)
#define REG_WR_ACCESS		(1 << 1)
#define AW869XX_REG_MAX		0xff

const unsigned char aw869xx_reg_access[AW869XX_REG_MAX] = {
	[AW869XX_REG_ID] = REG_RD_ACCESS,
	[AW869XX_REG_SYSST] = REG_RD_ACCESS,
	[AW869XX_REG_SYSINT] = REG_RD_ACCESS,
	[AW869XX_REG_SYSINTM] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_SYSST2] = REG_RD_ACCESS,
	[AW869XX_REG_SYSER] = REG_RD_ACCESS,
	[AW869XX_REG_PLAYCFG1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_PLAYCFG2] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_PLAYCFG3] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_PLAYCFG4] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_WAVCFG1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_WAVCFG2] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_WAVCFG3] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_WAVCFG4] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_WAVCFG5] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_WAVCFG6] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_WAVCFG7] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_WAVCFG8] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_WAVCFG9] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_WAVCFG10] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_WAVCFG11] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_WAVCFG12] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_WAVCFG13] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_WAVCFG14] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_CONTCFG1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_CONTCFG2] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_CONTCFG3] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_CONTCFG4] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_CONTCFG5] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_CONTCFG6] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_CONTCFG7] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_CONTCFG8] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_CONTCFG9] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_CONTCFG10] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_CONTCFG11] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_CONTCFG12] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_CONTCFG13] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_CONTRD14] = REG_RD_ACCESS,
	[AW869XX_REG_CONTRD15] = REG_RD_ACCESS,
	[AW869XX_REG_CONTRD16] = REG_RD_ACCESS,
	[AW869XX_REG_CONTRD17] = REG_RD_ACCESS,
	[AW869XX_REG_CONTRD18] = REG_RD_ACCESS,
	[AW869XX_REG_CONTRD19] = REG_RD_ACCESS,
	[AW869XX_REG_CONTRD20] = REG_RD_ACCESS,
	[AW869XX_REG_CONTRD21] = REG_RD_ACCESS,
	[AW869XX_REG_RTPCFG1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_RTPCFG2] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_RTPCFG3] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_RTPCFG4] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_RTPCFG5] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_RTPDATA] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_TRGCFG1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_TRGCFG2] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_TRGCFG3] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_TRGCFG4] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_TRGCFG5] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_TRGCFG6] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_TRGCFG7] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_TRGCFG8] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_GLBCFG1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_GLBCFG2] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_GLBCFG3] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_GLBCFG4] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_GLBRD5] = REG_RD_ACCESS,
	[AW869XX_REG_RAMADDRH] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_RAMADDRL] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_RAMDATA] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_SYSCTRL1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_SYSCTRL2] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_SYSCTRL3] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_SYSCTRL4] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_SYSCTRL5] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_SYSCTRL6] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_SYSCTRL7] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_I2SCFG1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_I2SCFG2] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_PWMCFG1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_PWMCFG2] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_PWMCFG3] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_PWMCFG4] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_DETCFG1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_DETCFG2] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_DET_RL] = REG_RD_ACCESS,
	[AW869XX_REG_DET_OS] = REG_RD_ACCESS,
	[AW869XX_REG_DET_VBAT] = REG_RD_ACCESS,
	[AW869XX_REG_DET_TEST] = REG_RD_ACCESS,
	[AW869XX_REG_DET_LO] = REG_RD_ACCESS,
	[AW869XX_REG_TRIMCFG1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_TRIMCFG2] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_TRIMCFG3] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_TRIMCFG4] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_PLLCFG1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_PLLCFG2] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_HDRVCFG1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_IOCFG1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_BEMFCFG1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_BSTCFG1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_BSTCFG2] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_BSTCFG3] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_BSTCFG4] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_BSTCFG5] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_CPCFG1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_LDOCFG1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_OCCFG1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_ADCCFG1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW869XX_REG_D2SCFG1] = REG_RD_ACCESS | REG_WR_ACCESS,

};

/******************************************************
 * Register Detail
 *****************************************************/
/* SYSST: reg 0x01 RO */
#define AW869XX_BIT_SYSST_BST_SCPS			(1<<7)
#define AW869XX_BIT_SYSST_BST_OVPS			(1<<6)
#define AW869XX_BIT_SYSST_UVLS				(1<<5)
#define AW869XX_BIT_SYSST_FF_AES			(1<<4)
#define AW869XX_BIT_SYSST_FF_AFS			(1<<3)
#define AW869XX_BIT_SYSST_OCDS				(1<<2)
#define AW869XX_BIT_SYSST_OTS				(1<<1)
#define AW869XX_BIT_SYSST_DONES				(1<<0)

/* SYSINT: reg 0x02 RC */
#define AW869XX_BIT_SYSINT_BST_SCPI			(1<<7)
#define AW869XX_BIT_SYSINT_BST_OVPI			(1<<6)
#define AW869XX_BIT_SYSINT_UVLI				(1<<5)
#define AW869XX_BIT_SYSINT_FF_AEI			(1<<4)
#define AW869XX_BIT_SYSINT_FF_AFI			(1<<3)
#define AW869XX_BIT_SYSINT_OCDI				(1<<2)
#define AW869XX_BIT_SYSINT_OTI				(1<<1)
#define AW869XX_BIT_SYSINT_DONEI			(1<<0)

/* SYSINTM: reg 0x03 RW */
#define AW869XX_BIT_SYSINTM_BST_SCPM_MASK		(~(1<<7))
#define AW869XX_BIT_SYSINTM_BST_SCPM_OFF		(1<<7)
#define AW869XX_BIT_SYSINTM_BST_SCPM_ON			(0<<7)
#define AW869XX_BIT_SYSINTM_BST_OVPM_MASK		(~(1<<6))
#define AW869XX_BIT_SYSINTM_BST_OVPM_OFF		(1<<6)
#define AW869XX_BIT_SYSINTM_BST_OVPM_ON			(0<<6)
#define AW869XX_BIT_SYSINTM_UVLM_MASK			(~(1<<5))
#define AW869XX_BIT_SYSINTM_UVLM_OFF			(1<<5)
#define AW869XX_BIT_SYSINTM_UVLM_ON			(0<<5)
#define AW869XX_BIT_SYSINTM_FF_AEM_MASK			(~(1<<4))
#define AW869XX_BIT_SYSINTM_FF_AEM_OFF			(1<<4)
#define AW869XX_BIT_SYSINTM_FF_AEM_ON			(0<<4)
#define AW869XX_BIT_SYSINTM_FF_AFM_MASK			(~(1<<3))
#define AW869XX_BIT_SYSINTM_FF_AFM_OFF			(1<<3)
#define AW869XX_BIT_SYSINTM_FF_AFM_ON			(0<<3)
#define AW869XX_BIT_SYSINTM_OCDM_MASK			(~(1<<2))
#define AW869XX_BIT_SYSINTM_OCDM_OFF			(1<<2)
#define AW869XX_BIT_SYSINTM_OCDM_ON			(0<<2)
#define AW869XX_BIT_SYSINTM_OTM_MASK			(~(1<<1))
#define AW869XX_BIT_SYSINTM_OTM_OFF			(1<<1)
#define AW869XX_BIT_SYSINTM_OTM_ON			(0<<1)
#define AW869XX_BIT_SYSINTM_DONEM_MASK			(~(1<<0))
#define AW869XX_BIT_SYSINTM_DONEM_OFF			(1<<0)
#define AW869XX_BIT_SYSINTM_DONEM_ON			(0<<0)

/* SYSST2: reg 0x04 RO */
#define AW869XX_BIT_SYSST2_RAM_ADDR_ER			(1<<7)
#define AW869XX_BIT_SYSST2_TRG_ADDR_ER			(1<<6)
#define AW869XX_BIT_SYSST2_PLL_REF_OK			(1<<5)
#define AW869XX_BIT_SYSST2_BST_OK			(1<<4)
#define AW869XX_BIT_SYSST2_VBG_OK			(1<<3)
#define AW869XX_BIT_SYSST2_LDO_OK			(1<<2)
#define AW869XX_BIT_SYSST2_FF_FULL			(1<<1)
#define AW869XX_BIT_SYSST2_FF_EMPTY			(1<<0)

/* SYSER: reg 0x05 RC */
#define AW869XX_BIT_SYSER_I2S_ERR			(1<<7)
#define AW869XX_BIT_SYSER_TRIG1_EVENT			(1<<6)
#define AW869XX_BIT_SYSER_TRIG2_EVENT			(1<<5)
#define AW869XX_BIT_SYSER_TRIG3_EVENT			(1<<4)
#define AW869XX_BIT_SYSER_OV				(1<<3)
#define AW869XX_BIT_SYSER_ADDR_ER			(1<<2)
#define AW869XX_BIT_SYSER_FF_ER				(1<<1)
#define AW869XX_BIT_SYSER_PLL_REF_ER			(1<<0)

/* PLAYCFG1: reg 0x06 RW */
#define AW869XX_BIT_PLAYCFG1_BST_MODE_MASK		(~(1<<6))
#define AW869XX_BIT_PLAYCFG1_BST_MODE_BYPASS		(0<<6)
#define AW869XX_BIT_PLAYCFG1_BST_MODE_BOOST		(1<<6)
#define AW869XX_BIT_PLAYCFG1_BST_VOUT_RDA_MASK		(~(63<<0))

/* PLAYCFG2: reg 0x07 RW */
/* GAIN */

/* PLAYCFG3: reg 0x08 RW */
#define AW869XX_BIT_PLAYCFG3_AUTO_BST_MASK		(~(1<<6))
#define AW869XX_BIT_PLAYCFG3_AUTO_BST_ENABLE		(1<<6)
#define AW869XX_BIT_PLAYCFG3_AUTO_BST_DISABLE		(0<<6)
#define AW869XX_BIT_PLAYCFG3_STOP_MODE_MASK		(~(1<<5))
#define AW869XX_BIT_PLAYCFG3_STOP_MODE_NOW		(1<<5)
#define AW869XX_BIT_PLAYCFG3_STOP_MODE_LATER		(0<<5)
#define AW869XX_BIT_PLAYCFG3_BRK_EN_MASK		(~(1<<2))
#define AW869XX_BIT_PLAYCFG3_BRK_ENABLE			(1<<2)
#define AW869XX_BIT_PLAYCFG3_BRK_DISABLE		(0<<2)
#define AW869XX_BIT_PLAYCFG3_PLAY_MODE_MASK		(~(3<<0))
#define AW869XX_BIT_PLAYCFG3_PLAY_MODE_STOP		(3<<0)
#define AW869XX_BIT_PLAYCFG3_PLAY_MODE_CONT		(2<<0)
#define AW869XX_BIT_PLAYCFG3_PLAY_MODE_RTP		(1<<0)
#define AW869XX_BIT_PLAYCFG3_PLAY_MODE_RAM		(0<<0)

/* PLAYCFG4: reg 0x09 RW */
#define AW869XX_BIT_PLAYCFG4_STOP_MASK			(~(1<<1))
#define AW869XX_BIT_PLAYCFG4_STOP_ON			(1<<1)
#define AW869XX_BIT_PLAYCFG4_STOP_OFF			(0<<1)
#define AW869XX_BIT_PLAYCFG4_GO_MASK			(~(1<<0))
#define AW869XX_BIT_PLAYCFG4_GO_ON			(1<<0)
#define AW869XX_BIT_PLAYCFG4_GO_OFF			(0<<0)

/* WAVCFG1-8: reg 0x0A - reg 0x11 RW */
#define AW869XX_BIT_WAVCFG_SEQWAIT_MASK			(~(1<<7))
#define AW869XX_BIT_WAVCFG_SEQWAIT_TIME			(1<<7)
#define AW869XX_BIT_WAVCFG_SEQWAIT_NUMBER		(0<<7)

/* WAVCFG9-12: reg 0x12 - reg 0x15 RW */
#define AW869XX_BIT_WAVLOOP_SEQ_ODD_MASK		(~(0x0F<<4))
#define AW869XX_BIT_WAVLOOP_SEQ_ODD_INIFINITELY		(0x0F<<4)
#define AW869XX_BIT_WAVLOOP_SEQ_EVEN_MASK		(~(0x0F<<0))
#define AW869XX_BIT_WAVLOOP_SEQ_EVEN_INIFINITELY	(0x0F<<0)
#define AW869XX_BIT_WAVLOOP_INIFINITELY			(0x0F<<0)

/* WAVCFG9: reg 0x12 RW */
#define AW869XX_BIT_WAVCFG9_SEQ1LOOP_MASK		(~(0x0F<<4))
#define AW869XX_BIT_WAVCFG9_SEQ1LOOP_INIFINITELY	(0x0F<<4)
#define AW869XX_BIT_WAVCFG9_SEQ2LOOP_MASK		(~(0x0F<<0))
#define AW869XX_BIT_WAVCFG9_SEQ2LOOP_INIFINITELY	(0x0F<<0)

/* WAVCFG10: reg 0x13 RW */
#define AW869XX_BIT_WAVCFG10_SEQ3LOOP_MASK		(~(0x0F<<4))
#define AW869XX_BIT_WAVCFG10_SEQ3LOOP_INIFINITELY	(0x0F<<4)
#define AW869XX_BIT_WAVCFG10_SEQ4LOOP_MASK		(~(0x0F<<0))
#define AW869XX_BIT_WAVCFG10_SEQ4LOOP_INIFINITELY	(0x0F<<0)

/* WAVCFG11: reg 0x14 RW */
#define AW869XX_BIT_WAVCFG11_SEQ5LOOP_MASK		(~(0x0F<<4))
#define AW869XX_BIT_WAVCFG11_SEQ5LOOP_INIFINITELY	(0x0F<<4)
#define AW869XX_BIT_WAVCFG11_SEQ6LOOP_MASK		(~(0x0F<<0))
#define AW869XX_BIT_WAVCFG11_SEQ6LOOP_INIFINITELY	(0x0F<<0)

/* WAVCFG12: reg 0x15 RW */
#define AW869XX_BIT_WAVCFG12_SEQ7LOOP_MASK		(~(0x0F<<4))
#define AW869XX_BIT_WAVCFG12_SEQ7LOOP_INIFINITELY	(0x0F<<4)
#define AW869XX_BIT_WAVCFG12_SEQ8LOOP_MASK		(~(0x0F<<0))
#define AW869XX_BIT_WAVCFG12_SEQ8LOOP_INIFINITELY	(0x0F<<0)

/* WAVCFG13: reg 0x16 RW */
#define AW869XX_BIT_WAVCFG13_WAITSLOT_MASK		(~(3<<5))
#define AW869XX_BIT_WAVCFG13_WAITSLOT_DIV_1		(0<<5)
#define AW869XX_BIT_WAVCFG13_WAITSLOT_DIV_8		(1<<5)
#define AW869XX_BIT_WAVCFG13_WAITSLOT_DIV_64		(2<<5)
#define AW869XX_BIT_WAVCFG13_WAITSLOT_DIV_512		(3<<5)
#define AW869XX_BIT_WAVCFG13_AUTO_MD_MASK		(~(1<<4))
#define AW869XX_BIT_WAVCFG13_AUTO_MD_CONT_MODE		(1<<4)
#define AW869XX_BIT_WAVCFG13_AUTO_MD_SIN_WAV		(0<<4)
#define AW869XX_BIT_WAVCFG13_MAINLOOP_MASK		(~(0x0F<<0))
#define AW869XX_BIT_WAVCFG13_MAINLOOP_INIFINITELY	(0x0F<<0)

/* WAVCFG14: reg 0x17 RW */
/* AUTO_WAV */

/***************** CONT *****************/
/* CONTCFG1: reg 0x18 RW */
#define AW869XX_BIT_CONTCFG1_EDGE_FRE_MASK		(~(0x0F<<4))
#define AW869XX_BIT_CONTCFG1_EN_F0_DET_MASK		(~(1<<3))
#define AW869XX_BIT_CONTCFG1_F0_DET_ENABLE		(1<<3)
#define AW869XX_BIT_CONTCFG1_F0_DET_DISABLE		(0<<3)
#define AW869XX_BIT_CONTCFG1_MBRK_MASK			(~(1<<2))
#define AW869XX_BIT_CONTCFG1_MBRK_ENABLE		(1<<2)
#define AW869XX_BIT_CONTCFG1_MBRK_DISABLE		(0<<2)
#define AW869XX_BIT_CONTCFG1_BRK_BST_MD_MASK		(~(1<<1))
#define AW869XX_BIT_CONTCFG1_BRK_BST_MD_ENABLE		(1<<1)
#define AW869XX_BIT_CONTCFG1_BRK_BST_MD_DISABLE		(0<<1)
#define AW869XX_BIT_CONTCFG1_SIN_MODE_MASK		(~(1<<0))
#define AW869XX_BIT_CONTCFG1_SIN_MODE_COS		(1<<0)
#define AW869XX_BIT_CONTCFG1_SIN_MODE_SINE		(0<<0)

/* CONTCFG2: reg 0x19 RW */
/* F_PRE */

/* CONTCFG3: reg 0x1A RW */
/* DRV_WIDTH */

/* CONTCFG4: reg 0x1B RW */
/* WAIT_NUM */

/* CONTCFG5: reg 0x1C RW */
#define AW869XX_BIT_CONTCFG5_BST_BRK_GAIN_MASK		(~(0x0F<<4))
#define AW869XX_BIT_CONTCFG5_BRK_GAIN_MASK		(~(0x0F<<0))

/* CONTCFG6: reg 0x1D RW */
#define AW869XX_BIT_CONTCFG6_TRACK_EN_MASK		(~(1<<7))
#define AW869XX_BIT_CONTCFG6_TRACK_ENABLE		(1<<7)
#define AW869XX_BIT_CONTCFG6_TRACK_DISABLE		(0<<7)
#define AW869XX_BIT_CONTCFG6_DRV1_LVL_MASK		(~(0x7F<<0))

/* CONTCFG7: reg 0x1E RW */
#define AW869XX_BIT_CONTCFG7_DRV2_LVL_MASK		(~(0x7F<<0))

/* CONTCFG8: reg 0x1F RW */
/* DRV1_TIME */

/* CONTCFG9: reg 0x20 RW */
/* DRV2_TIME */

/* CONTCFG10: reg 0x21 RW */
/* BRK_TIME */

/* CONTCFG11: reg 0x22 RW */
/* TRACK_MARGIN */

/* CONTCFG12: reg 0x23 RW */
/* MBRK_TH */

/* CONTCFG13: reg 0x24 RW */
#define AW869XX_BIT_CONTCFG13_TSET_MASK			(~(0x0F<<4))
#define AW869XX_BIT_CONTCFG13_BEME_SET_MASK		(~(0x0F<<0))

/* CONTRD14: reg 0x25 RO */
/* F_LRA_F0_H */

/* CONTRD15: reg 0x26 RO */
/* F_LRA_F0_L */

/* CONTRD16: reg 0x27 RO */
/* CONT_F0_H */

/* CONTRD17: reg 0x28 RO */
/* CONT_F0_L */

/* CONTRD18: reg 0x29 RO */
/* ACCELERATION */

/* CONTRD19: reg 0x2A RO */
/* BEMF_PEAK1 */

/* CONTRD20: reg 0x2B RO */
/* BEMF_PEAK2 */

/* CONTRD21: reg 0x2C RO */
/* BEMF_PEAK3 */

/***************** RTP *****************/
/* RTPCFG1: reg 0x2D RW */
/* BASE_ADDR_H */

/* RTPCFG2: reg 0x2E RW */
/* BASE_ADDR_L */

/* RTPCFG3: reg 0x2F RW */
#define AW869XX_BIT_RTPCFG3_FIFO_AEH_MASK		(~(0x0F<<4))
#define AW869XX_BIT_RTPCFG3_FIFO_AFH_MASK		(~(0x0F<<0))

/* RTPCFG4: reg 0x30 RW */
/* FIFO_AEL */

/* RTPCFG5: reg 0x31 RW */
/* FIFO_AFL */

/* RTPDATA: reg 0x32 RW */
/* FIFO_AFL */

/***************** TRIGGER *****************/
#define AW869XX_BIT_TRG_ENABLE_MASK		(~(1<<7))
#define AW869XX_BIT_TRG_ENABLE			(1<<7)
#define AW869XX_BIT_TRG_DISABLE			(0<<7)
#define AW869XX_BIT_TRG_SEQ_MASK		(~(0x7F<<0))

/* TRGCFG1: reg 0x33 RW */
#define AW869XX_BIT_TRGCFG1_TRG1_POS_MASK		(~(1<<7))
#define AW869XX_BIT_TRGCFG1_TRG1_POS_ENABLE		(1<<7)
#define AW869XX_BIT_TRGCFG1_TRG1_POS_DISABLE		(0<<7)
#define AW869XX_BIT_TRGCFG1_TRG1SEQ_P_MASK		(~(0x7F<<0))

/* TRGCFG2: reg 0x34 RW */
#define AW869XX_BIT_TRGCFG2_TRG2_POS_MASK		(~(1<<7))
#define AW869XX_BIT_TRGCFG2_TRG2_POS_ENABLE		(1<<7)
#define AW869XX_BIT_TRGCFG2_TRG2_POS_DISABLE		(0<<7)
#define AW869XX_BIT_TRGCFG2_TRG2SEQ_P_MASK		(~(0x7F<<0))

/* TRGCFG3: reg 0x35 RW */
#define AW869XX_BIT_TRGCFG3_TRG3_POS_MASK		(~(1<<7))
#define AW869XX_BIT_TRGCFG3_TRG3_POS_ENABLE		(1<<7)
#define AW869XX_BIT_TRGCFG3_TRG3_POS_DISABLE		(0<<7)
#define AW869XX_BIT_TRGCFG3_TRG3SEQ_P_MASK		(~(0x7F<<0))

/* TRGCFG4: reg 0x36 RW */
#define AW869XX_BIT_TRGCFG4_TRG1_NEG_MASK		(~(1<<7))
#define AW869XX_BIT_TRGCFG4_TRG1_NEG_ENABLE		(1<<7)
#define AW869XX_BIT_TRGCFG4_TRG1_NEG_DISABLE		(0<<7)
#define AW869XX_BIT_TRGCFG4_TRG1SEQ_N_MASK		(~(0x7F<<0))

/* TRGCFG5: reg 0x37 RW */
#define AW869XX_BIT_TRGCFG5_TRG2_NEG_MASK		(~(1<<7))
#define AW869XX_BIT_TRGCFG5_TRG2_NEG_ENABLE		(1<<7)
#define AW869XX_BIT_TRGCFG5_TRG2_NEG_DISABLE		(0<<7)
#define AW869XX_BIT_TRGCFG5_TRG2SEQ_N_MASK		(~(0x7F<<0))

/* TRGCFG6: reg 0x38 RW */
#define AW869XX_BIT_TRGCFG6_TRG3_NEG_MASK		(~(1<<7))
#define AW869XX_BIT_TRGCFG6_TRG3_NEG_ENABLE		(1<<7)
#define AW869XX_BIT_TRGCFG6_TRG3_NEG_DISABLE		(0<<7)
#define AW869XX_BIT_TRGCFG6_TRG3SEQ_N_MASK		(~(0x7F<<0))

/* TRGCFG7: reg 0x39 RW */
#define AW869XX_BIT_TRGCFG7_TRG1_POLAR_MASK		(~(1<<7))
#define AW869XX_BIT_TRGCFG7_TRG1_POLAR_NEG		(1<<7)
#define AW869XX_BIT_TRGCFG7_TRG1_POLAR_POS		(0<<7)
#define AW869XX_BIT_TRGCFG7_TRG1_MODE_MASK		(~(1<<6))
#define AW869XX_BIT_TRGCFG7_TRG1_MODE_LEVEL		(1<<6)
#define AW869XX_BIT_TRGCFG7_TRG1_MODE_EDGE		(0<<6)
#define AW869XX_BIT_TRGCFG7_TRG1_AUTO_BRK_MASK		(~(1<<5))
#define AW869XX_BIT_TRGCFG7_TRG1_AUTO_BRK_ENABLE	(1<<5)
#define AW869XX_BIT_TRGCFG7_TRG1_AUTO_BRK_DISABLE	(0<<5)
#define AW869XX_BIT_TRGCFG7_TRG1_BST_MASK		(~(1<<4))
#define AW869XX_BIT_TRGCFG7_TRG1_BST_ENABLE		(1<<4)
#define AW869XX_BIT_TRGCFG7_TRG1_BST_DISABLE		(0<<4)
#define AW869XX_BIT_TRGCFG7_TRG2_POLAR_MASK		(~(1<<3))
#define AW869XX_BIT_TRGCFG7_TRG2_POLAR_NEG		(1<<3)
#define AW869XX_BIT_TRGCFG7_TRG2_POLAR_POS		(0<<3)
#define AW869XX_BIT_TRGCFG7_TRG2_MODE_MASK		(~(1<<2))
#define AW869XX_BIT_TRGCFG7_TRG2_MODE_LEVEL		(1<<2)
#define AW869XX_BIT_TRGCFG7_TRG2_MODE_EDGE		(0<<2)
#define AW869XX_BIT_TRGCFG7_TRG2_AUTO_BRK_MASK		(~(1<<1))
#define AW869XX_BIT_TRGCFG7_TRG2_AUTO_BRK_ENABLE	(1<<1)
#define AW869XX_BIT_TRGCFG7_TRG2_AUTO_BRK_DISABLE	(0<<1)
#define AW869XX_BIT_TRGCFG7_TRG2_BST_MASK		(~(1<<0))
#define AW869XX_BIT_TRGCFG7_TRG2_BST_ENABLE		(1<<0)
#define AW869XX_BIT_TRGCFG7_TRG2_BST_DISABLE		(0<<0)

/* TRGCFG8: reg 0x3A RW */
#define AW869XX_BIT_TRGCFG8_TRG3_POLAR_MASK		(~(1<<7))
#define AW869XX_BIT_TRGCFG8_TRG3_POLAR_NEG		(1<<7)
#define AW869XX_BIT_TRGCFG8_TRG3_POLAR_POS		(0<<7)
#define AW869XX_BIT_TRGCFG8_TRG3_MODE_MASK		(~(1<<6))
#define AW869XX_BIT_TRGCFG8_TRG3_MODE_LEVEL		(1<<6)
#define AW869XX_BIT_TRGCFG8_TRG3_MODE_EDGE		(0<<6)
#define AW869XX_BIT_TRGCFG8_TRG3_AUTO_BRK_MASK		(~(1<<5))
#define AW869XX_BIT_TRGCFG8_TRG3_AUTO_BRK_ENABLE	(1<<5)
#define AW869XX_BIT_TRGCFG8_TRG3_AUTO_BRK_DISABLE	(0<<5)
#define AW869XX_BIT_TRGCFG8_TRG3_BST_MASK		(~(1<<4))
#define AW869XX_BIT_TRGCFG8_TRG3_BST_ENABLE		(1<<4)
#define AW869XX_BIT_TRGCFG8_TRG3_BST_DISABLE		(0<<4)
#define AW869XX_BIT_TRGCFG8_TRG_ONEWIRE_MASK		(~(1<<3))
#define AW869XX_BIT_TRGCFG8_TRG_ONEWIRE_ENABLE		(1<<3)
#define AW869XX_BIT_TRGCFG8_TRG_ONEWIRE_DISABLE		(0<<3)
#define AW869XX_BIT_TRGCFG8_TRG1_STOP_MASK		(~(1<<2))
#define AW869XX_BIT_TRGCFG8_TRG1_STOP			(1<<2)
#define AW869XX_BIT_TRGCFG8_TRG2_STOP_MASK		(~(1<<1))
#define AW869XX_BIT_TRGCFG8_TRG2_STOP			(1<<1)
#define AW869XX_BIT_TRGCFG8_TRG3_STOP_MASK		(~(1<<0))
#define AW869XX_BIT_TRGCFG8_TRG3_STOP			(1<<0)

/* GLBCFG1: reg 0x3B RW */
/* WAKE_DLY */

/* GLBCFG2: reg 0x3C RW */
/* START_DLY */
#define AW869XX_BIT_START_DLY_20US			(0x01)
#define AW869XX_BIT_START_DLY_2P5MS			(0x75)
/* GLBCFG3: reg 0x3D RW */
/* END_DLY */

/* GLBCFG4: reg 0x3E RW */
#define AW869XX_BIT_GLBCFG4_GO_PRIO_MASK		(~(3<<6))
#define AW869XX_BIT_GLBCFG4_TRG3_PRIO_MASK		(~(3<<4))
#define AW869XX_BIT_GLBCFG4_TRG2_PRIO_MASK		(~(3<<2))
#define AW869XX_BIT_GLBCFG4_TRG1_PRIO_MASK		(~(3<<0))

/* GLBRD5: reg 0x3F R0 */
/* GLB_STATE [3:0] */
#define AW869XX_BIT_GLBRD5_STATE_MASK			(~(15<<0))
#define AW869XX_BIT_GLBRD5_STATE_STANDBY		(0<<0)
#define AW869XX_BIT_GLBRD5_STATE_WAKEUP			(1<<0)
#define AW869XX_BIT_GLBRD5_STATE_STARTUP		(2<<0)
#define AW869XX_BIT_GLBRD5_STATE_WAIT			(3<<0)
#define AW869XX_BIT_GLBRD5_STATE_CONT_GO		(6<<0)
#define AW869XX_BIT_GLBRD5_STATE_RAM_GO			(7<<0)
#define AW869XX_BIT_GLBRD5_STATE_RTP_GO			(8<<0)
#define AW869XX_BIT_GLBRD5_STATE_TRIG_GO		(9<<0)
#define AW869XX_BIT_GLBRD5_STATE_I2S_GO			(10<<0)
#define AW869XX_BIT_GLBRD5_STATE_BRAKE			(11<<0)
#define AW869XX_BIT_GLBRD5_STATE_END			(12<<0)

/* RAMADDRH: reg 0x40 RWS */
#define AW869XX_BIT_RAMADDRH_MASK			(~(63<<0))

/* RAMADDRL: reg 0x41 RWS */
/* RAMADDRL */

/* RAMDATA: reg 0x42 RWS */
/* RAMDATA */

/***************** SYSCTRL *****************/
/* SYSCTRL1: reg 0x43 RW */
#define AW869XX_BIT_SYSCTRL1_VBAT_MODE_MASK		(~(1<<7))
#define AW869XX_BIT_SYSCTRL1_VBAT_MODE_HW		(1<<7)
#define AW869XX_BIT_SYSCTRL1_VBAT_MODE_SW		(0<<7)
#define AW869XX_BIT_SYSCTRL1_PERP_MASK			(~(1<<6))
#define AW869XX_BIT_SYSCTRL1_PERP_ON			(1<<6)
#define AW869XX_BIT_SYSCTRL1_PERP_OFF			(0<<6)
#define AW869XX_BIT_SYSCTRL1_CLK_SEL_MASK		(~(3<<4))
#define AW869XX_BIT_SYSCTRL1_CLK_SEL_OSC		(1<<4)
#define AW869XX_BIT_SYSCTRL1_CLK_SEL_AUTO		(0<<4)
#define AW869XX_BIT_SYSCTRL1_RAMINIT_MASK		(~(1<<3))
#define AW869XX_BIT_SYSCTRL1_RAMINIT_ON			(1<<3)
#define AW869XX_BIT_SYSCTRL1_RAMINIT_OFF		(0<<3)
#define AW869XX_BIT_SYSCTRL1_EN_FIR_MASK		(~(1<<2))
#define AW869XX_BIT_SYSCTRL1_FIR_ENABLE			(0<<2)
#define AW869XX_BIT_SYSCTRL1_WAKE_MODE_MASK		(~(1<<1))
#define AW869XX_BIT_SYSCTRL1_WAKE_MODE_WAKEUP		(1<<1)
#define AW869XX_BIT_SYSCTRL1_WAKE_MODE_BST		(0<<1)
#define AW869XX_BIT_SYSCTRL1_RTP_CLK_MASK		(~(1<<0))
#define AW869XX_BIT_SYSCTRL1_RTP_PLL			(1<<0)
#define AW869XX_BIT_SYSCTRL1_RTP_OSC			(0<<0)

/* SYSCTRL2: reg 0x44 RW */
#define AW869XX_BIT_SYSCTRL2_WAKE_MASK			(~(1<<7))
#define AW869XX_BIT_SYSCTRL2_WAKE_ON			(1<<7)
#define AW869XX_BIT_SYSCTRL2_WAKE_OFF			(0<<7)
#define AW869XX_BIT_SYSCTRL2_STANDBY_MASK		(~(1<<6))
#define AW869XX_BIT_SYSCTRL2_STANDBY_ON			(1<<6)
#define AW869XX_BIT_SYSCTRL2_STANDBY_OFF		(0<<6)
#define AW869XX_BIT_SYSCTRL2_RTP_DLY_MASK		(~(3<<4))
#define AW869XX_BIT_SYSCTRL2_PLL_PIN_MASK		(~(1<<3))
#define AW869XX_BIT_SYSCTRL2_PLL_PIN_TEST		(1<<3)
#define AW869XX_BIT_SYSCTRL2_I2S_PIN_MASK		(~(1<<2))
#define AW869XX_BIT_SYSCTRL2_I2S_PIN_I2S		(1<<2)
#define AW869XX_BIT_SYSCTRL2_I2S_PIN_TRIG		(0<<2)
#define AW869XX_BIT_SYSCTRL2_WAVDAT_MODE_MASK		(~(3<<0))
#define AW869XX_BIT_SYSCTRL2_RATE_12K			(2<<0)
#define AW869XX_BIT_SYSCTRL2_RATE_24K			(0<<0)
#define AW869XX_BIT_SYSCTRL2_RATE_48K			(1<<0)

/* SYSCTRL3: reg 0x45 RW */
/* SIN_H */

/* SYSCTRL4: reg 0x46 RW */
/* SIN_L */

/* SYSCTRL5: reg 0x47 RW */
/* COS_H */

/* SYSCTRL6: reg 0x48 RW */
/* COS_L */

/* SYSCTRL7: reg 0x49 RW */
#define AW869XX_BIT_SYSCTRL7_GAIN_BYPASS_MASK		(~(1<<6))
#define AW869XX_BIT_SYSCTRL7_GAIN_CHANGEABLE		(1<<6)
#define AW869XX_BIT_SYSCTRL7_GAIN_FIXED			(0<<6)

#define AW869XX_BIT_SYSCTRL7_INT_EDGE_MODE_MASK		(~(1<<5))
#define AW869XX_BIT_SYSCTRL7_INT_EDGE_MODE_POS		(0<<5)
#define AW869XX_BIT_SYSCTRL7_INT_EDGE_MODE_BOTH		(1<<5)
#define AW869XX_BIT_SYSCTRL7_INT_MODE_MASK		(~(1<<4))
#define AW869XX_BIT_SYSCTRL7_INT_MODE_EDGE		(1<<4)
#define AW869XX_BIT_SYSCTRL7_INT_MODE_LEVEL		(0<<4)

#define AW869XX_BIT_SYSCTRL7_INTP_MASK			(~(1<<3))
#define AW869XX_BIT_SYSCTRL7_INTP_HIGH			(1<<3)
#define AW869XX_BIT_SYSCTRL7_INTP_LOW			(0<<3)
#define AW869XX_BIT_SYSCTRL7_D2S_GAIN_MASK		(~(7<<0))
#define AW869XX_BIT_SYSCTRL7_D2S_GAIN_1			(0<<0)
#define AW869XX_BIT_SYSCTRL7_D2S_GAIN_2			(1<<0)
#define AW869XX_BIT_SYSCTRL7_D2S_GAIN_4			(2<<0)
#define AW869XX_BIT_SYSCTRL7_D2S_GAIN_8			(3<<0)
#define AW869XX_BIT_SYSCTRL7_D2S_GAIN_10		(4<<0)
#define AW869XX_BIT_SYSCTRL7_D2S_GAIN_16		(5<<0)
#define AW869XX_BIT_SYSCTRL7_D2S_GAIN_20		(6<<0)
#define AW869XX_BIT_SYSCTRL7_D2S_GAIN_26		(7<<0)

/***************** I2S *****************/
/* I2SCFG1: reg 0x4A RW */
#define AW869XX_BIT_I2SCFG1_I2SMD_MASK			(~(3<<6))
#define AW869XX_BIT_I2SCFG1_I2SFS_MASK			(~(3<<4))
#define AW869XX_BIT_I2SCFG1_I2SFS_16BIT			(0<<4)
#define AW869XX_BIT_I2SCFG1_I2SFS_20BIT			(1<<4)
#define AW869XX_BIT_I2SCFG1_I2SFS_24BIT			(2<<4)
#define AW869XX_BIT_I2SCFG1_I2SFS_32BIT			(3<<4)
#define AW869XX_BIT_I2SCFG1_I2SBCK_MASK			(~(3<<2))
#define AW869XX_BIT_I2SCFG1_I2SBCK_32FS			(0<<2)
#define AW869XX_BIT_I2SCFG1_I2SBCK_48FS			(1<<2)
#define AW869XX_BIT_I2SCFG1_I2SBCK_64FS			(2<<2)
#define AW869XX_BIT_I2SCFG1_RX_THRS_MASK		(~(3<<0))

/* I2SCFG2: reg 0x4B RW */
#define AW869XX_BIT_I2SCFG2_WSINV_MASK			(~(1<<4))
#define AW869XX_BIT_I2SCFG2_WSINV_SWITCH		(1<<4)
#define AW869XX_BIT_I2SCFG2_WSINV_NO_SWITCH		(0<<4)
#define AW869XX_BIT_I2SCFG2_BCKINV_MASK			(~(1<<3))
#define AW869XX_BIT_I2SCFG2_BCKINV_INVERT		(1<<3)
#define AW869XX_BIT_I2SCFG2_BCKINV_NOTINVT		(0<<3)
#define AW869XX_BIT_I2SCFG2_CHSEL_MASK			(~(1<<2))
#define AW869XX_BIT_I2SCFG2_CHSEL_LEFT			(1<<2)
#define AW869XX_BIT_I2SCFG2_CHSEL_RIGHT			(0<<2)
#define AW869XX_BIT_I2SCFG2_I2S_INT_MASK		(~(1<<1))
#define AW869XX_BIT_I2SCFG2_I2S_INT_ON			(1<<1)
#define AW869XX_BIT_I2SCFG2_I2S_INT_OFF			(0<<1)
#define AW869XX_BIT_I2SCFG2_I2S_EN_MASK			(~(1<<0))
#define AW869XX_BIT_I2SCFG2_I2S_ENABLE			(1<<0)
#define AW869XX_BIT_I2SCFG2_I2S_DISABLE			(0<<0)

/* PWMCFG1: reg 0x4C RW */
#define AW869XX_BIT_PWMCFG1_PRC_EN_MASK			(~(1<<7))
#define AW869XX_BIT_PWMCFG1_PRC_ENABLE			(1<<7)
#define AW869XX_BIT_PWMCFG1_PRC_DISABLE			(0<<7)
#define AW869XX_BIT_PWMCFG1_PRCTIME_MASK		(~(0x7F<<0))

/* PWMCFG2: reg 0x4D RW */
#define AW869XX_BIT_PWMCFG2_REF_SEL_MASK		(~(1<<5))
#define AW869XX_BIT_PWMCFG2_REF_SEL_TRIANGLE		(1<<5)
#define AW869XX_BIT_PWMCFG2_REF_SEL_SAWTOOTH		(0<<5)
#define AW869XX_BIT_PWMCFG2_PD_HWM_MASK			(~(1<<4))
#define AW869XX_BIT_PWMCFG2_PD_HWM_ON			(1<<4)
#define AW869XX_BIT_PWMCFG2_PWMOE_MASK			(~(1<<3))
#define AW869XX_BIT_PWMCFG2_PWMOE_ON			(1<<3)
#define AW869XX_BIT_PWMCFG2_PWMFRC_MASK			(~(7<<0))

/* PWMCFG3: reg 0x4E RW */
#define AW869XX_BIT_PWMCFG3_PR_EN_MASK			(~(1<<7))
#define AW869XX_BIT_PWMCFG3_PR_ENABLE			(1<<7)
#define AW869XX_BIT_PWMCFG3_PR_DISABLE			(0<<7)
#define AW869XX_BIT_PWMCFG3_PRLVL_MASK			(~(0x7F<<0))

/* PWMCFG4: reg 0x4F RW */
/* PRTIME */

/* TMCFG: reg 0x50 RW */
/* TM */

/* DETCFG1: reg 0x51 RW */
#define AW869XX_BIT_DETCFG1_FTS_GO_MASK			(~(1<<7))
#define AW869XX_BIT_DETCFG1_FTS_GO_ENABLE		(1<<7)
#define AW869XX_BIT_DETCFG1_TEST_GO_MASK		(~(1<<6))
#define AW869XX_BIT_DETCFG1_TEST_GO_ENABLE		(1<<6)
#define AW869XX_BIT_DETCFG1_ADO_SLOT_MODE_MASK		(~(1<<5))
#define AW869XX_BIT_DETCFG1_ADO_SLOT_ADC_32		(1<<5)
#define AW869XX_BIT_DETCFG1_ADO_SLOT_ADC_256		(0<<5)
#define AW869XX_BIT_DETCFG1_RL_OS_MASK			(~(1<<4))
#define AW869XX_BIT_DETCFG1_RL				(1<<4)
#define AW869XX_BIT_DETCFG1_OS				(0<<4)
#define AW869XX_BIT_DETCFG1_PRCT_MODE_MASK		(~(1<<3))
#define AW869XX_BIT_DETCFG1_PRCT_MODE_INVALID		(1<<3)
#define AW869XX_BIT_DETCFG1_PRCT_MODE_VALID		(0<<3)
#define AW869XX_BIT_DETCFG1_CLK_ADC_MASK		(~(7<<0))
#define AW869XX_BIT_DETCFG1_CLK_ADC_12M			(0<<0)
#define AW869XX_BIT_DETCFG1_CLK_ADC_6M			(1<<0)
#define AW869XX_BIT_DETCFG1_CLK_ADC_3M			(2<<0)
#define AW869XX_BIT_DETCFG1_CLK_ADC_1M5			(3<<0)
#define AW869XX_BIT_DETCFG1_CLK_ADC_M75			(4<<0)
#define AW869XX_BIT_DETCFG1_CLK_ADC_M37			(5<<0)
#define AW869XX_BIT_DETCFG1_CLK_ADC_M18			(6<<0)
#define AW869XX_BIT_DETCFG1_CLK_ADC_M09			(7<<0)

/* DETCFG2: reg 0x52 RW */
#define AW869XX_BIT_DETCFG2_VBAT_GO_MASK		(~(1<<1))
#define AW869XX_BIT_DETCFG2_VABT_GO_ON			(1<<1)
#define AW869XX_BIT_DETCFG2_DIAG_GO_MASK		(~(1<<0))
#define AW869XX_BIT_DETCFG2_DIAG_GO_ON			(1<<0)

/* DET_RL: reg 0x53 RW */
/* RL */

/* DET_OS: reg 0x54 RW */
/* OS */

/* DET_VBAT: reg 0x55 RW */
/* VBAT */

/* DET_TEST: reg 0x56 RW */
/* TEST */

/* DET_LO: reg 0x57 RW */
#define AW869XX_BIT_DET_LO_TEST_MASK			(~(3<<6))
#define AW869XX_BIT_DET_LO_VBAT_MASK			(~(3<<4))
#define AW869XX_BIT_DET_LO_OS_MASK			(~(3<<2))
#define AW869XX_BIT_DET_LO_RL_MASK			(~(3<<0))

/* TRIMCFG1: reg:0x58 RW */
#define AW869XX_BIT_TRIMCFG1_RL_TRIM_SRC_MASK		(~(1<<6))
#define AW869XX_BIT_TRIMCFG1_RL_TRIM_SRC_REG		(1<<6)
#define AW869XX_BIT_TRIMCFG1_RL_TRIM_SRC_EFUSE		(0<<6)
#define AW869XX_BIT_TRIMCFG1_TRIM_RL_MASK		(~(63<<0))

/* TRIMCFG2: reg:0x59 RW */
#define AW869XX_BIT_TRIMCFG2_BST_TRIM_SRC_MASK		(~(1<<6))
#define AW869XX_BIT_TRIMCFG2_BST_TRIM_SRC_REG		(1<<6)
#define AW869XX_BIT_TRIMCFG2_BST_TRIM_SRC_EFUSE		(0<<6)
#define AW869XX_BIT_TRIMCFG2_TRIM_BST_MASK		(~(63<<0))

/* TRIMCFG3: reg:0x5A RW */
#define AW869XX_BIT_TRIMCFG3_OSC_TRIM_SRC_MASK		(~(1<<7))
#define AW869XX_BIT_TRIMCFG3_OSC_TRIM_SRC_REG		(1<<7)
#define AW869XX_BIT_TRIMCFG3_OSC_TRIM_SRC_EFUSE		(0<<7)
#define AW869XX_BIT_TRIMCFG3_LRA_TRIM_SRC_MASK		(~(1<<6))
#define AW869XX_BIT_TRIMCFG3_LRA_TRIM_SRC_REG		(1<<6)
#define AW869XX_BIT_TRIMCFG3_LRA_TRIM_SRC_EFUSE		(0<<6)
#define AW869XX_BIT_TRIMCFG3_TRIM_LRA_MASK		(~(63<<0))

/* TRIMCFG4: reg:0x5B RW */
/* TRIM_OSC */

/* PLLCFG1: reg:0x68 RW */
#define AW869XX_BIT_PLLCFG1_PLL_TEST_EN_MASK		(~(1<<6))
#define AW869XX_BIT_PLLCFG1_PLL_TEST_ENABLE		(1<<6)
#define AW869XX_BIT_PLLCFG1_PLL_TEST_DIV_MASK		(~(3<<4))
#define AW869XX_BIT_PLLCFG1_PLL_TEST_DIV_1		(0<<4)
#define AW869XX_BIT_PLLCFG1_PLL_TEST_DIV_2		(1<<4)
#define AW869XX_BIT_PLLCFG1_PLL_TEST_DIV_4		(2<<4)
#define AW869XX_BIT_PLLCFG1_PLL_TEST_DIV_8		(3<<4)
#define AW869XX_BIT_PLLCFG1_PLL_BIAS_CP1_IEN_MASK	(~(1<<3))
#define AW869XX_BIT_PLLCFG1_PLL_BIAS_CP1_IENABLE	(1<<3)
#define AW869XX_BIT_PLLCFG1_PLL_VTI_CP1_IEN_MASK	(~(1<<2))
#define AW869XX_BIT_PLLCFG1_PLL_VTI_CP1_IENABLE		(1<<2)
#define AW869XX_BIT_PLLCFG1_PLL_DELAY_SEL_MASK		(~(1<<1))
#define AW869XX_BIT_PLLCFG1_PLL_R1_SEL_MASK		(~(1<<0))

/* PLLCFG2: reg:0x69 RW */
#define AW869XX_BIT_PLLCFG2_PLL_CP1_SEL_MASK		(~(0x0F<<4))
#define AW869XX_BIT_PLLCFG2_PLL_CP1_40UA		(4<<4)
#define AW869XX_BIT_PLLCFG2_PLL_CP1_50UA		(5<<4)
#define AW869XX_BIT_PLLCFG2_PLL_CP1_80UA		(8<<4)
#define AW869XX_BIT_PLLCFG2_PLL_CP1_100UA		(10<<4)
#define AW869XX_BIT_PLLCFG2_PLL_CP2_SEL_MASK		(~(0x0F<<0))
#define AW869XX_BIT_PLLCFG2_PLL_CP2_40NA		(1<<0)
#define AW869XX_BIT_PLLCFG2_PLL_CP2_600NA		(8<<0)
#define AW869XX_BIT_PLLCFG2_PLL_CP2_800NA		(10<<0)
#define AW869XX_BIT_PLLCFG2_PLL_CP2_1200NA		(12<<0)

/* HDRVCFG1: reg:0x6A RW */
#define AW869XX_BIT_HDRVCFG1_EN_HD_LOW_MASK		(~(1<<7))
#define AW869XX_BIT_HDRVCFG1_EN_HD_HZ			(0<<7)
#define AW869XX_BIT_HDRVCFG1_EN_HD_PD			(1<<7)

/* IOCFG1: reg:0x6B RW */
#define AW869XX_BIT_IOCFG1_HSEN_MASK			(~(1<<6))
#define AW869XX_BIT_IOCFG1_HS_ENABLE			(1<<6)
#define AW869XX_BIT_IOCFG1_HS_DISABLE			(0<<6)
#define AW869XX_BIT_IOCFG1_IO_FAST_MASK			(~(3<<4))
#define AW869XX_BIT_IOCFG1_ALL_IO_FAST_ENABLE		(3<<4)
#define AW869XX_BIT_IOCFG1_IIS_IO_FAST_ENABLE		(2<<4)
#define AW869XX_BIT_IOCFG1_IIC_IO_FAST_ENABLE		(1<<4)
#define AW869XX_BIT_IOCFG1_IO_FAST_DISABLE		(0<<4)

/* BSTCFG1: reg:0x6D RW */
#define AW869XX_BIT_BSTCFG1_BST_PC_MASK			(~(7<<1))

/* BSTCFG5: reg:0x71 RW */
#define AW869XX_BIT_BSTCFG5_BST_ADJ_MASK		(~(1<<7))
#define AW869XX_BIT_BSTCFG5_BST_ADJ_HIGH		(1<<7)
#define AW869XX_BIT_BSTCFG5_BST_ADJ_LOW			(0<<7)

/* OCCFG1: reg:0x74 RW */
#define AW869XX_BIT_OCCFG1_HS_IOC_MASK			(~(3<<6))
#define AW869XX_BIT_OCCFG1_HS_IOC_3A15			(0<<6)
#define AW869XX_BIT_OCCFG1_HS_IOC_3A65			(1<<6)
#define AW869XX_BIT_OCCFG1_HS_IOC_4A15			(2<<6)
#define AW869XX_BIT_OCCFG1_HS_IOC_4A65			(3<<6)
#define AW869XX_BIT_OCCFG1_LS_IOC_MASK			(~(3<<4))
#define AW869XX_BIT_OCCFG1_LS_IOC_3A15			(0<<4)
#define AW869XX_BIT_OCCFG1_LS_IOC_3A65			(1<<4)
#define AW869XX_BIT_OCCFG1_LS_IOC_4A15			(2<<4)
#define AW869XX_BIT_OCCFG1_LS_IOC_4A65			(3<<4)
#define AW869XX_BIT_OCCFG1_OCDT_MASK			(~(3<<2))

#define AW869XX_BIT_OCCLK_MODE_MASK			(~(3<<0))

/* ADCCFG1: reg:0x75 RW */
#define AW869XX_BIT_ADCCFG1_BST_SOFT_DLY_ADJ_MASK	(~(1<<7))
#define AW869XX_BIT_ADCCFG1_AD_SEL_HDP_MASK		(~(1<<6))
#define AW869XX_BIT_ADCCFG1_AD_SEL_HDN_MASK		(~(1<<5))
#define AW869XX_BIT_ADCCFG1_AD_SEL_PVDD_MASK		(~(1<<4))
#define AW869XX_BIT_ADCCFG1_AD_SEL_TEST_MASK		(~(1<<3))
#define AW869XX_BIT_ADCCFG1_AD_SEL_VBAT_MASK		(~(1<<2))
#define AW869XX_BIT_ADCCFG1_PD_D2S_DIV_MASK		(~(1<<1))
#define AW869XX_BIT_ADCCFG1_AD_SEL_D2S_MASK		(~(1<<0))

/* D2SCFG1: reg:0x76 RW */
#define AW869XX_BIT_D2SCFG1_CLK_TRIM_MODE_MASK		(~(7<<0))
#define AW869XX_BIT_D2SCFG1_CLK_TRIM_MODE_48K		(0<<0)
#define AW869XX_BIT_D2SCFG1_CLK_TRIM_MODE_24K		(1<<0)
#define AW869XX_BIT_D2SCFG1_CLK_TRIM_MODE_12K		(2<<0)
#define AW869XX_BIT_D2SCFG1_CLK_TRIM_MODE_6K		(3<<0)
#define AW869XX_BIT_D2SCFG1_CLK_TRIM_MODE_12M		(4<<0)

#endif
