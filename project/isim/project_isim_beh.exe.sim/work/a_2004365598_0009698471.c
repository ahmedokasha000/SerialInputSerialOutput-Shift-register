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
static const char *ng0 = "C:/Users/Remem Who R U/Desktop/ver1 (1).vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_2540846514_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );


static void work_a_2004365598_0009698471_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 1152U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 5872);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 5712);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(27, ng0);
    t3 = (t0 + 5872);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    goto LAB3;

}

static void work_a_2004365598_0009698471_p_1(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    int t13;
    unsigned int t14;

LAB0:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 2928U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 7U);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 5936);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB3:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    t1 = (t0 + 6000);
    t3 = (t1 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 7U);
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 5728);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 2928U);
    t3 = *((char **)t1);
    t1 = (t0 + 8868U);
    t7 = ieee_p_1242562249_sub_2540846514_1035706684(IEEE_P_1242562249, t6, t3, t1, 1);
    t8 = (t0 + 2928U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    t10 = (t6 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = (1U * t11);
    memcpy(t8, t7, t12);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t1 = (t0 + 2928U);
    t3 = *((char **)t1);
    t13 = (0 - 6);
    t11 = (t13 * -1);
    t12 = (1U * t11);
    t14 = (0 + t12);
    t1 = (t3 + t14);
    *((unsigned char *)t1) = t4;
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 5936);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void work_a_2004365598_0009698471_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    char *t6;
    unsigned char t7;
    char *t8;
    int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 8931);
    *((int *)t1) = 6;
    t2 = (t0 + 8935);
    *((int *)t2) = 0;
    t3 = 6;
    t4 = 0;

LAB2:    if (t3 >= t4)
        goto LAB3;

LAB5:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t1 = (t0 + 6064);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t14 = *((char **)t8);
    *((unsigned char *)t14) = t7;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    t1 = (t0 + 5744);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(54, ng0);
    t5 = (t0 + 3048U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t5 = (t0 + 1832U);
    t8 = *((char **)t5);
    t5 = (t0 + 8931);
    t9 = *((int *)t5);
    t10 = (t9 - 6);
    t11 = (t10 * -1);
    xsi_vhdl_check_range_of_index(6, 0, -1, *((int *)t5));
    t12 = (1U * t11);
    t13 = (0 + t12);
    t14 = (t8 + t13);
    t15 = *((unsigned char *)t14);
    t16 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t7, t15);
    t17 = (t0 + 3048U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    *((unsigned char *)t17) = t16;

LAB4:    t1 = (t0 + 8931);
    t3 = *((int *)t1);
    t2 = (t0 + 8935);
    t4 = *((int *)t2);
    if (t3 == t4)
        goto LAB5;

LAB6:    t9 = (t3 + -1);
    t3 = t9;
    t5 = (t0 + 8931);
    *((int *)t5) = t3;
    goto LAB2;

}

static void work_a_2004365598_0009698471_p_3(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 6128);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);

LAB3:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t2 = (t0 + 6192);
    t7 = (t2 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t1;
    xsi_driver_first_trans_fast_port(t2);
    t2 = (t0 + 5760);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 6128);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t2 = (t0 + 2472U);
    t7 = *((char **)t2);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB8;

LAB9:    t2 = (t0 + 2472U);
    t10 = *((char **)t2);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    t6 = t12;

LAB10:    t1 = t6;
    goto LAB7;

LAB8:    t6 = (unsigned char)1;
    goto LAB10;

}

static void work_a_2004365598_0009698471_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 6320);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB3:    t1 = (t0 + 5776);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t1 = (t0 + 6256);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 7U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 6320);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

}

static void work_a_2004365598_0009698471_p_5(char *t0)
{
    char t5[16];
    char t11[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(86, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1832U);
    t4 = *((char **)t1);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t0 + 8836U);
    t1 = xsi_base_array_concat(t1, t5, t6, (char)99, t3, (char)97, t4, t7, (char)101);
    t8 = (t0 + 2472U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t12 = ((IEEE_P_2592010699) + 4024);
    t8 = xsi_base_array_concat(t8, t11, t12, (char)97, t1, t5, (char)99, t10, (char)101);
    t13 = (t0 + 2312U);
    t14 = *((char **)t13);
    t15 = *((unsigned char *)t14);
    t17 = ((IEEE_P_2592010699) + 4024);
    t13 = xsi_base_array_concat(t13, t16, t17, (char)97, t8, t11, (char)99, t15, (char)101);
    t18 = (1U + 7U);
    t19 = (t18 + 1U);
    t20 = (t19 + 1U);
    t21 = (10U != t20);
    if (t21 == 1)
        goto LAB5;

LAB6:    t22 = (t0 + 6384);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t13, 10U);
    xsi_driver_first_trans_fast(t22);

LAB2:    t27 = (t0 + 5792);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(10U, t20, 0);
    goto LAB6;

}


extern void work_a_2004365598_0009698471_init()
{
	static char *pe[] = {(void *)work_a_2004365598_0009698471_p_0,(void *)work_a_2004365598_0009698471_p_1,(void *)work_a_2004365598_0009698471_p_2,(void *)work_a_2004365598_0009698471_p_3,(void *)work_a_2004365598_0009698471_p_4,(void *)work_a_2004365598_0009698471_p_5};
	xsi_register_didat("work_a_2004365598_0009698471", "isim/project_isim_beh.exe.sim/work/a_2004365598_0009698471.didat");
	xsi_register_executes(pe);
}
