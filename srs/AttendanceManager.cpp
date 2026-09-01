#include "AttendanceManager.hpp"
#include <iostream>

bool AttendanceManager::studentExists(int studentId) const {
    for (const Student& student : students) {
        if (student.getId() == studentId) {
            return true;
        }
    }

    return false;
}

void AttendanceManager::registerStudent(const Student& student) {
    if (studentExists(student.getId())) {
        std::cout << "\nA student with this ID already exists."
                  << std::endl;
        return;
    }

    students.push_back(student);

    std::cout << "\nStudent registered successfully."
              << std::endl;
}

void AttendanceManager::markAttendance(
    int studentId,
    const std::string& date,
    bool present
) {
    if (!studentExists(studentId)) {
        std::cout << "\nStudent not found."
                  << std::endl;
        return;
    }

    AttendanceRecord record;

    record.studentId = studentId;
    record.date = date;
    record.present = present;

    attendanceRecords.push_back(record);

    std::cout << "\nAttendance marked successfully."
              << std::endl;
}

void AttendanceManager::displayAttendanceReport() const {
    if (attendanceRecords.empty()) {
        std::cout << "\nNo attendance records available."
                  << std::endl;
        return;
    }

    std::cout << "\n========================================"
              << std::endl;
    std::cout << "          ATTENDANCE REPORT"
              << std::endl;
    std::cout << "========================================"
              << std::endl;

    for (const AttendanceRecord& record : attendanceRecords) {
        Attendance::displayRecord(record);
    }

    std::cout << "========================================"
              << std::endl;
}

void AttendanceManager::searchStudent(int studentId) const {
    for (const Student& student : students) {
        if (student.getId() == studentId) {
            std::cout << "\nStudent found:"
                      << std::endl;

            student.display();

            return;
        }
    }

    std::cout << "\nStudent not found."
              << std::endl;
}

void AttendanceManager::displayStudents() const {
    if (students.empty()) {
        std::cout << "\nNo students registered."
                  << std::endl;
        return;
    }

    std::cout << "\n========================================"
              << std::endl;
    std::cout << "          REGISTERED STUDENTS"
              << std::endl;
    std::cout << "========================================"
              << std::endl;

    for (const Student& student : students) {
        student.display();
    }

    std::cout << "========================================"
              << std::endl;
}
