/**
  ******************************************************************************
  * @file    Templates/Inc/main.h 
  * @author  MCD Application Team
  * @brief   Header for main.c module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2017 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
#define MAKE_STRING_( x) #x							/* x is stringized when it is used in MAKE_STRING_, so it is not macro-expanded first */
#define MAKE_STRING(x) MAKE_STRING_(x)	/* MAKE_STRING_ gets parameter of MAKE_STRING, NOT the argument of MAKE_STRING        */										

/*
But x is an ordinary argument to MAKE_STRING, so it is completely macro-expanded before MAKE_STRING itself is expanded to MAKE_STRING_ . 
Therefore, by the time MAKE_STRING_ gets to its argument, it has already been macro-expanded.
*/

/* 
  #expr is Stringized, not macro expaned
	MAKE_STRING(expr) is first macro expaned and then Stringized
 */

#define dprint(expr) printf("The " #expr " is replaced with \"%s\"\n", MAKE_STRING(expr))
/* below is wrong*/
//#define dprint(expr) printf("The " MAKE_STRING_(expr) " is replaced with \"%s\"\n", MAKE_STRING(expr))


/*  If either of the tokens next to an ‘##’ is a parameter name, it is replaced by its actual argument before ‘##’ executes*/
#define paste_(front, back) front ## back /* NOT replaced by its actual argument before ‘##’ executes, so only parameter name are concatenated  */										
#define paste(front, back) paste_(front, back) /* replaced by its actual argument before ‘##’ executes*/



/* Exported functions ------------------------------------------------------- */

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
