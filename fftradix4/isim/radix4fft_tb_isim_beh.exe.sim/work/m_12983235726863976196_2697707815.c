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

/* This file is designed for use with ISim build 0x8ddf5b5d */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ahish/Desktop/Assignment-6/fftradix4/radix4fft.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};



static void Cont_27_0(char *t0)
{
    char t4[8];
    char t10[8];
    char t14[8];
    char t17[8];
    char t21[8];
    char t24[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t4, 3, t3, t6, 2, t7, 32, 1);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = (t0 + 1008U);
    t11 = (t8 + 72U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t10, 3, t9, t12, 2, t13, 32, 1);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 3, t4, 3, t10, 3);
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    t15 = (t0 + 1008U);
    t18 = (t15 + 72U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t17, 3, t16, t19, 2, t20, 32, 1);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 3, t14, 3, t17, 3);
    t22 = (t0 + 1048U);
    t23 = *((char **)t22);
    t22 = (t0 + 1008U);
    t25 = (t22 + 72U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t24, 3, t23, t26, 2, t27, 32, 1);
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 3, t21, 3, t24, 3);
    t29 = (t0 + 4736);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 7U;
    t35 = t34;
    t36 = (t28 + 4);
    t37 = *((unsigned int *)t28);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 2);
    t42 = (t0 + 4576);
    *((int *)t42) = 1;

LAB1:    return;
}

static void Cont_28_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4800);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 7U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 2);

LAB1:    return;
}

static void Cont_29_2(char *t0)
{
    char t4[8];
    char t10[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 3016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t4, 3, t3, t6, 2, t7, 32, 1);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = (t0 + 1008U);
    t11 = (t8 + 72U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t10, 3, t9, t12, 2, t13, 32, 1);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 3, t4, 3, t10, 3);
    t15 = (t0 + 4864);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t19, 0, 8);
    t20 = 7U;
    t21 = t20;
    t22 = (t14 + 4);
    t23 = *((unsigned int *)t14);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = (t19 + 4);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 | t20);
    t27 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t27 | t21);
    xsi_driver_vfirst_trans(t15, 3, 5);
    t28 = (t0 + 4592);
    *((int *)t28) = 1;

LAB1:    return;
}

static void Cont_30_3(char *t0)
{
    char t4[8];
    char t10[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 3264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t4, 3, t3, t6, 2, t7, 32, 1);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = (t0 + 1008U);
    t11 = (t8 + 72U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t10, 3, t9, t12, 2, t13, 32, 1);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 3, t4, 3, t10, 3);
    t15 = (t0 + 4928);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t19, 0, 8);
    t20 = 7U;
    t21 = t20;
    t22 = (t14 + 4);
    t23 = *((unsigned int *)t14);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = (t19 + 4);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 | t20);
    t27 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t27 | t21);
    xsi_driver_vfirst_trans(t15, 3, 5);
    t28 = (t0 + 4608);
    *((int *)t28) = 1;

LAB1:    return;
}

static void Cont_31_4(char *t0)
{
    char t4[8];
    char t10[8];
    char t14[8];
    char t17[8];
    char t21[8];
    char t24[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 3512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t4, 3, t3, t6, 2, t7, 32, 1);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = (t0 + 1008U);
    t11 = (t8 + 72U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t10, 3, t9, t12, 2, t13, 32, 1);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 3, t4, 3, t10, 3);
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    t15 = (t0 + 1008U);
    t18 = (t15 + 72U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t17, 3, t16, t19, 2, t20, 32, 1);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 3, t14, 3, t17, 3);
    t22 = (t0 + 1048U);
    t23 = *((char **)t22);
    t22 = (t0 + 1008U);
    t25 = (t22 + 72U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t24, 3, t23, t26, 2, t27, 32, 1);
    memset(t28, 0, 8);
    xsi_vlog_unsigned_minus(t28, 3, t21, 3, t24, 3);
    t29 = (t0 + 4992);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 7U;
    t35 = t34;
    t36 = (t28 + 4);
    t37 = *((unsigned int *)t28);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 6, 8);
    t42 = (t0 + 4624);
    *((int *)t42) = 1;

LAB1:    return;
}

static void Cont_32_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 3760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5056);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 7U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 6, 8);

LAB1:    return;
}

static void Cont_33_6(char *t0)
{
    char t4[8];
    char t10[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 4008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t4, 3, t3, t6, 2, t7, 32, 1);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = (t0 + 1008U);
    t11 = (t8 + 72U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t10, 3, t9, t12, 2, t13, 32, 1);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 3, t4, 3, t10, 3);
    t15 = (t0 + 5120);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t19, 0, 8);
    t20 = 7U;
    t21 = t20;
    t22 = (t14 + 4);
    t23 = *((unsigned int *)t14);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = (t19 + 4);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 | t20);
    t27 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t27 | t21);
    xsi_driver_vfirst_trans(t15, 9, 11);
    t28 = (t0 + 4640);
    *((int *)t28) = 1;

LAB1:    return;
}

static void Cont_34_7(char *t0)
{
    char t4[8];
    char t10[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 4256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t4, 3, t3, t6, 2, t7, 32, 1);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = (t0 + 1008U);
    t11 = (t8 + 72U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t10, 3, t9, t12, 2, t13, 32, 1);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 3, t4, 3, t10, 3);
    t15 = (t0 + 5184);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t19, 0, 8);
    t20 = 7U;
    t21 = t20;
    t22 = (t14 + 4);
    t23 = *((unsigned int *)t14);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = (t19 + 4);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 | t20);
    t27 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t27 | t21);
    xsi_driver_vfirst_trans(t15, 9, 11);
    t28 = (t0 + 4656);
    *((int *)t28) = 1;

LAB1:    return;
}


extern void work_m_12983235726863976196_2697707815_init()
{
	static char *pe[] = {(void *)Cont_27_0,(void *)Cont_28_1,(void *)Cont_29_2,(void *)Cont_30_3,(void *)Cont_31_4,(void *)Cont_32_5,(void *)Cont_33_6,(void *)Cont_34_7};
	xsi_register_didat("work_m_12983235726863976196_2697707815", "isim/radix4fft_tb_isim_beh.exe.sim/work/m_12983235726863976196_2697707815.didat");
	xsi_register_executes(pe);
}
