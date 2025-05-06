#include "task/TopDefine.h"
#include "task/userTask.h"
#include "main.h"
#include "bsp/delay.h"

/**
 * \brief can任务
 *
 * \param argument 未使用
 */
void FunctionCan(void *argument)
{
    (void)argument; /* 未使用argument，消除警告 */

    while (1)
    {
        HAL_GPIO_TogglePin(LED_G_GPIO_Port, LED_G_Pin);
        BSP_Delay(500);
    }
}
