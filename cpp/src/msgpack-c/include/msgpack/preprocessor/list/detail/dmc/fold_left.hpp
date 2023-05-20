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
#include <msgpack/preprocessor/tuple/elem.hpp>
#
#define MSGPACK_PP_LIST_FOLD_LEFT_1(o, s, l)                                                                           \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_2, MSGPACK_PP_TUPLE_ELEM_3_1)                 \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(2, s, MSGPACK_PP_LIST_FIRST(l)),         \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_2(o, s, l)                                                                           \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_3, MSGPACK_PP_TUPLE_ELEM_3_1)                 \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(3, s, MSGPACK_PP_LIST_FIRST(l)),         \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_3(o, s, l)                                                                           \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_4, MSGPACK_PP_TUPLE_ELEM_3_1)                 \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(4, s, MSGPACK_PP_LIST_FIRST(l)),         \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_4(o, s, l)                                                                           \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_5, MSGPACK_PP_TUPLE_ELEM_3_1)                 \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(5, s, MSGPACK_PP_LIST_FIRST(l)),         \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_5(o, s, l)                                                                           \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_6, MSGPACK_PP_TUPLE_ELEM_3_1)                 \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(6, s, MSGPACK_PP_LIST_FIRST(l)),         \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_6(o, s, l)                                                                           \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_7, MSGPACK_PP_TUPLE_ELEM_3_1)                 \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(7, s, MSGPACK_PP_LIST_FIRST(l)),         \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_7(o, s, l)                                                                           \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_8, MSGPACK_PP_TUPLE_ELEM_3_1)                 \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(8, s, MSGPACK_PP_LIST_FIRST(l)),         \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_8(o, s, l)                                                                           \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_9, MSGPACK_PP_TUPLE_ELEM_3_1)                 \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(9, s, MSGPACK_PP_LIST_FIRST(l)),         \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_9(o, s, l)                                                                           \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_10, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(10, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_10(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_11, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(11, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_11(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_12, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(12, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_12(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_13, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(13, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_13(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_14, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(14, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_14(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_15, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(15, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_15(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_16, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(16, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_16(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_17, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(17, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_17(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_18, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(18, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_18(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_19, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(19, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_19(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_20, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(20, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_20(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_21, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(21, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_21(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_22, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(22, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_22(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_23, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(23, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_23(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_24, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(24, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_24(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_25, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(25, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_25(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_26, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(26, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_26(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_27, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(27, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_27(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_28, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(28, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_28(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_29, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(29, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_29(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_30, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(30, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_30(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_31, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(31, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_31(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_32, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(32, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_32(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_33, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(33, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_33(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_34, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(34, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_34(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_35, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(35, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_35(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_36, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(36, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_36(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_37, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(37, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_37(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_38, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(38, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_38(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_39, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(39, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_39(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_40, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(40, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_40(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_41, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(41, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_41(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_42, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(42, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_42(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_43, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(43, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_43(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_44, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(44, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_44(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_45, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(45, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_45(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_46, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(46, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_46(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_47, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(47, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_47(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_48, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(48, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_48(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_49, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(49, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_49(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_50, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(50, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_50(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_51, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(51, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_51(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_52, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(52, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_52(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_53, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(53, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_53(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_54, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(54, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_54(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_55, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(55, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_55(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_56, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(56, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_56(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_57, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(57, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_57(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_58, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(58, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_58(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_59, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(59, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_59(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_60, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(60, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_60(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_61, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(61, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_61(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_62, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(62, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_62(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_63, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(63, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_63(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_64, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(64, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_64(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_65, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(65, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_65(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_66, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(66, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_66(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_67, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(67, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_67(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_68, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(68, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_68(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_69, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(69, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_69(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_70, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(70, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_70(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_71, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(71, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_71(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_72, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(72, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_72(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_73, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(73, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_73(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_74, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(74, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_74(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_75, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(75, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_75(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_76, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(76, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_76(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_77, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(77, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_77(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_78, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(78, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_78(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_79, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(79, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_79(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_80, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(80, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_80(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_81, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(81, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_81(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_82, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(82, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_82(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_83, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(83, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_83(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_84, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(84, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_84(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_85, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(85, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_85(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_86, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(86, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_86(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_87, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(87, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_87(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_88, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(88, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_88(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_89, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(89, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_89(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_90, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(90, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_90(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_91, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(91, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_91(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_92, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(92, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_92(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_93, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(93, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_93(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_94, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(94, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_94(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_95, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(95, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_95(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_96, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(96, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_96(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_97, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(97, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_97(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_98, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(98, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_98(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_99, MSGPACK_PP_TUPLE_ELEM_3_1)                \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(99, s, MSGPACK_PP_LIST_FIRST(l)),        \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_99(o, s, l)                                                                          \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_100, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(100, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_100(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_101, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(101, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_101(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_102, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(102, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_102(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_103, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(103, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_103(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_104, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(104, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_104(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_105, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(105, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_105(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_106, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(106, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_106(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_107, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(107, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_107(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_108, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(108, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_108(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_109, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(109, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_109(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_110, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(110, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_110(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_111, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(111, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_111(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_112, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(112, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_112(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_113, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(113, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_113(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_114, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(114, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_114(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_115, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(115, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_115(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_116, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(116, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_116(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_117, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(117, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_117(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_118, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(118, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_118(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_119, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(119, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_119(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_120, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(120, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_120(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_121, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(121, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_121(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_122, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(122, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_122(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_123, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(123, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_123(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_124, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(124, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_124(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_125, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(125, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_125(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_126, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(126, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_126(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_127, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(127, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_127(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_128, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(128, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_128(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_129, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(129, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_129(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_130, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(130, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_130(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_131, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(131, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_131(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_132, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(132, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_132(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_133, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(133, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_133(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_134, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(134, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_134(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_135, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(135, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_135(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_136, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(136, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_136(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_137, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(137, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_137(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_138, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(138, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_138(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_139, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(139, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_139(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_140, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(140, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_140(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_141, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(141, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_141(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_142, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(142, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_142(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_143, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(143, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_143(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_144, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(144, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_144(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_145, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(145, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_145(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_146, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(146, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_146(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_147, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(147, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_147(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_148, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(148, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_148(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_149, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(149, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_149(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_150, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(150, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_150(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_151, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(151, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_151(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_152, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(152, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_152(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_153, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(153, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_153(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_154, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(154, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_154(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_155, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(155, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_155(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_156, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(156, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_156(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_157, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(157, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_157(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_158, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(158, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_158(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_159, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(159, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_159(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_160, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(160, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_160(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_161, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(161, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_161(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_162, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(162, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_162(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_163, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(163, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_163(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_164, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(164, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_164(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_165, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(165, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_165(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_166, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(166, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_166(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_167, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(167, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_167(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_168, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(168, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_168(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_169, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(169, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_169(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_170, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(170, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_170(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_171, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(171, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_171(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_172, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(172, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_172(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_173, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(173, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_173(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_174, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(174, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_174(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_175, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(175, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_175(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_176, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(176, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_176(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_177, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(177, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_177(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_178, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(178, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_178(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_179, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(179, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_179(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_180, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(180, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_180(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_181, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(181, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_181(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_182, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(182, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_182(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_183, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(183, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_183(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_184, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(184, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_184(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_185, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(185, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_185(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_186, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(186, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_186(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_187, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(187, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_187(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_188, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(188, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_188(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_189, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(189, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_189(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_190, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(190, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_190(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_191, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(191, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_191(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_192, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(192, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_192(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_193, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(193, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_193(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_194, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(194, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_194(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_195, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(195, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_195(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_196, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(196, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_196(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_197, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(197, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_197(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_198, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(198, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_198(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_199, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(199, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_199(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_200, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(200, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_200(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_201, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(201, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_201(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_202, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(202, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_202(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_203, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(203, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_203(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_204, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(204, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_204(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_205, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(205, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_205(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_206, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(206, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_206(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_207, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(207, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_207(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_208, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(208, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_208(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_209, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(209, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_209(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_210, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(210, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_210(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_211, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(211, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_211(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_212, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(212, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_212(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_213, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(213, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_213(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_214, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(214, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_214(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_215, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(215, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_215(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_216, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(216, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_216(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_217, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(217, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_217(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_218, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(218, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_218(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_219, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(219, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_219(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_220, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(220, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_220(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_221, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(221, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_221(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_222, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(222, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_222(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_223, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(223, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_223(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_224, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(224, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_224(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_225, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(225, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_225(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_226, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(226, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_226(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_227, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(227, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_227(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_228, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(228, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_228(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_229, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(229, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_229(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_230, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(230, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_230(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_231, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(231, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_231(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_232, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(232, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_232(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_233, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(233, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_233(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_234, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(234, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_234(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_235, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(235, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_235(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_236, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(236, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_236(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_237, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(237, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_237(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_238, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(238, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_238(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_239, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(239, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_239(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_240, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(240, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_240(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_241, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(241, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_241(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_242, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(242, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_242(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_243, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(243, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_243(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_244, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(244, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_244(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_245, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(245, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_245(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_246, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(246, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_246(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_247, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(247, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_247(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_248, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(248, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_248(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_249, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(249, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_249(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_250, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(250, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_250(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_251, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(251, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_251(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_252, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(252, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_252(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_253, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(253, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_253(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_254, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(254, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_254(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_255, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(255, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_255(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_256, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(256, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#define MSGPACK_PP_LIST_FOLD_LEFT_256(o, s, l)                                                                         \
    MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), MSGPACK_PP_LIST_FOLD_LEFT_257, MSGPACK_PP_TUPLE_ELEM_3_1)               \
    (o,                                                                                                                \
     MSGPACK_PP_IIF(MSGPACK_PP_LIST_IS_CONS(l), o, MSGPACK_PP_TUPLE_ELEM_3_1)(257, s, MSGPACK_PP_LIST_FIRST(l)),       \
     MSGPACK_PP_LIST_REST(l))
#
#endif
