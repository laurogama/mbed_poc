/**
 * File:      inair_default_defines.h
 *
 * Author:    Modtronix Engineering - www.modtronix.com
 *
 * Description:
 *
 * Software License Agreement:
 * This software has been written or modified by Modtronix Engineering. The code
 * may be modified and can be used free of charge for commercial and non commercial
 * applications. If this is modified software, any license conditions from original
 * software also apply. Any redistribution must include reference to 'Modtronix
 * Engineering' and web link(www.modtronix.com) in the file header.
 *
 * THIS SOFTWARE IS PROVIDED IN AN 'AS IS' CONDITION. NO WARRANTIES, WHETHER EXPRESS,
 * IMPLIED OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. THE
 * COMPANY SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL OR
 * CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 */
#ifndef MODTRONIX_INAIR_INAIR_DEFAULT_CONFIG_H_
#define MODTRONIX_INAIR_INAIR_DEFAULT_CONFIG_H_

//This file requires a file called "modtronix_config.h" to exist in the project!
//Use this file to override any of the default defines below. Do NOT edit this file!
#if !defined(NO_MODTRONIX_CONFIG)
    #include "modtronix_config.h"
#endif

// Copy from here to custom inair_defines.h file //////////////////////////////

//When selecting "Non Interrupt" based DIO0, following times were measured:
// - Measuring time DIO0 pin stays high, indicates how long code takes to get to "Clear Irq" in OnDio0Irq(). DIO0 pin
//   stays high for about 20-40uS with interrupts disabled. Is about 18uS when interrupts enabled.
#if !defined(INAIR_DIO0_IS_INTERRUPT)
#define INAIR_DIO0_IS_INTERRUPT     0
#endif

#if !defined(INAIR_DIO1_IS_INTERRUPT)
#define INAIR_DIO1_IS_INTERRUPT     0
#endif

#if !defined(INAIR_DIO2_IS_INTERRUPT)
#define INAIR_DIO2_IS_INTERRUPT     0
#endif

#if !defined(INAIR_DIO3_IS_INTERRUPT)
#define INAIR_DIO3_IS_INTERRUPT     0
#endif


// End of contents to copy to custom inair_defines.h file /////////////////////

#endif /* MODTRONIX_INAIR_INAIR_DEFAULT_CONFIG_H_ */
