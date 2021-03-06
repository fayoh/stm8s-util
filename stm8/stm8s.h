#ifndef STM8S_H
#define STM8S_H

#include <stdint.h>

#define _MEM_(mem_addr)         (*(volatile uint8_t *)(mem_addr))
#define _SFR_(mem_addr)         (*(volatile uint8_t *)(0x5000 + (mem_addr)))

/* PORT A */
#define PA_ODR                  _SFR_(0x00)
#define PA_IDR                  _SFR_(0x01)
#define PA_DDR                  _SFR_(0x02)
#define PA_CR1                  _SFR_(0x03)
#define PA_CR2                  _SFR_(0x04)

/* PORT B */
#define PB_ODR                  _SFR_(0x05)
#define PB_IDR                  _SFR_(0x06)
#define PB_DDR                  _SFR_(0x07)
#define PB_CR1                  _SFR_(0x08)
#define PB_CR2                  _SFR_(0x09)

/* PORT C */
#define PC_ODR                  _SFR_(0x0A)
#define PC_IDR                  _SFR_(0x0B)
#define PC_DDR                  _SFR_(0x0C)
#define PC_CR1                  _SFR_(0x0D)
#define PC_CR2                  _SFR_(0x0E)

/* PORT D */
#define PD_ODR                  _SFR_(0x0F)
#define PD_IDR                  _SFR_(0x10)
#define PD_DDR                  _SFR_(0x11)
#define PD_CR1                  _SFR_(0x12)
#define PD_CR2                  _SFR_(0x13)

/* PORT E */
#define PE_ODR                  _SFR_(0x14)
#define PE_IDR                  _SFR_(0x15)
#define PE_DDR                  _SFR_(0x16)
#define PE_CR1                  _SFR_(0x17)
#define PE_CR2                  _SFR_(0x18)

/* PORT F */
#define PF_ODR                  _SFR_(0x19)
#define PF_IDR                  _SFR_(0x1A)
#define PF_DDR                  _SFR_(0x1B)
#define PF_CR1                  _SFR_(0x1C)
#define PF_CR2                  _SFR_(0x1D)

/* Flash */
#define FLASH_CR1               _SFR_(0x5A)
#define FLASH_CR1_HALT          1 << 3
#define FLASH_CR1_AHALT         1 << 2
#define FLASH_CR1_IE            1 << 1
#define FLASH_CR1_FIX           1 << 0
#define FLASH_CR2               _SFR_(0x5B)
#define FLASH_CR2_OPT           1 << 7
#define FLASH_CR2_WPRG          1 << 6
#define FLASH_CR2_ERASE         1 << 5
#define FLASH_CR2_FPRG          1 << 4
#define FLASH_CR2_PRG           1 << 0
#define FLASH_NCR2              _SFR_(0x5C)
#define FLASH_NCR2_NOPT         1 << 7
#define FLASH_NCR2_NWPRG        1 << 6
#define FLASH_NCR2_NERASE       1 << 5
#define FLASH_NCR2_NFPRG        1 << 4
#define FLASH_NCR2_NPRG         1 << 0
#define FLASH_FPR               _SFR_(0x5D)
#define FLASH_NFPR              _SFR_(0x5E)
#define FLASH_IAPSR             _SFR_(0x5F)
#define FLASH_IAPSR_DUL         1 << 3
#define FLASH_IAPSR_EOP         1 << 2
#define FLASH_IAPSR_PUL         1 << 1
#define FLASH_PUKR              _SFR_(0x62)
#define FLASH_PUKR_KEY1         0x56
#define FLASH_PUKR_KEY2         0xAE
#define FLASH_DUKR              _SFR_(0x64)
#define FLASH_DUKR_KEY1         FLASH_PUKR_KEY2
#define FLASH_DUKR_KEY2         FLASH_PUKR_KEY1

/* Clock */
#define CLK_ICKR                _SFR_(0xC0)
#define CLK_ECKR                _SFR_(0xC1)
#define CLK_ECKR_HSERDY         1 << 1
#define CLK_ECKR_HSEEN          1 << 0
#define CLK_CMSR                _SFR_(0xC3)
#define CLK_SWR                 _SFR_(0xC4)
#define CLK_SWR_HSI_EN         0xE1
#define CLK_SWR_LSI_EN         0xD2
#define CLK_SWR_HSE_EN         0xB4
#define CLK_SWCR               _SFR_(0xC5)
#define CLK_SWCR_SWIF           1 << 3
#define CLK_SWCR_SWIEN          1 << 2
#define CLK_SWCR_SWEN           1 << 1
#define CLK_SWCR_SWBSY          1 << 0
#define CLK_CKDIVR              _SFR_(0xC6)
#define CLK_PCKENR1             _SFR_(0xC7)
#define CLK_PCKENR1_TIM1        1 << 7
#define CLK_PCKENR1_TIM2        1 << 5
#define CLK_PCKENR1_TIM4        1 << 4
#define CLK_PCKENR1_UART1       1 << 3
#define CLK_PCKENR1_SPI         1 << 1
#define CLK_PCKENR1_I2C         1 << 0
#define CLK_CSSR                _SFR_(0xC8)
#define CLK_CCOR                _SFR_(0xC9)
#define CLK_CCOR_CCOEN          1 << 0
#define CLK_PCKENR2             _SFR_(0xCA)
#define CLK_PCKENR2_ADC         1 << 7
#define CLK_PCKENR2_AWU         1 << 6
#define CLK_HSITRIMR            _SFR_(0xCC)
#define CLK_SWIMCCR             _SFR_(0xCD)

/* Watchdog */
#define WWDG_CR                 _SFR_(0xD1)
#define WWDG_WR                 _SFR_(0xD2)
#define IWDG_KR                 _SFR_(0xE0)
#define IWDG_KEY_ENABLE         0xCC
#define IWDG_KEY_REFRESH        0xAA
#define IWDG_KEY_ACCESS         0x55
#define IWDG_PR                 _SFR_(0xE1)
#define IWDG_RLR                _SFR_(0xE2)

/* SPI */
#define SPI_CR1                 _SFR_(0x200)
#define SPI_CR1_LSBFIRST        1 << 7
#define SPI_CR1_SPE             1 << 6
#define SPI_CR1_BR2             1 << 5
#define SPI_CR1_BR1             1 << 4
#define SPI_CR1_BR0             1 << 3
#define SPI_CR1_MSTR            1 << 2
#define SPI_CR1_CPOL            1 << 1
#define SPI_CR1_CPHA            1 << 0
#define SPI_CR2                 _SFR_(0x201)
#define SPI_CR2_BDM             1 << 7
#define SPI_CR2_BDOE            1 << 6
#define SPI_CR2_CRCEN           1 << 5
#define SPI_CR2_CRCNEXT         1 << 4
#define SPI_CR2_RXONLY          1 << 2
#define SPI_CR2_SSM             1 << 1
#define SPI_CR2_SSI             1 << 0
#define SPI_ICR                 _SFR_(0x202)
#define SPI_SR                  _SFR_(0x203)
#define SPI_SR_BSY              1 << 7
#define SPI_SR_OVR              1 << 6
#define SPI_SR_MODF             1 << 5
#define SPI_SR_CRCERR           1 << 4
#define SPI_SR_WKUP             1 << 3
#define SPI_SR_TXE              1 << 1
#define SPI_SR_RXNE             1 << 0
#define SPI_DR                  _SFR_(0x204)
#define SPI_CRCPR               _SFR_(0x205)
#define SPI_RXCRCR              _SFR_(0x206)
#define SPI_TXCRCR              _SFR_(0x207)

/* I2C */
#define I2C_CR1                 _SFR_(0x210)
#define I2C_CR1_PE              1 << 0
#define I2C_CR2                 _SFR_(0x211)
#define I2C_CR2_ACK             1 << 2
#define I2C_CR2_STOP            1 << 1
#define I2C_CR2_START           1 << 0
#define I2C_FREQR               _SFR_(0x212)
#define I2C_FREQR_FREQ2         1 << 2
#define I2C_FREQR_FREQ1         1 << 1
#define I2C_FREQR_FREQ0         1 << 0
#define I2C_OARL                _SFR_(0x213)
#define I2C_OARH                _SFR_(0x214)
#define I2C_OARH_ADDMODE        1 << 7
#define I2C_OARH_ADDCONF        1 << 6
#define I2C_DR                  _SFR_(0x216)
#define I2C_SR1                 _SFR_(0x217)
#define I2C_SR1_TXE             1 << 7
#define I2C_SR1_RXNE            1 << 6
#define I2C_SR1_BTF             1 << 2
#define I2C_SR1_ADDR            1 << 1
#define I2C_SR1_SB              1 << 0
#define I2C_SR2                 _SFR_(0x218)
#define I2C_SR3                 _SFR_(0x219)
#define I2C_SR3_BUSY            1 << 1
#define I2C_SR3_MSL             1 << 0
#define I2C_ITR                 _SFR_(0x21A)
#define I2C_CCRL                _SFR_(0x21B)
#define I2C_CCRH                _SFR_(0x21C)
#define I2C_TRISER              _SFR_(0x21D)
#define I2C_PECR                _SFR_(0x21E)

/* UART1 */
#define UART1_SR                _SFR_(0x230)
#define UART1_SR_TXE            1 << 7
#define UART1_SR_TC             1 << 6
#define UART1_SR_RXNE           1 << 5
#define UART1_DR                _SFR_(0x231)
#define UART1_BRR1              _SFR_(0x232)
#define UART1_BRR2              _SFR_(0x233)
#define UART1_CR1               _SFR_(0x234)
#define UART1_CR2               _SFR_(0x235)
#define UART1_CR2_TIEN          1 << 7
#define UART1_CR2_RIEN          1 << 5
#define UART1_CR2_TEN           1 << 3
#define UART1_CR2_REN           1 << 2
#define UART1_CR3               _SFR_(0x236)
#define UART1_CR4               _SFR_(0x237)
#define UART1_CR5               _SFR_(0x238)
#define UART1_GTR               _SFR_(0x239)
#define UART1_PSCR              _SFR_(0x23A)

/* UART2 */
#define UART2_SR                _SFR_(0x240)
#define UART2_SR_TXE            1 << 7
#define UART2_SR_TC             1 << 6
#define UART2_SR_RXNE           1 << 5
#define UART2_DR                _SFR_(0x241)
#define UART2_BRR1              _SFR_(0x242)
#define UART2_BRR2              _SFR_(0x243)
#define UART2_CR1               _SFR_(0x244)
#define UART2_CR2               _SFR_(0x245)
#define UART2_CR2_TEN           1 << 3
#define UART2_CR2_REN           1 << 2
#define UART2_CR3               _SFR_(0x246)
#define UART2_CR4               _SFR_(0x247)
#define UART2_CR5               _SFR_(0x248)
#define UART2_CR6               _SFR_(0x249)
#define UART2_GTR               _SFR_(0x24A)
#define UART2_PSCR              _SFR_(0x24B)

/* TIM2 */
#define TIM2_CR1                _SFR_(0x300)
#define TIM2_CR1_ARPE           1 << 7
#define TIM2_CR1_CEN            1 << 0
#define TIM2_IER                _SFR_(0x303)
#define TIM2_IER_CC1IE          1 << 3
#define TIM2_IER_CC2IE          1 << 2
#define TIM2_IER_CC3IE          1 << 1
#define TIM2_SR1                _SFR_(0x304)
#define TIM2_SR1_CC1IF          1 << 3
#define TIM2_SR1_CC2IF          1 << 2
#define TIM2_SR1_CC3IF          1 << 1
#define TIM2_SR2                _SFR_(0x305)
#define TIM2_EGR                _SFR_(0x306)
#define TIM2_CCMR1              _SFR_(0x307)
#define TIM2_CCMR1_OC1M2        1 << 6
#define TIM2_CCMR1_OC1M1        1 << 5
#define TIM2_CCMR1_OC1M0        1 << 4
#define TIM2_CCMR1_OC1PE        1 << 3
#define TIM2_CCMR2              _SFR_(0x308)
#define TIM2_CCMR3              _SFR_(0x309)
#define TIM2_CCER1              _SFR_(0x30A)
#define TIM2_CCER1_CC2E         1 << 4
#define TIM2_CCER1_CC1P         1 << 1
#define TIM2_CCER1_CC1E         1 << 0
#define TIM2_CCER2              _SFR_(0x30B)
#define TIM2_CCER2_CC3E         1 << 0
#define TIM2_CNTRH              _SFR_(0x30C)
#define TIM2_CNTRL              _SFR_(0x30D)
#define TIM2_PSCR               _SFR_(0x30E)
#define TIM2_ARRH               _SFR_(0x30F)
#define TIM2_ARRL               _SFR_(0x310)
#define TIM2_CCR1H              _SFR_(0x311)
#define TIM2_CCR1L              _SFR_(0x312)
#define TIM2_CCR2H              _SFR_(0x313)
#define TIM2_CCR2L              _SFR_(0x314)
#define TIM2_CCR3H              _SFR_(0x315)
#define TIM2_CCR3L              _SFR_(0x316)

/* TIM4 */
#define TIM4_CR1                _SFR_(0x340)
#define TIM4_CR1_ARPE           1 << 1 << 7
#define TIM4_CR1_URS            1 << 1 << 2
#define TIM4_CR1_CEN            1 << 1 << 0
#define TIM4_IER                1 << _SFR_(0x343)
#define TIM4_IER_UIE            1 << 0
#define TIM4_SR                 _SFR_(0x344)
#define TIM4_SR_UIF             1 << 0
#define TIM4_EGR                _SFR_(0x345)
#define TIM4_CNTR               _SFR_(0x346)
#define TIM4_PSCR               _SFR_(0x347)
#define TIM4_ARR                _SFR_(0x348)

/** TIMX */
#define TIMX_CCMR_PWM1          0x68
#define TIMX_CCMR_PWM2          0x78

/* ADC1 */
#define ADC1_DB0R               _SFR_(0x3E0)
#define ADC1_CSR                _SFR_(0x400)
#define ADC1_CSR_EOC            1 << 7
#define ADC1_CSR_AWD            1 << 6
#define ADC1_CSR_EOCIE          1 << 5
#define ADC1_CSR_CH3            1 << 3
#define ADC1_CSR_CH2            1 << 2
#define ADC1_CSR_CH1            1 << 1
#define ADC1_CSR_CH0            1 << 0
#define ADC1_CR1                _SFR_(0x401)
#define ADC1_CR1_SPSEL2         1 << 6
#define ADC1_CR1_SPSEL1         1 << 5
#define ADC1_CR1_SPSEL0         1 << 4
#define ADC1_CR1_CONT           1 << 1
#define ADC1_CR1_ADON           1 << 0
#define ADC1_CR2                _SFR_(0x402)
#define ADC1_CR2_EXTTRIG        1 << 6
#define ADC1_CR2_EXTSEL1        1 << 5
#define ADC1_CR2_EXTSEL0        1 << 4
#define ADC1_CR2_ALIGN          1 << 3
#define ADC1_CR2_SCAN           1 << 1
#define ADC1_CR3                _SFR_(0x403)
#define ADC1_CR3_DBUF           1 << 7
#define ADC1_CR3_OVR            1 << 6
#define ADC1_DRH                _SFR_(0x404)
#define ADC1_DRL                _SFR_(0x405)
#define ADC1_TDRH               _SFR_(0x406)
#define ADC1_TDRL               _SFR_(0x407)
#define ADC1_HTRH               _SFR_(0x408)
#define ADC1_HTRL               _SFR_(0x409)
#define ADC1_LTRH               _SFR_(0x40A)
#define ADC1_LTRL               _SFR_(0x40B)
#define ADC1_AWSRH              _SFR_(0x40C)
#define ADC1_AWSRL              _SFR_(0x40D)
#define ADC1_AWCRH              _SFR_(0x40E)
#define ADC1_AWCRL              _SFR_(0x40F)

/* Interrupts */
#define TLI_ISR                 0
#define AWU_ISR                 1
#define CLK_ISR                 2
#define EXTI0_ISR               3
#define EXTI1_ISR               4
#define EXTI2_ISR               5
#define EXTI3_ISR               6
#define EXTI4_ISR               7
#define SPI_ISR                 10
#define TIM1_OVF_ISR            11
#define TIM1_CC_ISR             12
#define TIM2_OVF_ISR            13
#define TIM2_CC_ISR             14
#define UART1_TXC_ISR           17
#define UART1_RXC_ISR           18
#define I2C_ISR                 19
#define ADC1_ISR                22
#define TIM4_ISR                23
#define FLASH_ISR               24

#define enable_interrupts()     __asm__("rim");
#define disable_interrupts()    __asm__("sim");

#define enter_wait_state() __asm__("wfi")

// These are optimized by sdcc to use the bset/bres assembly instructions.
#define CLRBIT(REG, VALUE) REG &= ~VALUE
#define SETBIT(REG, VALUE) REG |= VALUE

#endif /* STM8S_H */
