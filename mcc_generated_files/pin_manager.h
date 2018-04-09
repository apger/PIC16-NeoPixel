/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.26
        Device            :  PIC16F15325
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set DATA aliases
#define DATA_TRIS               TRISAbits.TRISA2
#define DATA_LAT                LATAbits.LATA2
#define DATA_PORT               PORTAbits.RA2
#define DATA_WPU                WPUAbits.WPUA2
#define DATA_OD                ODCONAbits.ODCA2
#define DATA_ANS                ANSELAbits.ANSA2
#define DATA_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define DATA_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define DATA_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define DATA_GetValue()           PORTAbits.RA2
#define DATA_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define DATA_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define DATA_SetPullup()      do { WPUAbits.WPUA2 = 1; } while(0)
#define DATA_ResetPullup()    do { WPUAbits.WPUA2 = 0; } while(0)
#define DATA_SetPushPull()    do { ODCONAbits.ODCA2 = 1; } while(0)
#define DATA_SetOpenDrain()   do { ODCONAbits.ODCA2 = 0; } while(0)
#define DATA_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define DATA_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/