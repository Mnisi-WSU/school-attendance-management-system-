#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student {
private:
    int studentId;
    std::string name;
    std::string surname;

public:
    Student();
    Student(int id, const std::string& name, const std::string& surname);

    int getId() const;
    std::string getName() const;
    std::string getSurname() const;

    void display() const;
};

#endif
