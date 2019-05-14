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
static unsigned int ng0[] = {7U, 0U};
static unsigned int ng1[] = {3U, 0U};
static unsigned int ng2[] = {97U, 0U};



static void C26_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;

LAB0:    t1 = (t0 + 1348U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng0)));
    t3 = (t0 + 1700);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    t8 = (t7 + 4U);
    t9 = 15U;
    t10 = t9;
    t11 = (t2 + 4U);
    t12 = *((unsigned int *)t2);
    t9 = (t9 & t12);
    t13 = *((unsigned int *)t11);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 4294967280U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 | t9);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 4294967280U);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 | t10);
    xsi_driver_vfirst_trans(t3, 0, 3);

LAB1:    return;
}

static void C27_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 1476U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 564U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4U);
    t7 = (t6 + 4U);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t6);
    t9 = (t9 & 1);
    if (*((unsigned int *)t7) != 0)
        goto LAB4;

LAB5:    t10 = 1;

LAB7:    t11 = (t10 <= 7);
    if (t11 == 1)
        goto LAB8;

LAB9:    *((unsigned int *)t5) = t9;

LAB6:    memset(t4, 0, 8);
    t13 = (t4 + 4U);
    t14 = (t5 + 4U);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t5);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t14) != 0)
        goto LAB13;

LAB14:    t20 = (t4 + 4U);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB15;

LAB16:    t25 = *((unsigned int *)t4);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t20) > 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t4) > 0)
        goto LAB21;

LAB22:    memcpy(t3, t29, 8);

LAB23:    t30 = (t0 + 1736);
    t31 = (t30 + 32U);
    t32 = *((char **)t31);
    t33 = (t32 + 40U);
    t34 = *((char **)t33);
    t35 = (t34 + 4U);
    t36 = 255U;
    t37 = t36;
    t38 = (t3 + 4U);
    t39 = *((unsigned int *)t3);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 4294967040U);
    t42 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t42 | t36);
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 4294967040U);
    t44 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t44 | t37);
    xsi_driver_vfirst_trans(t30, 0, 7);
    t45 = (t0 + 1656);
    *((int *)t45) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t2) = 1;
    goto LAB6;

LAB8:    t8 = (t8 >> 1);
    t12 = (t8 & 1);
    t9 = (t9 ^ t12);

LAB10:    t10 = (t10 + 1);
    goto LAB7;

LAB11:    *((unsigned int *)t4) = 1;
    goto LAB14;

LAB13:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB15:    t24 = ((char*)((ng1)));
    goto LAB16;

LAB17:    t29 = ((char*)((ng2)));
    goto LAB18;

LAB19:    xsi_vlog_unsigned_bit_combine(t3, 8, t24, 8, t29, 8);
    goto LAB23;

LAB21:    memcpy(t3, t24, 8);
    goto LAB23;

}


extern void work_m_00000000003577684188_3823007873_init()
{
	static char *pe[] = {(void *)C26_0,(void *)C27_1};
	xsi_register_didat("work_m_00000000003577684188_3823007873", "isim/_tmp/work/m_00000000003577684188_3823007873.didat");
	xsi_register_executes(pe);
}
