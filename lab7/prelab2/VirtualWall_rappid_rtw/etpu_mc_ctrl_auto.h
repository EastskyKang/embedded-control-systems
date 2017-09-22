/****************************************************************
 * WARNING this file is automatically generated DO NOT EDIT IT!
 *
 * This file provides an interface between eTPU code and CPU
 * code. All references to the MC_CTRL routines should be made with
 * information in this file. This allows only symbolic
 * information to be referenced which allows the eTPU code to be
 * optimized without effecting the CPU code.
 *****************************************************************/

#ifndef _ETPU_MC_CTRL_AUTO_H_
#define _ETPU_MC_CTRL_AUTO_H_

/****************************************************************
 * Configuration Information.
 ****************************************************************/
#define FS_ETPU_MC_CTRL_PID_STR_SIZE   0x20

/****************************************************************
 * Parameter Definitions.
 ****************************************************************/
#define FS_ETPU_MC_CTRL_PID_PGAIN_OFFSET 0x15
#define FS_ETPU_MC_CTRL_PID_IGAIN_OFFSET 0x09
#define FS_ETPU_MC_CTRL_PID_DGAIN_OFFSET 0x1D
#define FS_ETPU_MC_CTRL_PID_LIMITPOS_OFFSET 0x11
#define FS_ETPU_MC_CTRL_PID_LIMITNEG_OFFSET 0x0D
#define FS_ETPU_MC_CTRL_PID_IK1H_OFFSET 0x01
#define FS_ETPU_MC_CTRL_PID_IK1L_OFFSET 0x05
#define FS_ETPU_MC_CTRL_PID_ERRORK1_OFFSET 0x19
#define FS_ETPU_MC_CTRL_PID_OPTIONS_OFFSET 0x14
#define FS_ETPU_MC_CTRL_PID_FLAGS_OFFSET 0x18

/****************************************************************
 * Values Definitions.
 ****************************************************************/
/* PID portions to calculate */
#define FS_ETPU_MC_CTRL_PID_P_GAIN     1
#define FS_ETPU_MC_CTRL_PID_I_GAIN     2
#define FS_ETPU_MC_CTRL_PID_D_GAIN     4

/* PID saturation flags */
#define FS_ETPU_MC_CTRL_PID_NO_SATUR_FLAG 0
#define FS_ETPU_MC_CTRL_PID_SATUR_POS_FLAG 1
#define FS_ETPU_MC_CTRL_PID_SATUR_NEG_FLAG 2
#endif