cmake_minimum_required(VERSION 3.13)
enable_language(C)
project(lib_1)

add_library(${PROJECT_NAME} STATIC EXCLUDE_FROM_ALL)
target_sources(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/src/lib_1_main.c)
target_sources(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/src/lib_1_extra.c)
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/src)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/inc)
