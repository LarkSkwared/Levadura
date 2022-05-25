cmake_minimum_required(VERSION 3.10)

project(Levadura)
add_library(Levadura
        src/math/vector/vector_int.c
        src/math/vector/vector_float.c
        src/math/vector/vector_double.c
        src/math/vector/vector2_int.c
        src/math/vector/vector2_float.c
        src/math/vector/vector2_double.c)

target_compile_options(Levadura PRIVATE -Wall -O3)
target_include_directories(Levadura PRIVATE src/)

install(TARGETS Levadura DESTINATION lib)
install(FILES src/levadura.h DESTINATION include)

install(FILES src/math/lmath.h DESTINATION include/math)
install(FILES src/math/vector/vector_types.h DESTINATION include/math/vector)
install(FILES src/math/vector/vector2_int.h DESTINATION include/math/vector)
install(FILES src/math/vector/vector2_float.h DESTINATION include/math/vector)
install(FILES src/math/vector/vector2_double.h DESTINATION include/math/vector)
