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
static const char *ng0 = "/home/ahish/Desktop/Assignment-6/fft/radix2fft.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {3, 0};
static int ng4[] = {2, 0};
static int ng5[] = {5, 0};
static int ng6[] = {4, 0};
static int ng7[] = {7, 0};
static int ng8[] = {6, 0};



static void Always_39_0(char *t0)
{
    char t8[8];
    char t32[8];
    char t33[8];
    char t34[8];
    char t62[8];
    char t63[8];
    char t64[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    int t40;
    char *t41;
    unsigned int t42;
    int t43;
    int t44;
    char *t45;
    unsigned int t46;
    int t47;
    int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;

LAB0:    t1 = (t0 + 4120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4440);
    *((int *)t2) = 1;
    t3 = (t0 + 4152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB17;

LAB14:    if (t20 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t8) = 1;

LAB17:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB33;

LAB30:    if (t20 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t8) = 1;

LAB33:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB34;

LAB35:
LAB36:
LAB20:
LAB12:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 3, t5, 32);
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 3);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB53;

LAB50:    if (t20 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t8) = 1;

LAB53:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB54;

LAB55:
LAB56:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(41, ng0);

LAB13:    xsi_set_current_line(42, ng0);
    t30 = (t0 + 1208U);
    t31 = *((char **)t30);
    t30 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t30, t31, 0, 0, 4, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB16:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(46, ng0);

LAB21:    xsi_set_current_line(48, ng0);
    t23 = (t0 + 1368U);
    t24 = *((char **)t23);
    t23 = (t0 + 2248);
    t30 = (t0 + 2248);
    t31 = (t30 + 72U);
    t35 = *((char **)t31);
    t36 = ((char*)((ng2)));
    t37 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t32, t33, t34, ((int*)(t35)), 2, t36, 32, 1, t37, 32, 1);
    t38 = (t32 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    t41 = (t33 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (!(t42));
    t44 = (t40 && t43);
    t45 = (t34 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (!(t46));
    t48 = (t44 && t47);
    if (t48 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    t4 = (t0 + 2248);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    t9 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t8, t32, t33, ((int*)(t6)), 2, t7, 32, 1, t9, 32, 1);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t40 = (!(t11));
    t23 = (t32 + 4);
    t12 = *((unsigned int *)t23);
    t43 = (!(t12));
    t44 = (t40 && t43);
    t24 = (t33 + 4);
    t13 = *((unsigned int *)t24);
    t47 = (!(t13));
    t48 = (t44 && t47);
    if (t48 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    t4 = (t0 + 2248);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    t9 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t8, t32, t33, ((int*)(t6)), 2, t7, 32, 1, t9, 32, 1);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t40 = (!(t11));
    t23 = (t32 + 4);
    t12 = *((unsigned int *)t23);
    t43 = (!(t12));
    t44 = (t40 && t43);
    t24 = (t33 + 4);
    t13 = *((unsigned int *)t24);
    t47 = (!(t13));
    t48 = (t44 && t47);
    if (t48 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    t4 = (t0 + 2248);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    t9 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t8, t32, t33, ((int*)(t6)), 2, t7, 32, 1, t9, 32, 1);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t40 = (!(t11));
    t23 = (t32 + 4);
    t12 = *((unsigned int *)t23);
    t43 = (!(t12));
    t44 = (t40 && t43);
    t24 = (t33 + 4);
    t13 = *((unsigned int *)t24);
    t47 = (!(t13));
    t48 = (t44 && t47);
    if (t48 == 1)
        goto LAB28;

LAB29:    goto LAB20;

LAB22:    t49 = *((unsigned int *)t34);
    t50 = (t49 + 0);
    t51 = *((unsigned int *)t32);
    t52 = *((unsigned int *)t33);
    t53 = (t51 - t52);
    t54 = (t53 + 1);
    xsi_vlogvar_wait_assign_value(t23, t24, t50, *((unsigned int *)t33), t54, 0LL);
    goto LAB23;

LAB24:    t14 = *((unsigned int *)t33);
    t50 = (t14 + 0);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t32);
    t53 = (t15 - t16);
    t54 = (t53 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t50, *((unsigned int *)t32), t54, 0LL);
    goto LAB25;

LAB26:    t14 = *((unsigned int *)t33);
    t50 = (t14 + 0);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t32);
    t53 = (t15 - t16);
    t54 = (t53 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t50, *((unsigned int *)t32), t54, 0LL);
    goto LAB27;

LAB28:    t14 = *((unsigned int *)t33);
    t50 = (t14 + 0);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t32);
    t53 = (t15 - t16);
    t54 = (t53 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t50, *((unsigned int *)t32), t54, 0LL);
    goto LAB29;

LAB32:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(53, ng0);

LAB37:    xsi_set_current_line(55, ng0);
    t23 = (t0 + 2248);
    t24 = (t23 + 56U);
    t30 = *((char **)t24);
    memset(t32, 0, 8);
    t31 = (t32 + 4);
    t35 = (t30 + 4);
    t39 = *((unsigned int *)t30);
    t42 = (t39 >> 0);
    *((unsigned int *)t32) = t42;
    t46 = *((unsigned int *)t35);
    t49 = (t46 >> 0);
    *((unsigned int *)t31) = t49;
    t51 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t51 & 3U);
    t52 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t52 & 3U);
    t36 = (t0 + 2248);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memset(t33, 0, 8);
    t41 = (t33 + 4);
    t45 = (t38 + 4);
    t55 = *((unsigned int *)t38);
    t56 = (t55 >> 4);
    *((unsigned int *)t33) = t56;
    t57 = *((unsigned int *)t45);
    t58 = (t57 >> 4);
    *((unsigned int *)t41) = t58;
    t59 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t59 & 3U);
    t60 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t60 & 3U);
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 2, t32, 2, t33, 2);
    t61 = (t0 + 2408);
    t65 = (t0 + 2408);
    t66 = (t65 + 72U);
    t67 = *((char **)t66);
    t68 = ((char*)((ng2)));
    t69 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t62, t63, t64, ((int*)(t67)), 2, t68, 32, 1, t69, 32, 1);
    t70 = (t62 + 4);
    t71 = *((unsigned int *)t70);
    t40 = (!(t71));
    t72 = (t63 + 4);
    t73 = *((unsigned int *)t72);
    t43 = (!(t73));
    t44 = (t40 && t43);
    t74 = (t64 + 4);
    t75 = *((unsigned int *)t74);
    t47 = (!(t75));
    t48 = (t44 && t47);
    if (t48 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 2);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 2);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 3U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 3U);
    t7 = (t0 + 2408);
    t9 = (t0 + 2408);
    t10 = (t9 + 72U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng3)));
    t30 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t32, t33, t34, ((int*)(t23)), 2, t24, 32, 1, t30, 32, 1);
    t31 = (t32 + 4);
    t17 = *((unsigned int *)t31);
    t40 = (!(t17));
    t35 = (t33 + 4);
    t18 = *((unsigned int *)t35);
    t43 = (!(t18));
    t44 = (t40 && t43);
    t36 = (t34 + 4);
    t19 = *((unsigned int *)t36);
    t47 = (!(t19));
    t48 = (t44 && t47);
    if (t48 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t32, 0, 8);
    t5 = (t32 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 6);
    *((unsigned int *)t32) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 6);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t15 & 3U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 3U);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_unary_minus(t8, 2, t32, 2);
    t7 = (t0 + 2568);
    t9 = (t0 + 2568);
    t10 = (t9 + 72U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng3)));
    t30 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t33, t34, t62, ((int*)(t23)), 2, t24, 32, 1, t30, 32, 1);
    t31 = (t33 + 4);
    t17 = *((unsigned int *)t31);
    t40 = (!(t17));
    t35 = (t34 + 4);
    t18 = *((unsigned int *)t35);
    t43 = (!(t18));
    t44 = (t40 && t43);
    t36 = (t62 + 4);
    t19 = *((unsigned int *)t36);
    t47 = (!(t19));
    t48 = (t44 && t47);
    if (t48 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 0);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 3U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 3U);
    t7 = (t0 + 2248);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t32, 0, 8);
    t23 = (t32 + 4);
    t24 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    t18 = (t17 >> 4);
    *((unsigned int *)t32) = t18;
    t19 = *((unsigned int *)t24);
    t20 = (t19 >> 4);
    *((unsigned int *)t23) = t20;
    t21 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t21 & 3U);
    t22 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t22 & 3U);
    memset(t33, 0, 8);
    xsi_vlog_unsigned_minus(t33, 2, t8, 2, t32, 2);
    t30 = (t0 + 2408);
    t31 = (t0 + 2408);
    t35 = (t31 + 72U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng5)));
    t38 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t34, t62, t63, ((int*)(t36)), 2, t37, 32, 1, t38, 32, 1);
    t41 = (t34 + 4);
    t25 = *((unsigned int *)t41);
    t40 = (!(t25));
    t45 = (t62 + 4);
    t26 = *((unsigned int *)t45);
    t43 = (!(t26));
    t44 = (t40 && t43);
    t61 = (t63 + 4);
    t27 = *((unsigned int *)t61);
    t47 = (!(t27));
    t48 = (t44 && t47);
    if (t48 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 2);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 2);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 3U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 3U);
    t7 = (t0 + 2408);
    t9 = (t0 + 2408);
    t10 = (t9 + 72U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng7)));
    t30 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t32, t33, t34, ((int*)(t23)), 2, t24, 32, 1, t30, 32, 1);
    t31 = (t32 + 4);
    t17 = *((unsigned int *)t31);
    t40 = (!(t17));
    t35 = (t33 + 4);
    t18 = *((unsigned int *)t35);
    t43 = (!(t18));
    t44 = (t40 && t43);
    t36 = (t34 + 4);
    t19 = *((unsigned int *)t36);
    t47 = (!(t19));
    t48 = (t44 && t47);
    if (t48 == 1)
        goto LAB46;

LAB47:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 6);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 6);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 3U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 3U);
    t7 = (t0 + 2568);
    t9 = (t0 + 2568);
    t10 = (t9 + 72U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng7)));
    t30 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t32, t33, t34, ((int*)(t23)), 2, t24, 32, 1, t30, 32, 1);
    t31 = (t32 + 4);
    t17 = *((unsigned int *)t31);
    t40 = (!(t17));
    t35 = (t33 + 4);
    t18 = *((unsigned int *)t35);
    t43 = (!(t18));
    t44 = (t40 && t43);
    t36 = (t34 + 4);
    t19 = *((unsigned int *)t36);
    t47 = (!(t19));
    t48 = (t44 && t47);
    if (t48 == 1)
        goto LAB48;

LAB49:    goto LAB36;

LAB38:    t76 = *((unsigned int *)t64);
    t50 = (t76 + 0);
    t77 = *((unsigned int *)t62);
    t78 = *((unsigned int *)t63);
    t53 = (t77 - t78);
    t54 = (t53 + 1);
    xsi_vlogvar_wait_assign_value(t61, t34, t50, *((unsigned int *)t63), t54, 0LL);
    goto LAB39;

LAB40:    t20 = *((unsigned int *)t34);
    t50 = (t20 + 0);
    t21 = *((unsigned int *)t32);
    t22 = *((unsigned int *)t33);
    t53 = (t21 - t22);
    t54 = (t53 + 1);
    xsi_vlogvar_wait_assign_value(t7, t8, t50, *((unsigned int *)t33), t54, 0LL);
    goto LAB41;

LAB42:    t20 = *((unsigned int *)t62);
    t50 = (t20 + 0);
    t21 = *((unsigned int *)t33);
    t22 = *((unsigned int *)t34);
    t53 = (t21 - t22);
    t54 = (t53 + 1);
    xsi_vlogvar_wait_assign_value(t7, t8, t50, *((unsigned int *)t34), t54, 0LL);
    goto LAB43;

LAB44:    t28 = *((unsigned int *)t63);
    t50 = (t28 + 0);
    t29 = *((unsigned int *)t34);
    t39 = *((unsigned int *)t62);
    t53 = (t29 - t39);
    t54 = (t53 + 1);
    xsi_vlogvar_wait_assign_value(t30, t33, t50, *((unsigned int *)t62), t54, 0LL);
    goto LAB45;

LAB46:    t20 = *((unsigned int *)t34);
    t50 = (t20 + 0);
    t21 = *((unsigned int *)t32);
    t22 = *((unsigned int *)t33);
    t53 = (t21 - t22);
    t54 = (t53 + 1);
    xsi_vlogvar_wait_assign_value(t7, t8, t50, *((unsigned int *)t33), t54, 0LL);
    goto LAB47;

LAB48:    t20 = *((unsigned int *)t34);
    t50 = (t20 + 0);
    t21 = *((unsigned int *)t32);
    t22 = *((unsigned int *)t33);
    t53 = (t21 - t22);
    t54 = (t53 + 1);
    xsi_vlogvar_wait_assign_value(t7, t8, t50, *((unsigned int *)t33), t54, 0LL);
    goto LAB49;

LAB52:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(64, ng0);

LAB57:    xsi_set_current_line(65, ng0);
    t23 = ((char*)((ng2)));
    t24 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB56;

}


extern void work_m_04176167823185586229_2241896187_init()
{
	static char *pe[] = {(void *)Always_39_0};
	xsi_register_didat("work_m_04176167823185586229_2241896187", "isim/radix2ffttb_isim_beh.exe.sim/work/m_04176167823185586229_2241896187.didat");
	xsi_register_executes(pe);
}
