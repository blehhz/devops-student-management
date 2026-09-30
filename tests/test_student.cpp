#include "../src/Student.hpp"

#include <cassert>
#include <iostream>
#include <stdexcept>

void testStudentCreation() {
    Student student(101, "Gordy", 87);

    assert(student.getId() == 101);
    assert(student.getName() == "Gordy");
    assert(student.getMarks() == 89);

    std::cout << "[PASS] Student creation\n";
}

void testInvalidId() {
    try {
        Student student(-1, "Test", 80);
        assert(false);
    } catch (const std::invalid_argument &) {
        std::cout << "[PASS] Invalid ID rejected\n";
    }
}

void testInvalidMarks() {
    try {
        Student student(102, "Test", 150);
        assert(false);
    } catch (const std::invalid_argument &) {
        std::cout << "[PASS] Invalid marks rejected\n";
    }
}

void testEmptyName() {
    try {
        Student student(103, "", 90);
        assert(false);
    } catch (const std::invalid_argument &) {
        std::cout << "[PASS] Empty name rejected\n";
    }
}

int main() {
    testStudentCreation();
    testInvalidId();
    testInvalidMarks();
    testEmptyName();

    std::cout << "\nAll tests passed!\n";

    return 0;
}