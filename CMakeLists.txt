cmake_minimum_required(VERSION 3.0)
project(OpenCVTest)
# 强制使用MinGW Makefiles生成器
set(CMAKE_GENERATOR "MinGW Makefiles" CACHE INTERNAL "" FORCE)
# 指定编译器
set (CMAKE_C_COMPILER "E:/mingw-w64/mingw64/bin/gcc")
set (CMAKE_CXX_COMPILER "E:/mingw-w64/mingw64/bin/g++")

# 指定OpenCV安装目录
set(OpenCV_DIR "E:/OpenCV/opencv-4.10.0/build/x64/mingw/install")  # 将此路径替换为你的OpenCV安装路径

# 查找OpenCV库
find_package(OpenCV REQUIRED)

# 设置包含路径
include_directories(${OpenCV_INCLUDE_DIRS})

# 添加源文件
add_executable(OpenCVTest main.cpp)

# 链接OpenCV库
target_link_libraries(OpenCVTest ${OpenCV_LIBS})
