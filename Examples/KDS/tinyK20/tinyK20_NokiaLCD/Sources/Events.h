/* ###################################################################
**     Filename    : Events.h
**     Project     : tinyK20_NokiaLCD
**     Processor   : MK20DX128VLH5
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-03-04, 17:03, # CodeGen: 0
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Contents    :
**         Cpu_OnNMIINT - void Cpu_OnNMIINT(void);
**
** ###################################################################*/
/*!
** @file Events.h
** @version 01.00
** @brief
**         This is user's event module.
**         Put your event handler code here.
*/         
/*!
**  @addtogroup Events_module Events module documentation
**  @{
*/         

#ifndef __Events_H
#define __Events_H
/* MODULE Events */

#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "PDC1.h"
#include "RESpin1.h"
#include "BitIoLdd1.h"
#include "SCEpin1.h"
#include "BitIoLdd2.h"
#include "D_Cpin1.h"
#include "BitIoLdd3.h"
#include "SPI1.h"
#include "Clock1.h"
#include "BitIoLdd4.h"
#include "Output1.h"
#include "BitIoLdd5.h"
#include "GDisp1.h"
#include "GFONT1.h"
#include "FDisp1.h"
#include "WAIT1.h"
#include "LED1.h"
#include "LEDpin1.h"
#include "BitIoLdd6.h"
#include "KSDK1.h"
#include "LCD_LED.h"
#include "LEDpin2.h"
#include "BitIoLdd7.h"

#ifdef __cplusplus
extern "C" {
#endif 

/*
** ===================================================================
**     Event       :  Cpu_OnNMIINT (module Events)
**
**     Component   :  Cpu [MK20DX128EX5]
*/
/*!
**     @brief
**         This event is called when the Non maskable interrupt had
**         occurred. This event is automatically enabled when the [NMI
**         interrupt] property is set to 'Enabled'.
*/
/* ===================================================================*/
void Cpu_OnNMIINT(void);


/* END Events */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif 
/* ifndef __Events_H*/
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
