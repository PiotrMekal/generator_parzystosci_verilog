/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

/* This file is designed for use with ISim build 0xef153c89 */

#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Designs/Mekal_Tomaszewski/generator_parzystosci/testbench.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {7, 0};
static int ng4[] = {6, 0};
static int ng5[] = {5, 0};
static int ng6[] = {4, 0};
static int ng7[] = {3, 0};
static int ng8[] = {2, 0};
static int ng9[] = {0, 0};



static void I27_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    int t12;

LAB0:    t1 = (t0 + 1264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);

LAB4:    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 788);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, 0, 8, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1180);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 788);
    t6 = (t0 + 788);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4U);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1180);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB6:    xsi_vlogvar_generic_wait_assign_value(t4, t3, 1, 0, *((unsigned int *)t5), 1, 0LL);
    goto LAB7;

LAB8:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 788);
    t6 = (t0 + 788);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4U);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1180);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB9:    xsi_vlogvar_generic_wait_assign_value(t4, t3, 1, 0, *((unsigned int *)t5), 1, 0LL);
    goto LAB10;

LAB11:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 788);
    t6 = (t0 + 788);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4U);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1180);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB12:    xsi_vlogvar_generic_wait_assign_value(t4, t3, 1, 0, *((unsigned int *)t5), 1, 0LL);
    goto LAB13;

LAB14:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 788);
    t6 = (t0 + 788);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4U);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1180);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB15:    xsi_vlogvar_generic_wait_assign_value(t4, t3, 1, 0, *((unsigned int *)t5), 1, 0LL);
    goto LAB16;

LAB17:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 788);
    t6 = (t0 + 788);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4U);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1180);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB18:    xsi_vlogvar_generic_wait_assign_value(t4, t3, 1, 0, *((unsigned int *)t5), 1, 0LL);
    goto LAB19;

LAB20:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 788);
    t6 = (t0 + 788);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4U);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1180);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB21:    xsi_vlogvar_generic_wait_assign_value(t4, t3, 1, 0, *((unsigned int *)t5), 1, 0LL);
    goto LAB22;

LAB23:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 788);
    t6 = (t0 + 788);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4U);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1180);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB24:    xsi_vlogvar_generic_wait_assign_value(t4, t3, 1, 0, *((unsigned int *)t5), 1, 0LL);
    goto LAB25;

LAB26:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 788);
    t6 = (t0 + 788);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4U);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB27;

LAB28:    goto LAB1;

LAB27:    xsi_vlogvar_generic_wait_assign_value(t4, t3, 1, 0, *((unsigned int *)t5), 1, 0LL);
    goto LAB28;

}


extern void work_m_00000000000430327252_1949178628_init()
{
	static char *pe[] = {(void *)I27_0};
	xsi_register_didat("work_m_00000000000430327252_1949178628", "isim/_tmp/work/m_00000000000430327252_1949178628.didat");
	xsi_register_executes(pe);
}
