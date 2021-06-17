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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/csehome/gunhee2001/cpu_behavior/cpu.v";
static int ng1[] = {0, 0};
static int ng2[] = {16, 0};
static int ng3[] = {1, 0};
static int ng4[] = {4, 0};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {3U, 0U};



static void Initial_35_0(char *t0)
{
    char t5[8];
    char t16[8];
    char t17[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    int t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;

LAB0:    xsi_set_current_line(35, ng0);

LAB2:    xsi_set_current_line(36, ng0);
    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3048);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(40, ng0);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB11:    t1 = (t0 + 3048);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB6:    xsi_set_current_line(37, ng0);
    t12 = (t0 + 3048);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 2408);
    t18 = (t0 + 2408);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2408);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 3048);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_convert_array_indices(t16, t17, t20, t23, 2, 1, t26, 32, 1);
    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 3048);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_signed_unary_minus(t5, 32, t3, 32);
    t4 = (t0 + 2408);
    t6 = (t0 + 2408);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 2408);
    t15 = (t14 + 64U);
    t18 = *((char **)t15);
    t19 = (t0 + 3048);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng2)));
    memset(t38, 0, 8);
    xsi_vlog_signed_add(t38, 32, t21, 32, t22, 32);
    xsi_vlog_generic_convert_array_indices(t16, t17, t13, t18, 2, 1, t38, 32, 1);
    t23 = (t16 + 4);
    t7 = *((unsigned int *)t23);
    t29 = (!(t7));
    t24 = (t17 + 4);
    t8 = *((unsigned int *)t24);
    t32 = (!(t8));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 3048);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t15, t14, 0, *((unsigned int *)t17), t37);
    goto LAB8;

LAB9:    t9 = *((unsigned int *)t16);
    t10 = *((unsigned int *)t17);
    t36 = (t9 - t10);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t4, t5, 0, *((unsigned int *)t17), t37);
    goto LAB10;

LAB12:    xsi_set_current_line(40, ng0);

LAB14:    xsi_set_current_line(41, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2568);
    t14 = (t0 + 2568);
    t15 = (t14 + 72U);
    t18 = *((char **)t15);
    t19 = (t0 + 2568);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3048);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t16, t17, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t16 + 4);
    t28 = *((unsigned int *)t25);
    t29 = (!(t28));
    t26 = (t17 + 4);
    t31 = *((unsigned int *)t26);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 3048);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB11;

LAB15:    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t17), t37);
    goto LAB16;

}

static void Always_49_1(char *t0)
{
    char t4[8];
    char t19[8];
    char t26[8];
    char t39[8];
    char t46[8];
    char t56[8];
    char t58[8];
    char t59[8];
    char t66[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t57;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    int t78;
    char *t79;
    unsigned int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;

LAB0:    t1 = (t0 + 4208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 4776);
    *((int *)t2) = 1;
    t3 = (t0 + 4240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 6);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 6);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 3U);

LAB6:    t14 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t14, 2);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t5, 8, t6, 32);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t19, 0, 0, 8);
    goto LAB2;

LAB7:    xsi_set_current_line(52, ng0);

LAB16:    xsi_set_current_line(52, ng0);
    t16 = (t0 + 2568);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t20 = (t0 + 2568);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2568);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t27 = (t0 + 1048U);
    t28 = *((char **)t27);
    memset(t26, 0, 8);
    t27 = (t26 + 4);
    t29 = (t28 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (t30 >> 2);
    *((unsigned int *)t26) = t31;
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 2);
    *((unsigned int *)t27) = t33;
    t34 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t34 & 3U);
    t35 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t35 & 3U);
    xsi_vlog_generic_get_array_select_value(t19, 8, t18, t22, t25, 2, 1, t26, 2, 2);
    t36 = (t0 + 2568);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t40 = (t0 + 2568);
    t41 = (t40 + 72U);
    t42 = *((char **)t41);
    t43 = (t0 + 2568);
    t44 = (t43 + 64U);
    t45 = *((char **)t44);
    t47 = (t0 + 1048U);
    t48 = *((char **)t47);
    memset(t46, 0, 8);
    t47 = (t46 + 4);
    t49 = (t48 + 4);
    t50 = *((unsigned int *)t48);
    t51 = (t50 >> 4);
    *((unsigned int *)t46) = t51;
    t52 = *((unsigned int *)t49);
    t53 = (t52 >> 4);
    *((unsigned int *)t47) = t53;
    t54 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t54 & 3U);
    t55 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t55 & 3U);
    xsi_vlog_generic_get_array_select_value(t39, 8, t38, t42, t45, 2, 1, t46, 2, 2);
    memset(t56, 0, 8);
    xsi_vlog_unsigned_add(t56, 8, t19, 8, t39, 8);
    t57 = (t0 + 2568);
    t60 = (t0 + 2568);
    t61 = (t60 + 72U);
    t62 = *((char **)t61);
    t63 = (t0 + 2568);
    t64 = (t63 + 64U);
    t65 = *((char **)t64);
    t67 = (t0 + 1048U);
    t68 = *((char **)t67);
    memset(t66, 0, 8);
    t67 = (t66 + 4);
    t69 = (t68 + 4);
    t70 = *((unsigned int *)t68);
    t71 = (t70 >> 0);
    *((unsigned int *)t66) = t71;
    t72 = *((unsigned int *)t69);
    t73 = (t72 >> 0);
    *((unsigned int *)t67) = t73;
    t74 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t74 & 3U);
    t75 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t75 & 3U);
    xsi_vlog_generic_convert_array_indices(t58, t59, t62, t65, 2, 1, t66, 2, 2);
    t76 = (t58 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (!(t77));
    t79 = (t59 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (!(t80));
    t82 = (t78 && t81);
    if (t82 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2568);
    t7 = (t6 + 72U);
    t14 = *((char **)t7);
    t16 = (t0 + 2568);
    t17 = (t16 + 64U);
    t18 = *((char **)t17);
    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    memset(t26, 0, 8);
    t20 = (t26 + 4);
    t22 = (t21 + 4);
    t8 = *((unsigned int *)t21);
    t9 = (t8 >> 0);
    *((unsigned int *)t26) = t9;
    t10 = *((unsigned int *)t22);
    t11 = (t10 >> 0);
    *((unsigned int *)t20) = t11;
    t12 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t12 & 3U);
    t13 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t13 & 3U);
    xsi_vlog_generic_get_array_select_value(t19, 8, t5, t14, t18, 2, 1, t26, 2, 2);
    t23 = (t0 + 2888);
    xsi_vlogvar_assign_value(t23, t19, 0, 0, 8);
    goto LAB15;

LAB9:    xsi_set_current_line(55, ng0);

LAB19:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 2408);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2408);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = (t0 + 2408);
    t18 = (t17 + 64U);
    t20 = *((char **)t18);
    t21 = (t0 + 2568);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 2568);
    t25 = (t24 + 72U);
    t27 = *((char **)t25);
    t28 = (t0 + 2568);
    t29 = (t28 + 64U);
    t36 = *((char **)t29);
    t37 = (t0 + 1048U);
    t38 = *((char **)t37);
    memset(t39, 0, 8);
    t37 = (t39 + 4);
    t40 = (t38 + 4);
    t8 = *((unsigned int *)t38);
    t9 = (t8 >> 4);
    *((unsigned int *)t39) = t9;
    t10 = *((unsigned int *)t40);
    t11 = (t10 >> 4);
    *((unsigned int *)t37) = t11;
    t12 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t12 & 3U);
    t13 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t13 & 3U);
    xsi_vlog_generic_get_array_select_value(t26, 8, t23, t27, t36, 2, 1, t39, 2, 2);
    t41 = (t0 + 1048U);
    t42 = *((char **)t41);
    memset(t46, 0, 8);
    t41 = (t46 + 4);
    t43 = (t42 + 4);
    t30 = *((unsigned int *)t42);
    t31 = (t30 >> 0);
    *((unsigned int *)t46) = t31;
    t32 = *((unsigned int *)t43);
    t33 = (t32 >> 0);
    *((unsigned int *)t41) = t33;
    t34 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t34 & 3U);
    t35 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t35 & 3U);
    memset(t56, 0, 8);
    xsi_vlog_unsigned_add(t56, 8, t26, 8, t46, 8);
    xsi_vlog_generic_get_array_select_value(t19, 8, t6, t16, t20, 2, 1, t56, 8, 2);
    t44 = (t0 + 2568);
    t45 = (t0 + 2568);
    t47 = (t45 + 72U);
    t48 = *((char **)t47);
    t49 = (t0 + 2568);
    t57 = (t49 + 64U);
    t60 = *((char **)t57);
    t61 = (t0 + 1048U);
    t62 = *((char **)t61);
    memset(t66, 0, 8);
    t61 = (t66 + 4);
    t63 = (t62 + 4);
    t50 = *((unsigned int *)t62);
    t51 = (t50 >> 2);
    *((unsigned int *)t66) = t51;
    t52 = *((unsigned int *)t63);
    t53 = (t52 >> 2);
    *((unsigned int *)t61) = t53;
    t54 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t54 & 3U);
    t55 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t55 & 3U);
    xsi_vlog_generic_convert_array_indices(t58, t59, t48, t60, 2, 1, t66, 2, 2);
    t64 = (t58 + 4);
    t70 = *((unsigned int *)t64);
    t78 = (!(t70));
    t65 = (t59 + 4);
    t71 = *((unsigned int *)t65);
    t81 = (!(t71));
    t82 = (t78 && t81);
    if (t82 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2568);
    t7 = (t6 + 72U);
    t14 = *((char **)t7);
    t16 = (t0 + 2568);
    t17 = (t16 + 64U);
    t18 = *((char **)t17);
    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    memset(t26, 0, 8);
    t20 = (t26 + 4);
    t22 = (t21 + 4);
    t8 = *((unsigned int *)t21);
    t9 = (t8 >> 2);
    *((unsigned int *)t26) = t9;
    t10 = *((unsigned int *)t22);
    t11 = (t10 >> 2);
    *((unsigned int *)t20) = t11;
    t12 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t12 & 3U);
    t13 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t13 & 3U);
    xsi_vlog_generic_get_array_select_value(t19, 8, t5, t14, t18, 2, 1, t26, 2, 2);
    t23 = (t0 + 2888);
    xsi_vlogvar_assign_value(t23, t19, 0, 0, 8);
    goto LAB15;

LAB11:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 2568);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2568);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = (t0 + 2568);
    t18 = (t17 + 64U);
    t20 = *((char **)t18);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    memset(t26, 0, 8);
    t21 = (t26 + 4);
    t23 = (t22 + 4);
    t8 = *((unsigned int *)t22);
    t9 = (t8 >> 2);
    *((unsigned int *)t26) = t9;
    t10 = *((unsigned int *)t23);
    t11 = (t10 >> 2);
    *((unsigned int *)t21) = t11;
    t12 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t12 & 3U);
    t13 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t13 & 3U);
    xsi_vlog_generic_get_array_select_value(t19, 8, t6, t16, t20, 2, 1, t26, 2, 2);
    t24 = (t0 + 2408);
    t25 = (t0 + 2408);
    t27 = (t25 + 72U);
    t28 = *((char **)t27);
    t29 = (t0 + 2408);
    t36 = (t29 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 2568);
    t40 = (t38 + 56U);
    t41 = *((char **)t40);
    t42 = (t0 + 2568);
    t43 = (t42 + 72U);
    t44 = *((char **)t43);
    t45 = (t0 + 2568);
    t47 = (t45 + 64U);
    t48 = *((char **)t47);
    t49 = (t0 + 1048U);
    t57 = *((char **)t49);
    memset(t58, 0, 8);
    t49 = (t58 + 4);
    t60 = (t57 + 4);
    t30 = *((unsigned int *)t57);
    t31 = (t30 >> 4);
    *((unsigned int *)t58) = t31;
    t32 = *((unsigned int *)t60);
    t33 = (t32 >> 4);
    *((unsigned int *)t49) = t33;
    t34 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t34 & 3U);
    t35 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t35 & 3U);
    xsi_vlog_generic_get_array_select_value(t56, 8, t41, t44, t48, 2, 1, t58, 2, 2);
    t61 = (t0 + 1048U);
    t62 = *((char **)t61);
    memset(t59, 0, 8);
    t61 = (t59 + 4);
    t63 = (t62 + 4);
    t50 = *((unsigned int *)t62);
    t51 = (t50 >> 0);
    *((unsigned int *)t59) = t51;
    t52 = *((unsigned int *)t63);
    t53 = (t52 >> 0);
    *((unsigned int *)t61) = t53;
    t54 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t54 & 3U);
    t55 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t55 & 3U);
    memset(t66, 0, 8);
    xsi_vlog_unsigned_add(t66, 8, t56, 8, t59, 8);
    xsi_vlog_generic_convert_array_indices(t39, t46, t28, t37, 2, 1, t66, 8, 2);
    t64 = (t39 + 4);
    t70 = *((unsigned int *)t64);
    t78 = (!(t70));
    t65 = (t46 + 4);
    t71 = *((unsigned int *)t65);
    t81 = (!(t71));
    t82 = (t78 && t81);
    if (t82 == 1)
        goto LAB22;

LAB23:    goto LAB15;

LAB13:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 2728);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1048U);
    t14 = *((char **)t7);
    memset(t19, 0, 8);
    t7 = (t19 + 4);
    t16 = (t14 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (t8 >> 0);
    *((unsigned int *)t19) = t9;
    t10 = *((unsigned int *)t16);
    t11 = (t10 >> 0);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t12 & 3U);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 3U);
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 8, t6, 8, t19, 8);
    t17 = (t0 + 2728);
    xsi_vlogvar_assign_value(t17, t26, 0, 0, 8);
    goto LAB15;

LAB17:    t83 = *((unsigned int *)t58);
    t84 = *((unsigned int *)t59);
    t85 = (t83 - t84);
    t86 = (t85 + 1);
    xsi_vlogvar_assign_value(t57, t56, 0, *((unsigned int *)t59), t86);
    goto LAB18;

LAB20:    t72 = *((unsigned int *)t58);
    t73 = *((unsigned int *)t59);
    t85 = (t72 - t73);
    t86 = (t85 + 1);
    xsi_vlogvar_assign_value(t44, t19, 0, *((unsigned int *)t59), t86);
    goto LAB21;

LAB22:    t72 = *((unsigned int *)t39);
    t73 = *((unsigned int *)t46);
    t85 = (t72 - t73);
    t86 = (t85 + 1);
    xsi_vlogvar_assign_value(t24, t19, 0, *((unsigned int *)t46), t86);
    goto LAB23;

}

static void Cont_64_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 4792);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_14882888451889869811_1200043877_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Always_49_1,(void *)Cont_64_2};
	xsi_register_didat("work_m_14882888451889869811_1200043877", "isim/Main_test_isim_beh.exe.sim/work/m_14882888451889869811_1200043877.didat");
	xsi_register_executes(pe);
}
