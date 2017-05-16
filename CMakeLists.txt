cmake_minimum_required(VERSION 3.6)
project(ft_printf)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_C_FLAGS "-Wall -Werror -Wextra")
set(CMAKE_BUILD_TYPE Release)

set(SOURCE_FILES
    srcs/check_flags.c
    srcs/check_precision_max.c
    srcs/check_spaces.c
    srcs/check_width.c
    srcs/color.c
    srcs/color2.c
    srcs/color3.c
    srcs/convert_c.c
    srcs/convert_d.c
    srcs/convert_jzlh.c
    srcs/convert_o.c
    srcs/convert_p.c
    srcs/convert_percent.c
    srcs/convert_r.c
    srcs/convert_s.c
    srcs/convert_u.c
    srcs/convert_x.c
    srcs/ft_printf.c
    srcs/parser.c
    srcs/print_d.c
    srcs/print_o.c
    srcs/print_u.c
    srcs/print_x.c
    srcs/print_xx.c
    srcs/utils.c)

include_directories(includes)
add_library(ft_printf.a STATIC ${SOURCE_FILES})