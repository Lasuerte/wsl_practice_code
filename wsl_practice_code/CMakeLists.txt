# CMakeList.txt: 顶层 CMake 项目文件，在此处执行全局配置
# 并包含子项目。
#
cmake_minimum_required (VERSION 3.8)

project ("wsl_practice_code")

include_directories(${CMAKE_SOURCE_DIR}/common)
# 包含子项目。
add_subdirectory ("leetcode")
add_subdirectory ("wsl_practice_code")
