cmake_minimum_required(VERSION 3.3)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

project(my_project)

# 配置qt6的路径，如果已经将路径加到系统PATH中，就不需要设置了
# set(QT5_PATH "C:\Qt\6.7.2\mingw_64\lib\cmake\Qt6")

# 配置使用minGW进行编译，不要用MSVC
if(WIN32)
    set(CMAKE_C_COMPILER "gcc")
    set(CMAKE_CXX_COMPILER "g++")
    # set(CMAKE_MAKE_PROGRAM "mingw32-make")
endif()

find_package(Qt6 REQUIRED COMPONENTS Core Widgets OpenGLWidgets)
file(GLOB sources *.cpp)
add_executable(my_project ${sources})
target_link_libraries(my_project PRIVATE Qt6::Core Qt6::Widgets Qt6::OpenGLWidgets)