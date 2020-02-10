/**
  ******************************************************************************
  * @file    stm32h7xx_hal_sd_ex.h
  * @author  MCD Application Team
  * @brief   Header file of SD HAL extended module.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                       opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef STM32H7xx_HAL_SDEX_H
#define STM32H7xx_HAL_SDEX_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal_def.h"

/** @addtogroup STM32H7xx_HAL_Driver
  * @{
  */

/** @addtogroup SDEx
  * @brief SD HAL extended module driver
  * @{
  */

/* Exported types ------------------------------------------------------------*/
/** @defgroup SDEx_Exported_Types SDEx Exported Types
  * @{
  */

/** @defgroup SDEx_Exported_Types_Group1 SD Card Internal DMA Buffer structure
  * @{
  */
typedef enum
{
  SD_DMA_BUFFER0      = 0x00U,    /*!< selects SD internal DMA Buffer 0     */
  SD_DMA_BUFFER1      = 0x01U,    /*!< selects SD internal DMA Buffer 1     */

}HAL_SDEx_DMABuffer_MemoryTypeDef;


/**
  * @}
  */

/**
  * @}
  */
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions --------------------------------------------------------*/
/** @defgroup SDEx_Exported_Functions SDEx Exported Functions
  * @{
  */

/** @defgroup SDEx_Exported_Functions_Group1 MultiBuffer functions
  * @{
  */
HAL_StatusTypeDef HAL_SDEx_ConfigDMAMultiBuffer(SD_HandleTypeDef *hsd, uint32_t * pDataBuffer0, uint32_t * pDataBuffer1, uint32_t BufferSize);
HAL_StatusTypeDef HAL_SDEx_ReadBlocksDMAMultiBuffer(SD_HandleTypeDef *hsd, uint32_t BlockAdd, uint32_t NumberOfBlocks);
HAL_StatusTypeDef HAL_SDEx_WriteBlocksDMAMultiBuffer(SD_HandleTypeDef *hsd, uint32_t BlockAdd, uint32_t NumberOfBlocks);
HAL_StatusTypeDef HAL_SDEx_ChangeDMABuffer(SD_HandleTypeDef *hsd, HAL_SDEx_DMABuffer_MemoryTypeDef Buffer, uint32_t *pDataBuffer);

void HAL_SDEx_Read_DMADoubleBuffer0CpltCallback(SD_HandleTypeDef *hsd);
void HAL_SDEx_Read_DMADoubleBuffer1CpltCallback(SD_HandleTypeDef *hsd);
void HAL_SDEx_Write_DMADoubleBuffer0CpltCallback(SD_HandleTypeDef *hsd);
void HAL_SDEx_Write_DMADoubleBuffer1CpltCallback(SD_HandleTypeDef *hsd);

/**
  * @}
  */

/**
  * @}
  */

/* Private types -------------------------------------------------------------*/
/* Private defines -----------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private constants ---------------------------------------------------------*/
/* Private macros ------------------------------------------------------------*/
/* Private functions prototypes ----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/**
  * @}
  */

/**
  * @}
  */
#ifdef __cplusplus
}
#endif


#endif /* stm32h7xx_HAL_SDEX_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
