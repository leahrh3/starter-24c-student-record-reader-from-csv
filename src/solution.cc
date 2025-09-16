#include "solution.hpp"
#include <fstream>
#include <iostream>

Student ReadStudentRecFromStream(std::istream& is) {
  if (!is.is_open()) {
    std::cerr << "Could not open" << is << std::endl;
    return Student{};
  }
  while (is.good()) {
    std::string first_name = "";
    std::string last_name = "";
    unsigned int uin = 0;
    float gpa = 0;
    char throw_away = '\0';
    if (is.fail()) {
      return Student{};
    }
    std::string full_name = first_name + " " + last_name;
    return Student{full_name, uin, gpa};
  }
  return Student{};
}
