#pragma once


#ifdef TOP_USER_CFG
#include TOP_USER_CFG
#endif

//===================用户配置===================
//是否使用freertos
#ifndef _FREERTOS
#define _FREERTOS 1
#endif
//是否开启调试
#ifndef _DEBUG
#define _DEBUG 1
#endif
//是否使用自动
#ifndef _AUTO
#define _AUTO 0
#endif
//是否使用看门狗
#ifndef _DOG
#define _DOG 0
#endif
//是否启用星闪
#ifndef _NEAR_LINK
#define _NEAR_LINK 1
#endif

#ifndef _LOG
#define _LOG 1
#endif
//=============================================
//================任务通知
#if _AUTO == 0
#define EVENT_RC    (1<<1)
#endif

#define EVENT_CAN   (1<<2)

#if _NEAR_LINK == 1
#define EVENT_NEAR_LINK (1<<0)
#endif
//================任务通知
//取到正确的球了，可以来取球了
#define BALL_OK	(1<<1)
//接到放球命令
#define PUT_CMD	(1<<2)
//已经放球结束了
#define PUT_OK	(1<<2)
//到达三区
// #define WALK_FINFISH (1<<3)
//take任务要等待上面两个标志位
#define TAKE_WAIT (0x0C)
//要发送ok了
#define BALL_SEND (1<<6)
//能够处理放球命令
#define PUT_ENABLE (1<<7)

//====================定义
//存放是否到达三区的flash地址
#define FLASH_ADDR 0x080f0000

#define AREA_ONE 0xffffffff
#define AREA_TWO 0xbb000000
#define AREA_THREE 0xcc000000

typedef enum
{
    ROBOT_IN_ONE = 1,
    // ROBOT_IN_TWO,
    ROBOT_FIND_BALL,
    ROBOT_PUT_BALL,
    ROBOT_ERROR
}robot_status_e;

