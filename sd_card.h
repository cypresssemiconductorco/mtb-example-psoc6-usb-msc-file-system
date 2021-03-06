/*****************************************************************************
* File Name: sd_card.h
*
* Description:
*  This file contains the function prototypes and constants used in
*  the sd_card.c.
*
* Note:
*
******************************************************************************
* Copyright (2020), Cypress Semiconductor Corporation.
******************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress) and is
* protected by and subject to worldwide patent protection (United States and
* foreign), United States copyright laws and international treaty provisions.
* Cypress hereby grants to licensee a personal, non-exclusive, non-transferable
* license to copy, use, modify, create derivative works of, and compile the
* Cypress Source Code and derivative works for the sole purpose of creating
* custom software in support of licensee product to be used only in conjunction
* with a Cypress integrated circuit as specified in the applicable agreement.
* Any reproduction, modification, translation, compilation, or representation of
* this software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the
* materials described herein. Cypress does not assume any liability arising out
* of the application or use of any product or circuit described herein. Cypress
* does not authorize its products for use as critical components in life-support
* systems where a malfunction or failure may reasonably be expected to result in
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of
* such use and in doing so indemnifies Cypress against all charges. Use may be
* limited by and subject to the applicable Cypress software license agreement.
*****************************************************************************/
#if !defined(SD_CARD_H)
#define SD_CARD_H

#include <stdbool.h>
#include <stdint.h>
#include "cyhal.h"

bool sd_card_is_connected(void);
cy_rslt_t sd_card_init(void);
uint32_t sd_card_sector_size(void);
uint32_t sd_card_max_sector_num(void);
uint64_t sd_card_total_mem_bytes(void);
cy_rslt_t sd_card_read(uint32_t address, uint8_t *data, uint32_t *length);
cy_rslt_t sd_card_write(uint32_t address, const uint8_t *data, uint32_t *length);

#endif /* SD_CARD_H */

/* [] END OF FILE */
