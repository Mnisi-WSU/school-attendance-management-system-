#include "Student.hpp"
#include <iostream>

Student::Student()
    : studentId(0), name(""), surname("") {
}

Student::Student(int id, const std::string& name, const std::string& surname)
    : studentId(id), name(name), surname(surname) {
}

int Student::getId() const {
    return studentId;
}

std::string Student::getName() const {
    return name;
}

std::string Student::getSurname() const {
    return surname;
}

void Student::display() const {
    std::cout << "ID: " << studentId
              << " | Name: " << name
              << " | Surname: " << surname << std::endl;
}
