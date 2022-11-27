cmake_minimum_required(VERSION 3.23)
project(Project)

set(CMAKE_CXX_STANDARD 14)

# 遍历项目根目录下所有的 .cpp 文件
file (GLOB_RECURSE files *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file} Match1/1_1.cpp Match1/1_2.cpp Match1/1_3.cpp Match1/1_4.cpp Match2/2_1.cpp Match2/2_2.cpp Match2/2_3.cpp Match2/2_4.cpp)
    message (\ \ \ \ --\ ${file}\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()
