/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/mohsen/Desktop/Proje_VerilogCode/9/Code/Shift/Shift.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {7, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};



static void Always_33_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    int t31;

LAB0:    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3624);
    *((int *)t2) = 1;
    t3 = (t0 + 3336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t5 = (t0 + 1824U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(40, ng0);

LAB16:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);

LAB17:    t2 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t31 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t31 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng4)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t31 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng5)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t31 == 1)
        goto LAB24;

LAB25:
LAB26:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(36, ng0);

LAB15:    xsi_set_current_line(37, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2384);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    goto LAB14;

LAB18:    xsi_set_current_line(42, ng0);
    t5 = (t0 + 2384);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 2384);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 8);
    goto LAB26;

LAB20:    xsi_set_current_line(43, ng0);

LAB27:    xsi_set_current_line(43, ng0);
    t5 = (t0 + 2384);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_rshift(t4, 8, t12, 8, t13, 32);
    t14 = (t0 + 2384);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 8);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1504U);
    t5 = *((char **)t2);
    t2 = (t0 + 2384);
    t6 = (t0 + 2384);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t4, t13, 2, t14, 32, 1);
    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t31 = (!(t7));
    if (t31 == 1)
        goto LAB28;

LAB29:    goto LAB26;

LAB22:    xsi_set_current_line(44, ng0);

LAB30:    xsi_set_current_line(44, ng0);
    t5 = (t0 + 2384);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_lshift(t4, 8, t12, 8, t13, 32);
    t14 = (t0 + 2384);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 8);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1664U);
    t5 = *((char **)t2);
    t2 = (t0 + 2384);
    t6 = (t0 + 2384);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t4, t13, 2, t14, 32, 1);
    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t31 = (!(t7));
    if (t31 == 1)
        goto LAB31;

LAB32:    goto LAB26;

LAB24:    xsi_set_current_line(45, ng0);
    t5 = (t0 + 1184U);
    t6 = *((char **)t5);
    t5 = (t0 + 2384);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    goto LAB26;

LAB28:    xsi_vlogvar_assign_value(t2, t5, 0, *((unsigned int *)t4), 1);
    goto LAB29;

LAB31:    xsi_vlogvar_assign_value(t2, t5, 0, *((unsigned int *)t4), 1);
    goto LAB32;

}


extern void work_m_00000000002455255761_1778936876_init()
{
	static char *pe[] = {(void *)Always_33_0};
	xsi_register_didat("work_m_00000000002455255761_1778936876", "isim/TestBench_isim_beh.exe.sim/work/m_00000000002455255761_1778936876.didat");
	xsi_register_executes(pe);
}
