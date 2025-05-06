#pragma once


#ifdef __cplusplus
extern "C" {
#endif

#include <cmsis_os2.h>
#include "FreeRTOS.h"
#include "task/TopDefine.h"
/* 所有任务都要define一个“任务运行频率”和“初始化延时” */
#define TASK_FREQ_CTRL_PUT (500u)
#define TASK_FREQ_CTRL_TAKE (500u)
#define TASK_FREQ_DOG (50u)
#define TASK_FREQ_CMD (500u)
//#define TASK_FREQ_CTRL_SHOOT (500)

typedef struct
{
    /*线程*/
    struct
    {
        osThreadId_t take;
        osThreadId_t put;
        osThreadId_t can;
        osThreadId_t can_send;
        osThreadId_t rc;
        osThreadId_t dog;
        osThreadId_t cmd;
        osThreadId_t nearlink;
        osThreadId_t atti_esti;

    }thread;
    
    /*消息队列*/
    struct
    {
        osMessageQueueId_t q_can_send; 
    }msgq;
    /*事件组*/
    struct
    {
        osEventFlagsId_t eventReceive;
		osEventFlagsId_t eventSync;
    }events;
    robot_status_e robotStatus;//机器人状态,此数据只能由cmd更改
#if _DEBUG == 1
    // uint32_t flash_data;
#endif
}robot_t;

/* Exported functions prototypes -------------------------------------------- */
void FunctionTake(void *argument);
void FunctionPut(void *argument);
void FunctionCan(void *argument);
void FunctionRc(void *argument);
void FunctionDog(void *argument);
void FunctionCmd(void *argument);
void FunctionAttiEsti(void *argument);
void FunctionNearlink(void *argument);
void FunctionCanSend(void *argument);

extern robot_t robotStruct;

#ifdef __cplusplus
}
#endif

