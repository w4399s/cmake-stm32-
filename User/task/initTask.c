/**
 * 初始化任务
*/
#include "task/TopDefine.h"
#include "task/userTask.h"

//任务与队列结构体
robot_t robotStruct;

/*下面是所有的任务属性*/
const osThreadAttr_t  attr_put = {
    .name = "put",
    .priority = osPriorityRealtime,
    .stack_size = 256 * 8,
};

const osThreadAttr_t attr_take = {
    .name = "take",
    .priority = osPriorityRealtime,
    .stack_size = 256 * 8,
};

const osThreadAttr_t attr_can = {
    .name = "can",
    .priority = osPriorityRealtime,
    .stack_size = 128 * 6,
};

const osThreadAttr_t attr_rc = {
    .name = "rc",
    .priority = osPriorityRealtime,
    .stack_size = 128 * 8,
};

const osThreadAttr_t attr_dog = {
    .name = "dog",
    .priority = osPriorityNormal,
    .stack_size = 128 * 2,
};

const osThreadAttr_t attr_cmd = {
    .name = "cmd",
    .priority = osPriorityRealtime1,
    .stack_size = 128 * 2,
};

const osThreadAttr_t attr_nearlink = {
    .name = "nearlink",
    .priority = osPriorityRealtime,
    .stack_size = 512 * 8,
};

const osThreadAttr_t attr_can_send = {
    .name = "can_send",
    .priority = osPriorityRealtime,
    .stack_size = 128 * 6,
};

const osEventFlagsAttr_t attr_eventRev = {
    .name = "eventRev",
};

const osEventFlagsAttr_t attr_eventSync = {
    .name = "eventSync",
};


const osThreadAttr_t attr_atti_esti = {
    .name = "atti_esti",
    .priority = osPriorityRealtime,
    .stack_size = 256 * 4,
};

/*********************/
/**
 * \brief 初始化
 *
 * \param argument 未使用
 */
void initFunction(void *argument) 
{
    (void)argument; /* 未使用argument，消除警告 */

    osKernelLock();
    /* 创建任务 */
    robotStruct.thread.can =
        osThreadNew(FunctionCan, NULL, &attr_can);
//     // robotStruct.thread.can_send =
//     //     osThreadNew(FunctionCanSend, NULL, &attr_can_send);
//     // robotStruct.thread.atti_esti =
//     //     osThreadNew(FunctionAttiEsti, NULL, &attr_atti_esti);
// #if _AUTO == 0
//     robotStruct.thread.rc =
//         osThreadNew(FunctionRc, NULL, &attr_rc);
// #endif
//     robotStruct.thread.cmd =
//         osThreadNew(FunctionCmd, NULL, &attr_cmd);
// #if _DOG == 1
//     robotStruct.thread.dog =
//         osThreadNew(FunctionDog, NULL, &attr_dog);
// #endif
// #if _NEAR_LINK == 1
//     robotStruct.thread.nearlink =
//         osThreadNew(FunctionNearlink, NULL, &attr_nearlink);
// #endif
//     /* 创建消息队列 */
//     robotStruct.msgq.q_can_send =
//         osMessageQueueNew(1u, sizeof(int16_t), NULL);
//     /*创建事件组*/
//     robotStruct.events.eventReceive = osEventFlagsNew(&attr_eventRev);
// 	robotStruct.events.eventSync = osEventFlagsNew(&attr_eventSync);
    




    osKernelUnlock();
    osThreadTerminate(osThreadGetId()); /* 结束自身 */
}

