project(calc)

cmake_minimum_required(VERSION 2.4)

SET(calc_SOURCES
    Integer_arithmetic_i.c
    Main_i.c
    b_pow.c
)
SET(calc_HEADERS
    Integer_arithmetic.h
    Main.h
    b_pow.h
)

add_library(calc ${calc_SOURCES} ${calc_HEADERS})
