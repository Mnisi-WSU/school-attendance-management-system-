#include "Attendance.hpp"
#include <iostream>

void Attendance::displayRecord(const AttendanceRecord& record) {
    std::cout << "Student ID: " << record.studentId
              << " | Date: " << record.date
              << " | Status: "
              << (record.present ? "Present" : "Absent")
              << std::endl;
}
