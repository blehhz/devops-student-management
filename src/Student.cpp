#include "Student.hpp"
#include <iostream>
#include <stdexcept>

Student::Student(int id, const std::string &name, float marks)
    : id(id), name(name), marks(marks) {

    if (id <= 0) {
        throw std::invalid_argument("Student ID must be positive");
    }

    if (name.empty()) {
        throw std::invalid_argument("Student name cannot be empty");
    }

    if (marks < 0 || marks > 100) {
        throw std::invalid_argument("Marks must be between 0 and 100");
    }
}

int Student::getId() const { return id; }

std::string Student::getName() const { return name; }

float Student::getMarks() const { return marks; }

void Student::display() const {
    std::cout << "ID: " << id << " | Name: " << name << " | Marks: " << marks
              << '\n';
}