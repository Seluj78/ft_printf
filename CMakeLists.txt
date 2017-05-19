cmake_minimum_required(VERSION 3.6)
project(ft_printf)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_C_FLAGS "-Wall -Werror -Wextra")
set(CMAKE_BUILD_TYPE Release)

set(SOURCE_FILES
        srcs/checks/check_flags.c
        srcs/checks/check_precision_max.c
        srcs/checks/check_spaces.c
        srcs/checks/check_width.c
        srcs/color/color.c
        srcs/color/color2.c
        srcs/color/color3.c
        srcs/convert/convert_c.c
        srcs/convert/convert_d.c
        srcs/convert/convert_jzlh.c
        srcs/convert/convert_o.c
        srcs/convert/convert_p.c
        srcs/convert/convert_percent.c
        srcs/convert/convert_r.c
        srcs/convert/convert_s.c
        srcs/convert/convert_u.c
        srcs/convert/convert_x.c
        srcs/core/ft_printf.c
        srcs/core/parser.c
        srcs/print/print_d.c
        srcs/print/print_o.c
        srcs/print/print_u.c
        srcs/print/print_x.c
        srcs/print/print_xx.c
        srcs/core/utils.c)

include_directories(includes)
add_library(ft_printf.a STATIC ${SOURCE_FILES})