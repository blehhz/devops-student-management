#include "Student.hpp"

#include <iostream>
#include <vector>

void showMenu() {
    std::cout << "\n===== Student Management System =====\n";
    std::cout << "1. Add Student\n";
    std::cout << "2. Display Students\n";
    std::cout << "3. Search Student\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter choice: ";
}

int main() {
    std::vector<Student> students;

    int choice;

    while (true) {
        showMenu();
        std::cin >> choice;

        if (choice == 1) {
            int id;
            std::string name;
            float marks;

            std::cout << "Enter ID: ";
            std::cin >> id;

            std::cout << "Enter name: ";
            std::cin >> name;

            std::cout << "Enter marks: ";
            std::cin >> marks;

            students.emplace_back(id, name, marks);

            std::cout << "Student added successfully.\n";
        }

        else if (choice == 2) {
            if (students.empty()) {
                std::cout << "No students found.\n";
                continue;
            }

            for (const auto &student : students) {
                student.display();
            }
        }

        else if (choice == 3) {
            int id;
            std::cout << "Enter student ID: ";
            std::cin >> id;

            bool found = false;

            for (const auto &student : students) {
                if (student.getId() == id) {
                    student.display();
                    found = true;
                    break;
                }
            }

            if (!found) {
                std::cout << "Student not found.\n";
            }
        }

        else if (choice == 4) {
            std::cout << "Exiting...\n";
            break;
        }

        else {
            std::cout << "Invalid choice.\n";
        }
    }

    return 0;
}