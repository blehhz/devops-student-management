CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

APP = student-manager
TEST = student-tests

SRC = src/main.cpp src/Student.cpp
TEST_SRC = tests/test_student.cpp src/Student.cpp

.PHONY: all build test clean

all: build

build:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(APP)

test:
	$(CXX) $(CXXFLAGS) $(TEST_SRC) -o $(TEST)
	./$(TEST)

clean:
	rm -f $(APP) $(TEST)