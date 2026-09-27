#pragma once

#include <string>

class Student {
  private:
    int id;
    std::string name;
    float marks;

  public:
    Student(int id, const std::string &name, float marks);

    int getId() const;
    std::string getName() const;
    float getMarks() const;

    void display() const;
};