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
static int ng3[] = {2, 0};
static int ng4[] = {5, 0};
static int ng5[] = {3, 0};
static int ng6[] = {8, 0};
static int ng7[] = {6, 0};
static int ng8[] = {11, 0};
static int ng9[] = {9, 0};



static void Always_36_0(char *t0)
{
    char t8[8];
    char t26[8];
    char t61[8];
    char t62[8];
    char t70[8];
    char t71[8];
    char t72[8];
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
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    char *t69;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;

LAB0:    t1 = (t0 + 4120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4440);
    *((int *)t2) = 1;
    t3 = (t0 + 4152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 2888);
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

LAB9:    t24 = (t0 + 1208U);
    t25 = *((char **)t24);
    t27 = *((unsigned int *)t8);
    t28 = *((unsigned int *)t25);
    t29 = (t27 | t28);
    *((unsigned int *)t26) = t29;
    t24 = (t8 + 4);
    t30 = (t25 + 4);
    t31 = (t26 + 4);
    t32 = *((unsigned int *)t24);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB10;

LAB11:
LAB12:    t53 = (t26 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t26);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2888);
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
        goto LAB20;

LAB17:    if (t20 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t8) = 1;

LAB20:    t10 = (t8 + 4);
    t27 = *((unsigned int *)t10);
    t28 = (~(t27));
    t29 = *((unsigned int *)t8);
    t32 = (t29 & t28);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2888);
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
        goto LAB36;

LAB33:    if (t20 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t8) = 1;

LAB36:    t10 = (t8 + 4);
    t27 = *((unsigned int *)t10);
    t28 = (~(t27));
    t29 = *((unsigned int *)t8);
    t32 = (t29 & t28);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB37;

LAB38:
LAB39:
LAB23:
LAB15:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 3, t5, 32);
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 3);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
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
        goto LAB56;

LAB53:    if (t20 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t8) = 1;

LAB56:    t10 = (t8 + 4);
    t27 = *((unsigned int *)t10);
    t28 = (~(t27));
    t29 = *((unsigned int *)t8);
    t32 = (t29 & t28);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB57;

LAB58:
LAB59:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    t37 = *((unsigned int *)t26);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t26) = (t37 | t38);
    t39 = (t8 + 4);
    t40 = (t25 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (~(t41));
    t43 = *((unsigned int *)t8);
    t44 = (t43 & t42);
    t45 = *((unsigned int *)t40);
    t46 = (~(t45));
    t47 = *((unsigned int *)t25);
    t48 = (t47 & t46);
    t49 = (~(t44));
    t50 = (~(t48));
    t51 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t51 & t49);
    t52 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t52 & t50);
    goto LAB12;

LAB13:    xsi_set_current_line(38, ng0);

LAB16:    xsi_set_current_line(39, ng0);
    t59 = (t0 + 1368U);
    t60 = *((char **)t59);
    t59 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t59, t60, 0, 0, 4, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB15;

LAB19:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(43, ng0);

LAB24:    xsi_set_current_line(44, ng0);
    t23 = (t0 + 1528U);
    t24 = *((char **)t23);
    t23 = (t0 + 3208);
    t25 = (t0 + 3208);
    t30 = (t25 + 72U);
    t31 = *((char **)t30);
    t39 = ((char*)((ng3)));
    t40 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t26, t61, t62, ((int*)(t31)), 2, t39, 32, 1, t40, 32, 1);
    t53 = (t26 + 4);
    t34 = *((unsigned int *)t53);
    t44 = (!(t34));
    t59 = (t61 + 4);
    t35 = *((unsigned int *)t59);
    t48 = (!(t35));
    t63 = (t44 && t48);
    t60 = (t62 + 4);
    t36 = *((unsigned int *)t60);
    t64 = (!(t36));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    t4 = (t0 + 3208);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    t9 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t8, t26, t61, ((int*)(t6)), 2, t7, 32, 1, t9, 32, 1);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t44 = (!(t11));
    t23 = (t26 + 4);
    t12 = *((unsigned int *)t23);
    t48 = (!(t12));
    t63 = (t44 && t48);
    t24 = (t61 + 4);
    t13 = *((unsigned int *)t24);
    t64 = (!(t13));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    t4 = (t0 + 3208);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    t9 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t8, t26, t61, ((int*)(t6)), 2, t7, 32, 1, t9, 32, 1);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t44 = (!(t11));
    t23 = (t26 + 4);
    t12 = *((unsigned int *)t23);
    t48 = (!(t12));
    t63 = (t44 && t48);
    t24 = (t61 + 4);
    t13 = *((unsigned int *)t24);
    t64 = (!(t13));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    t4 = (t0 + 3208);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng8)));
    t9 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t8, t26, t61, ((int*)(t6)), 2, t7, 32, 1, t9, 32, 1);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t44 = (!(t11));
    t23 = (t26 + 4);
    t12 = *((unsigned int *)t23);
    t48 = (!(t12));
    t63 = (t44 && t48);
    t24 = (t61 + 4);
    t13 = *((unsigned int *)t24);
    t64 = (!(t13));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB31;

LAB32:    goto LAB23;

LAB25:    t37 = *((unsigned int *)t62);
    t66 = (t37 + 0);
    t38 = *((unsigned int *)t26);
    t41 = *((unsigned int *)t61);
    t67 = (t38 - t41);
    t68 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t23, t24, t66, *((unsigned int *)t61), t68, 0LL);
    goto LAB26;

LAB27:    t14 = *((unsigned int *)t61);
    t66 = (t14 + 0);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t26);
    t67 = (t15 - t16);
    t68 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t66, *((unsigned int *)t26), t68, 0LL);
    goto LAB28;

LAB29:    t14 = *((unsigned int *)t61);
    t66 = (t14 + 0);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t26);
    t67 = (t15 - t16);
    t68 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t66, *((unsigned int *)t26), t68, 0LL);
    goto LAB30;

LAB31:    t14 = *((unsigned int *)t61);
    t66 = (t14 + 0);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t26);
    t67 = (t15 - t16);
    t68 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t66, *((unsigned int *)t26), t68, 0LL);
    goto LAB32;

LAB35:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(49, ng0);

LAB40:    xsi_set_current_line(50, ng0);
    t23 = (t0 + 3208);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    t30 = (t26 + 4);
    t31 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = (t34 >> 0);
    *((unsigned int *)t26) = t35;
    t36 = *((unsigned int *)t31);
    t37 = (t36 >> 0);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t38 & 7U);
    t41 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t41 & 7U);
    t39 = (t0 + 3208);
    t40 = (t39 + 56U);
    t53 = *((char **)t40);
    memset(t61, 0, 8);
    t59 = (t61 + 4);
    t60 = (t53 + 4);
    t42 = *((unsigned int *)t53);
    t43 = (t42 >> 6);
    *((unsigned int *)t61) = t43;
    t45 = *((unsigned int *)t60);
    t46 = (t45 >> 6);
    *((unsigned int *)t59) = t46;
    t47 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t47 & 7U);
    t49 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t49 & 7U);
    memset(t62, 0, 8);
    xsi_vlog_unsigned_add(t62, 3, t26, 3, t61, 3);
    t69 = (t0 + 2408);
    t73 = (t0 + 2408);
    t74 = (t73 + 72U);
    t75 = *((char **)t74);
    t76 = ((char*)((ng3)));
    t77 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t70, t71, t72, ((int*)(t75)), 2, t76, 32, 1, t77, 32, 1);
    t78 = (t70 + 4);
    t50 = *((unsigned int *)t78);
    t44 = (!(t50));
    t79 = (t71 + 4);
    t51 = *((unsigned int *)t79);
    t48 = (!(t51));
    t63 = (t44 && t48);
    t80 = (t72 + 4);
    t52 = *((unsigned int *)t80);
    t64 = (!(t52));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB41;

LAB42:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 3);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 3);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 7U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 7U);
    t7 = (t0 + 2408);
    t9 = (t0 + 2408);
    t10 = (t9 + 72U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng4)));
    t25 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t26, t61, t62, ((int*)(t23)), 2, t24, 32, 1, t25, 32, 1);
    t30 = (t26 + 4);
    t17 = *((unsigned int *)t30);
    t44 = (!(t17));
    t31 = (t61 + 4);
    t18 = *((unsigned int *)t31);
    t48 = (!(t18));
    t63 = (t44 && t48);
    t39 = (t62 + 4);
    t19 = *((unsigned int *)t39);
    t64 = (!(t19));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t26, 0, 8);
    t5 = (t26 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 9);
    *((unsigned int *)t26) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 9);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t15 & 7U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 7U);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_unary_minus(t8, 3, t26, 3);
    t7 = (t0 + 2568);
    t9 = (t0 + 2568);
    t10 = (t9 + 72U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng4)));
    t25 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t61, t62, t70, ((int*)(t23)), 2, t24, 32, 1, t25, 32, 1);
    t30 = (t61 + 4);
    t17 = *((unsigned int *)t30);
    t44 = (!(t17));
    t31 = (t62 + 4);
    t18 = *((unsigned int *)t31);
    t48 = (!(t18));
    t63 = (t44 && t48);
    t39 = (t70 + 4);
    t19 = *((unsigned int *)t39);
    t64 = (!(t19));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB45;

LAB46:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3208);
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
    *((unsigned int *)t8) = (t15 & 7U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 7U);
    t7 = (t0 + 3208);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t26, 0, 8);
    t23 = (t26 + 4);
    t24 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    t18 = (t17 >> 6);
    *((unsigned int *)t26) = t18;
    t19 = *((unsigned int *)t24);
    t20 = (t19 >> 6);
    *((unsigned int *)t23) = t20;
    t21 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t21 & 7U);
    t22 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t22 & 7U);
    memset(t61, 0, 8);
    xsi_vlog_unsigned_minus(t61, 3, t8, 3, t26, 3);
    t25 = (t0 + 2408);
    t30 = (t0 + 2408);
    t31 = (t30 + 72U);
    t39 = *((char **)t31);
    t40 = ((char*)((ng6)));
    t53 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t62, t70, t71, ((int*)(t39)), 2, t40, 32, 1, t53, 32, 1);
    t59 = (t62 + 4);
    t27 = *((unsigned int *)t59);
    t44 = (!(t27));
    t60 = (t70 + 4);
    t28 = *((unsigned int *)t60);
    t48 = (!(t28));
    t63 = (t44 && t48);
    t69 = (t71 + 4);
    t29 = *((unsigned int *)t69);
    t64 = (!(t29));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 3);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 3);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 7U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 7U);
    t7 = (t0 + 2408);
    t9 = (t0 + 2408);
    t10 = (t9 + 72U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng8)));
    t25 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t26, t61, t62, ((int*)(t23)), 2, t24, 32, 1, t25, 32, 1);
    t30 = (t26 + 4);
    t17 = *((unsigned int *)t30);
    t44 = (!(t17));
    t31 = (t61 + 4);
    t18 = *((unsigned int *)t31);
    t48 = (!(t18));
    t63 = (t44 && t48);
    t39 = (t62 + 4);
    t19 = *((unsigned int *)t39);
    t64 = (!(t19));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 9);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 9);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 7U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 7U);
    t7 = (t0 + 2568);
    t9 = (t0 + 2568);
    t10 = (t9 + 72U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng8)));
    t25 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t26, t61, t62, ((int*)(t23)), 2, t24, 32, 1, t25, 32, 1);
    t30 = (t26 + 4);
    t17 = *((unsigned int *)t30);
    t44 = (!(t17));
    t31 = (t61 + 4);
    t18 = *((unsigned int *)t31);
    t48 = (!(t18));
    t63 = (t44 && t48);
    t39 = (t62 + 4);
    t19 = *((unsigned int *)t39);
    t64 = (!(t19));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB51;

LAB52:    goto LAB39;

LAB41:    t54 = *((unsigned int *)t72);
    t66 = (t54 + 0);
    t55 = *((unsigned int *)t70);
    t56 = *((unsigned int *)t71);
    t67 = (t55 - t56);
    t68 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t69, t62, t66, *((unsigned int *)t71), t68, 0LL);
    goto LAB42;

LAB43:    t20 = *((unsigned int *)t62);
    t66 = (t20 + 0);
    t21 = *((unsigned int *)t26);
    t22 = *((unsigned int *)t61);
    t67 = (t21 - t22);
    t68 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t7, t8, t66, *((unsigned int *)t61), t68, 0LL);
    goto LAB44;

LAB45:    t20 = *((unsigned int *)t70);
    t66 = (t20 + 0);
    t21 = *((unsigned int *)t61);
    t22 = *((unsigned int *)t62);
    t67 = (t21 - t22);
    t68 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t7, t8, t66, *((unsigned int *)t62), t68, 0LL);
    goto LAB46;

LAB47:    t32 = *((unsigned int *)t71);
    t66 = (t32 + 0);
    t33 = *((unsigned int *)t62);
    t34 = *((unsigned int *)t70);
    t67 = (t33 - t34);
    t68 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t25, t61, t66, *((unsigned int *)t70), t68, 0LL);
    goto LAB48;

LAB49:    t20 = *((unsigned int *)t62);
    t66 = (t20 + 0);
    t21 = *((unsigned int *)t26);
    t22 = *((unsigned int *)t61);
    t67 = (t21 - t22);
    t68 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t7, t8, t66, *((unsigned int *)t61), t68, 0LL);
    goto LAB50;

LAB51:    t20 = *((unsigned int *)t62);
    t66 = (t20 + 0);
    t21 = *((unsigned int *)t26);
    t22 = *((unsigned int *)t61);
    t67 = (t21 - t22);
    t68 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t7, t8, t66, *((unsigned int *)t61), t68, 0LL);
    goto LAB52;

LAB55:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(59, ng0);

LAB60:    xsi_set_current_line(60, ng0);
    t23 = ((char*)((ng2)));
    t24 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB59;

}


extern void work_m_15969062398244335785_2241896187_init()
{
	static char *pe[] = {(void *)Always_36_0};
	xsi_register_didat("work_m_15969062398244335785_2241896187", "isim/radix2fft_tb_isim_beh.exe.sim/work/m_15969062398244335785_2241896187.didat");
	xsi_register_executes(pe);
}
