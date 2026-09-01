cmake_minimum_required(VERSION 3.10)

project(SchoolAttendanceManagementSystem)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(
    SchoolAttendance
    src/main.cpp
    src/Student.cpp
    src/Attendance.cpp
    src/AttendanceManager.cpp
)
