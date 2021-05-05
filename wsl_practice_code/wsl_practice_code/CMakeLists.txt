# CMakeList.txt: wsl_practice_code 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

# 将源代码添加到此项目的可执行文件。
include_directories(
${CMAKE_SOURCE_DIR}
${CMAKE_SOURCE_DIR}/leetcode/daily
${CMAKE_SOURCE_DIR}/leetcode/high_frequency
)

add_executable (wsl_practice_code "wsl_practice_code.cpp" "wsl_practice_code.h" ${LeetcodeSrc})

target_link_libraries(wsl_practice_code PUBLIC common)
# TODO: 如有需要，请添加测试并安装目标。
