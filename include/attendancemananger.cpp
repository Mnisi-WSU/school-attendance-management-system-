#ifndef ATTENDANCE_MANAGER_HPP
#define ATTENDANCE_MANAGER_HPP

#include <string>
#include <vector>

#include "Student.hpp"
#include "Attendance.hpp"

class AttendanceManager {
private:
    std::vector<Student> students;
    std::vector<AttendanceRecord> attendanceRecords;

    bool studentExists(int studentId) const;

public:
    void registerStudent(const Student& student);

    void markAttendance(
        int studentId,
        const std::string& date,
        bool present
    );

    void displayAttendanceReport() const;

    void searchStudent(int studentId) const;

    void displayStudents() const;
};

#endif
