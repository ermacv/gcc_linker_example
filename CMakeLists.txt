cmake_minimum_required(VERSION 3.13)
enable_language(C)
project(test)

add_subdirectory(${PROJECT_SOURCE_DIR}/lib_1)
add_subdirectory(${PROJECT_SOURCE_DIR}/lib_2)

add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE main.c)
target_link_libraries(${PROJECT_NAME} PRIVATE lib_1)
target_link_libraries(${PROJECT_NAME} PRIVATE lib_2)
target_link_options(${PROJECT_NAME} PRIVATE -Wl,-Map=$<TARGET_FILE_DIR:${PROJECT_NAME}>/${PROJECT_NAME}.map)