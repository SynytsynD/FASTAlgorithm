cmake_minimum_required(VERSION 3.0)

project(TestTask)

set(SOURCES
   TestTask.cpp
)

set(OpenCV_DIR "D:/Programs/test_task/opencv/build")
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(TestTask ${SOURCES})
target_link_libraries(TestTask PRIVATE ${OpenCV_LIBS})
