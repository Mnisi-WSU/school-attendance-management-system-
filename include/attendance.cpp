#ifndef ATTENDANCE_HPP
#define ATTENDANCE_HPP

#include <string>

struct AttendanceRecord {
    int studentId;
    std::string date;
    bool present;
};

class Attendance {
public:
    static void displayRecord(const AttendanceRecord& record);
};

#endif
