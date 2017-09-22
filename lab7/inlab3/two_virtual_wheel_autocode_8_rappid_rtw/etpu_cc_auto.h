/****************************************************************
 * WARNING this file is automatically generated DO NOT EDIT IT!
 *
 * This file provides an interface between eTPU code and CPU
 * code. All references to the CC function should be made with
 * information in this file. This allows only symbolic
 * information to be referenced which allows the eTPU code to be
 * optimized without effecting the CPU code.
 *****************************************************************/

#ifndef _ETPU_CC_AUTO_H_
#define _ETPU_CC_AUTO_H_

/****************************************************************
 * Function Configuration Information.
 ****************************************************************/
#define FS_ETPU_CC_FUNCTION_NUMBER     9
#define FS_ETPU_CC_TABLE_SELECT        0
#define FS_ETPU_CC_NUM_PARMS           0x0028

/****************************************************************
 * Host Service Request Definitions.
 ****************************************************************/
#define FS_ETPU_CC_INIT_MASTER         5
#define FS_ETPU_CC_INIT_SLAVE          7
#define FS_ETPU_CC_CALC                2

/****************************************************************
 * Parameter Definitions.
 ****************************************************************/
#define FS_ETPU_CC_PERIOD_OFFSET       0x0001
#define FS_ETPU_CC_STARTOFFSET_OFFSET  0x0005
#define FS_ETPU_CC_SERVICESPERIRQ_OFFSET 0x0009
#define FS_ETPU_CC_LINKCHAN_OFFSET     0x0000
#define FS_ETPU_CC_PPID_OFFSET         0x000D
#define FS_ETPU_CC_IDESIRED_OFFSET     0x0011
#define FS_ETPU_CC_ERROR_OFFSET        0x0015
#define FS_ETPU_CC_IMEASURED_OFFSET    0x0019
#define FS_ETPU_CC_POUTPUT_OFFSET      0x001D

/****************************************************************
 * Value Definitions.
 ****************************************************************/
#define FS_ETPU_CC_FM_PID_OFF          0
#define FS_ETPU_CC_FM_PID_ON           1
#endif