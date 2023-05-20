#/* Copyright (C) 2001
#  * Housemarque Oy
#  * http://www.housemarque.com
#  *
#  * Distributed under the Boost Software License, Version 1.0. (See
#  * accompanying file LICENSE_1_0.txt or copy at
#  * http://www.boost.org/LICENSE_1_0.txt)
#  */
#
#/* Revised by Paul Mensonides (2002) */
#
#/* See http://www.boost.org for most recent version. */
#
#ifndef MSGPACK_PREPROCESSOR_LIST_DETAIL_FOLD_LEFT_HPP
#define MSGPACK_PREPROCESSOR_LIST_DETAIL_FOLD_LEFT_HPP
#
#include <msgpack/preprocessor/control/expr_iif.hpp>
#include <msgpack/preprocessor/control/iif.hpp>
#include <msgpack/preprocessor/list/adt.hpp>
#include <msgpack/preprocessor/tuple/eat.hpp>
#
#define MSGPACK_PP_LIST_FOLD_LEFT_1(o, s, l)                                                                           \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_2, s MSGPACK_PP_TUPLE_EAT_3)                  \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(2, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_2(o, s, l)                                                                           \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_3, s MSGPACK_PP_TUPLE_EAT_3)                  \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(3, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_3(o, s, l)                                                                           \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_4, s MSGPACK_PP_TUPLE_EAT_3)                  \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(4, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_4(o, s, l)                                                                           \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_5, s MSGPACK_PP_TUPLE_EAT_3)                  \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(5, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_5(o, s, l)                                                                           \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_6, s MSGPACK_PP_TUPLE_EAT_3)                  \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(6, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_6(o, s, l)                                                                           \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_7, s MSGPACK_PP_TUPLE_EAT_3)                  \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(7, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_7(o, s, l)                                                                           \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_8, s MSGPACK_PP_TUPLE_EAT_3)                  \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(8, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_8(o, s, l)                                                                           \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_9, s MSGPACK_PP_TUPLE_EAT_3)                  \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(9, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_9(o, s, l)                                                                           \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_10, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(10, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_10(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_11, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(11, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_11(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_12, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(12, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_12(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_13, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(13, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_13(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_14, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(14, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_14(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_15, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(15, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_15(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_16, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(16, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_16(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_17, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(17, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_17(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_18, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(18, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_18(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_19, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(19, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_19(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_20, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(20, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_20(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_21, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(21, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_21(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_22, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(22, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_22(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_23, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(23, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_23(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_24, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(24, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_24(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_25, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(25, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_25(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_26, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(26, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_26(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_27, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(27, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_27(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_28, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(28, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_28(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_29, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(29, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_29(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_30, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(30, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_30(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_31, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(31, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_31(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_32, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(32, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_32(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_33, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(33, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_33(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_34, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(34, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_34(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_35, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(35, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_35(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_36, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(36, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_36(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_37, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(37, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_37(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_38, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(38, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_38(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_39, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(39, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_39(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_40, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(40, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_40(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_41, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(41, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_41(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_42, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(42, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_42(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_43, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(43, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_43(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_44, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(44, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_44(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_45, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(45, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_45(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_46, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(46, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_46(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_47, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(47, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_47(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_48, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(48, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_48(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_49, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(49, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_49(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_50, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(50, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_50(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_51, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(51, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_51(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_52, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(52, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_52(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_53, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(53, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_53(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_54, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(54, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_54(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_55, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(55, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_55(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_56, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(56, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_56(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_57, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(57, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_57(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_58, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(58, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_58(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_59, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(59, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_59(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_60, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(60, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_60(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_61, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(61, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_61(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_62, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(62, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_62(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_63, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(63, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_63(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_64, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(64, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_64(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_65, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(65, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_65(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_66, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(66, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_66(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_67, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(67, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_67(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_68, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(68, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_68(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_69, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(69, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_69(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_70, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(70, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_70(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_71, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(71, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_71(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_72, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(72, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_72(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_73, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(73, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_73(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_74, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(74, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_74(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_75, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(75, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_75(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_76, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(76, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_76(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_77, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(77, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_77(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_78, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(78, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_78(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_79, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(79, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_79(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_80, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(80, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_80(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_81, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(81, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_81(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_82, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(82, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_82(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_83, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(83, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_83(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_84, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(84, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_84(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_85, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(85, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_85(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_86, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(86, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_86(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_87, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(87, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_87(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_88, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(88, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_88(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_89, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(89, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_89(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_90, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(90, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_90(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_91, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(91, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_91(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_92, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(92, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_92(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_93, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(93, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_93(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_94, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(94, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_94(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_95, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(95, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_95(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_96, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(96, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_96(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_97, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(97, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_97(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_98, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(98, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_98(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_99, s MSGPACK_PP_TUPLE_EAT_3)                 \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(99, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_99(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_100, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(100, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_100(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_101, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(101, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_101(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_102, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(102, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_102(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_103, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(103, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_103(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_104, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(104, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_104(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_105, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(105, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_105(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_106, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(106, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_106(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_107, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(107, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_107(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_108, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(108, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_108(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_109, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(109, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_109(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_110, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(110, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_110(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_111, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(111, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_111(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_112, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(112, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_112(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_113, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(113, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_113(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_114, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(114, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_114(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_115, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(115, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_115(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_116, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(116, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_116(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_117, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(117, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_117(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_118, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(118, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_118(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_119, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(119, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_119(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_120, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(120, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_120(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_121, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(121, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_121(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_122, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(122, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_122(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_123, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(123, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_123(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_124, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(124, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_124(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_125, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(125, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_125(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_126, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(126, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_126(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_127, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(127, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_127(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_128, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(128, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_128(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_129, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(129, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_129(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_130, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(130, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_130(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_131, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(131, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_131(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_132, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(132, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_132(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_133, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(133, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_133(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_134, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(134, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_134(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_135, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(135, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_135(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_136, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(136, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_136(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_137, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(137, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_137(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_138, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(138, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_138(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_139, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(139, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_139(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_140, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(140, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_140(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_141, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(141, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_141(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_142, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(142, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_142(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_143, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(143, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_143(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_144, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(144, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_144(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_145, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(145, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_145(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_146, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(146, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_146(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_147, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(147, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_147(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_148, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(148, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_148(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_149, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(149, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_149(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_150, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(150, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_150(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_151, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(151, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_151(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_152, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(152, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_152(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_153, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(153, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_153(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_154, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(154, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_154(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_155, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(155, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_155(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_156, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(156, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_156(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_157, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(157, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_157(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_158, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(158, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_158(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_159, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(159, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_159(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_160, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(160, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_160(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_161, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(161, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_161(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_162, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(162, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_162(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_163, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(163, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_163(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_164, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(164, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_164(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_165, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(165, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_165(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_166, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(166, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_166(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_167, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(167, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_167(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_168, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(168, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_168(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_169, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(169, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_169(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_170, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(170, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_170(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_171, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(171, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_171(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_172, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(172, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_172(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_173, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(173, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_173(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_174, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(174, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_174(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_175, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(175, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_175(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_176, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(176, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_176(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_177, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(177, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_177(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_178, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(178, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_178(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_179, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(179, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_179(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_180, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(180, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_180(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_181, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(181, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_181(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_182, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(182, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_182(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_183, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(183, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_183(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_184, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(184, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_184(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_185, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(185, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_185(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_186, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(186, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_186(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_187, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(187, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_187(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_188, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(188, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_188(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_189, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(189, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_189(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_190, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(190, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_190(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_191, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(191, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_191(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_192, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(192, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_192(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_193, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(193, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_193(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_194, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(194, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_194(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_195, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(195, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_195(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_196, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(196, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_196(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_197, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(197, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_197(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_198, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(198, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_198(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_199, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(199, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_199(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_200, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(200, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_200(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_201, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(201, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_201(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_202, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(202, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_202(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_203, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(203, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_203(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_204, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(204, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_204(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_205, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(205, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_205(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_206, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(206, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_206(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_207, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(207, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_207(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_208, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(208, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_208(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_209, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(209, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_209(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_210, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(210, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_210(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_211, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(211, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_211(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_212, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(212, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_212(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_213, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(213, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_213(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_214, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(214, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_214(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_215, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(215, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_215(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_216, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(216, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_216(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_217, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(217, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_217(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_218, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(218, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_218(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_219, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(219, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_219(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_220, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(220, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_220(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_221, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(221, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_221(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_222, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(222, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_222(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_223, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(223, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_223(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_224, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(224, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_224(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_225, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(225, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_225(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_226, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(226, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_226(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_227, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(227, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_227(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_228, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(228, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_228(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_229, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(229, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_229(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_230, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(230, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_230(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_231, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(231, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_231(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_232, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(232, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_232(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_233, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(233, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_233(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_234, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(234, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_234(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_235, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(235, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_235(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_236, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(236, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_236(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_237, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(237, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_237(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_238, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(238, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_238(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_239, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(239, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_239(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_240, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(240, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_240(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_241, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(241, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_241(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_242, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(242, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_242(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_243, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(243, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_243(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_244, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(244, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_244(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_245, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(245, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_245(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_246, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(246, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_246(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_247, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(247, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_247(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_248, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(248, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_248(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_249, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(249, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_249(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_250, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(250, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_250(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_251, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(251, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_251(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_252, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(252, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_252(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_253, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(253, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_253(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_254, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(254, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_254(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_255, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(255, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_255(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_256, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(256, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_256(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_257, s MSGPACK_PP_TUPLE_EAT_3)                \
    (o, MSGPACK_PP_EXPR_IIF(MSGPACK_PP_LIST_IS_CONS(l), o)(257, s, MSGPACK_PP_LIST_FIRST(l)), MSGPACK_PP_LIST_REST(l))
#
#endif
