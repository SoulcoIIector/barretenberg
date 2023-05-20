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
#ifndef MSGPACK_PREPROCESSOR_LIST_FOR_EACH_PRODUCT_HPP
#define MSGPACK_PREPROCESSOR_LIST_FOR_EACH_PRODUCT_HPP
#
#include <msgpack/preprocessor/config/config.hpp>
#include <msgpack/preprocessor/control/if.hpp>
#include <msgpack/preprocessor/list/adt.hpp>
#include <msgpack/preprocessor/list/to_tuple.hpp>
#include <msgpack/preprocessor/repetition/for.hpp>
#include <msgpack/preprocessor/tuple/elem.hpp>
#include <msgpack/preprocessor/tuple/to_list.hpp>
#include <msgpack/preprocessor/tuple/rem.hpp>
#include <msgpack/preprocessor/tuple/reverse.hpp>
#
#/* MSGPACK_PP_LIST_FOR_EACH_PRODUCT */
#
#if ~MSGPACK_PP_CONFIG_FLAGS() & MSGPACK_PP_CONFIG_EDG()
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT(macro, size, tuple)                                                           \
    MSGPACK_PP_LIST_FOR_EACH_PRODUCT_E(MSGPACK_PP_FOR, macro, size, MSGPACK_PP_TUPLE_TO_LIST(size, tuple))
#else
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT(macro, size, tuple) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_Q(macro, size, tuple)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_Q(macro, size, tuple)                                                         \
    MSGPACK_PP_LIST_FOR_EACH_PRODUCT_E(MSGPACK_PP_FOR, macro, size, MSGPACK_PP_TUPLE_TO_LIST(size, tuple))
#endif
#
#/* MSGPACK_PP_LIST_FOR_EACH_PRODUCT_R */
#
#if ~MSGPACK_PP_CONFIG_FLAGS() & MSGPACK_PP_CONFIG_EDG()
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_R(r, macro, size, tuple)                                                      \
    MSGPACK_PP_LIST_FOR_EACH_PRODUCT_E(MSGPACK_PP_FOR_##r, macro, size, MSGPACK_PP_TUPLE_TO_LIST(size, tuple))
#else
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_R(r, macro, size, tuple)                                                      \
    MSGPACK_PP_LIST_FOR_EACH_PRODUCT_R_Q(r, macro, size, tuple)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_R_Q(r, macro, size, tuple)                                                    \
    MSGPACK_PP_LIST_FOR_EACH_PRODUCT_E(MSGPACK_PP_FOR_##r, macro, size, MSGPACK_PP_TUPLE_TO_LIST(size, tuple))
#endif
#
#if ~MSGPACK_PP_CONFIG_FLAGS() & MSGPACK_PP_CONFIG_EDG()
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_E(impl, macro, size, lists)                                                   \
    impl((MSGPACK_PP_LIST_FIRST(lists), MSGPACK_PP_LIST_REST(lists), MSGPACK_PP_NIL, macro, size),                     \
         MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                                           \
         MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                                           \
         MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_0)
#else
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_E(impl, macro, size, lists)                                                   \
    MSGPACK_PP_LIST_FOR_EACH_PRODUCT_E_D(impl, macro, size, lists)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_E_D(impl, macro, size, lists)                                                 \
    impl((MSGPACK_PP_LIST_FIRST(lists), MSGPACK_PP_LIST_REST(lists), MSGPACK_PP_NIL, macro, size),                     \
         MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                                           \
         MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                                           \
         MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_0)
#endif
#
#if MSGPACK_PP_CONFIG_FLAGS() & MSGPACK_PP_CONFIG_STRICT()
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P_I data
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P_I(a, b, res, macro, size) MSGPACK_PP_LIST_IS_CONS(a)
#else
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P(r, data) MSGPACK_PP_LIST_IS_CONS(MSGPACK_PP_TUPLE_ELEM(5, 0, data))
#endif
#
#if ~MSGPACK_PP_CONFIG_FLAGS() & MSGPACK_PP_CONFIG_MWCC()
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O_I data
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O_I(a, b, res, macro, size) (MSGPACK_PP_LIST_REST(a), b, res, macro, size)
#else
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O(r, data)                                                                    \
    (MSGPACK_PP_LIST_REST(MSGPACK_PP_TUPLE_ELEM(5, 0, data)),                                                          \
     MSGPACK_PP_TUPLE_ELEM(5, 1, data),                                                                                \
     MSGPACK_PP_TUPLE_ELEM(5, 2, data),                                                                                \
     MSGPACK_PP_TUPLE_ELEM(5, 3, data),                                                                                \
     MSGPACK_PP_TUPLE_ELEM(5, 4, data))
#endif
#
#if ~MSGPACK_PP_CONFIG_FLAGS() & MSGPACK_PP_CONFIG_EDG()
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_I(r, data)                                                                    \
    MSGPACK_PP_LIST_FOR_EACH_PRODUCT_I_I(r,                                                                            \
                                         MSGPACK_PP_TUPLE_ELEM(5, 0, data),                                            \
                                         MSGPACK_PP_TUPLE_ELEM(5, 1, data),                                            \
                                         MSGPACK_PP_TUPLE_ELEM(5, 2, data),                                            \
                                         MSGPACK_PP_TUPLE_ELEM(5, 3, data),                                            \
                                         MSGPACK_PP_TUPLE_ELEM(5, 4, data))
#else
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_I(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_I_D(r, MSGPACK_PP_TUPLE_REM_5 data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_I_D(r, data_e) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_I_I(r, data_e)
#endif
#
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_I_I(r, a, b, res, macro, size)                                                \
    MSGPACK_PP_LIST_FOR_EACH_PRODUCT_I_II(                                                                             \
        r, macro, MSGPACK_PP_LIST_TO_TUPLE_R(r, (MSGPACK_PP_LIST_FIRST(a), res)), size)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_I_II(r, macro, args, size)                                                    \
    MSGPACK_PP_LIST_FOR_EACH_PRODUCT_I_III(r, macro, args, size)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_I_III(r, macro, args, size) macro(r, MSGPACK_PP_TUPLE_REVERSE(size, args))
#
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, i)                                                                    \
    MSGPACK_PP_IF(MSGPACK_PP_LIST_IS_CONS(MSGPACK_PP_TUPLE_ELEM(5, 1, data)),                                          \
                  MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_##i,                                                              \
                  MSGPACK_PP_LIST_FOR_EACH_PRODUCT_I)
#
#if ~MSGPACK_PP_CONFIG_FLAGS() & MSGPACK_PP_CONFIG_MWCC()
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H_I data
#else
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data)                                                                       \
    MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H_I(MSGPACK_PP_TUPLE_ELEM(5, 0, data),                                            \
                                         MSGPACK_PP_TUPLE_ELEM(5, 1, data),                                            \
                                         MSGPACK_PP_TUPLE_ELEM(5, 2, data),                                            \
                                         MSGPACK_PP_TUPLE_ELEM(5, 3, data),                                            \
                                         MSGPACK_PP_TUPLE_ELEM(5, 4, data))
#endif
#
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H_I(a, b, res, macro, size)                                                   \
    (MSGPACK_PP_LIST_FIRST(b), MSGPACK_PP_LIST_REST(b), (MSGPACK_PP_LIST_FIRST(a), res), macro, size)
#
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_0(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 0)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_1(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 1)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_2(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 2)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_3(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 3)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_4(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 4)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_5(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 5)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_6(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 6)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_7(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 7)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_8(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 8)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_9(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 9)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_10(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 10)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_11(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 11)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_12(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 12)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_13(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 13)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_14(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 14)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_15(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 15)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_16(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 16)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_17(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 17)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_18(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 18)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_19(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 19)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_20(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 20)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_21(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 21)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_22(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 22)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_23(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 23)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_24(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 24)(r, data)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_25(r, data) MSGPACK_PP_LIST_FOR_EACH_PRODUCT_C(data, 25)(r, data)
#
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_0(r, data)                                                                  \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_1)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_1(r, data)                                                                  \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_2)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_2(r, data)                                                                  \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_3)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_3(r, data)                                                                  \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_4)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_4(r, data)                                                                  \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_5)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_5(r, data)                                                                  \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_6)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_6(r, data)                                                                  \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_7)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_7(r, data)                                                                  \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_8)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_8(r, data)                                                                  \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_9)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_9(r, data)                                                                  \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_10)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_10(r, data)                                                                 \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_11)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_11(r, data)                                                                 \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_12)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_12(r, data)                                                                 \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_13)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_13(r, data)                                                                 \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_14)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_14(r, data)                                                                 \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_15)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_15(r, data)                                                                 \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_16)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_16(r, data)                                                                 \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_17)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_17(r, data)                                                                 \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_18)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_18(r, data)                                                                 \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_19)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_19(r, data)                                                                 \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_20)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_20(r, data)                                                                 \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_21)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_21(r, data)                                                                 \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_22)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_22(r, data)                                                                 \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_23)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_23(r, data)                                                                 \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_24)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_24(r, data)                                                                 \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_25)
#define MSGPACK_PP_LIST_FOR_EACH_PRODUCT_N_25(r, data)                                                                 \
    MSGPACK_PP_FOR_##r(MSGPACK_PP_LIST_FOR_EACH_PRODUCT_H(data),                                                       \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_P,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_O,                                                             \
                       MSGPACK_PP_LIST_FOR_EACH_PRODUCT_M_26)
#
#endif
