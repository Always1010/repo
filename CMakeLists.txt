# 指定最低版本要求
cmake_minimum_required(VERSION 3.10)

# 设置项目名称和版本号
project(MyProject VERSION 1.0)

# 查找并使用标准库（如 C++ 标准）
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# # 源文件目录
# set(SOURCE_FILES main.cpp test.cpp)

# # 创建可执行文件
# add_executable(myapp ${SOURCE_FILES})

# #为 myapp 目标添加头文件路径
# target_include_directories(myapp PRIVATE test.h)

add_executable(myapp main.cpp
 test.cpp
 test.h)

# 如果有子目录，可以递归添加它们
# add_subdirectory(src)