#include "solution.hpp"
#include <fstream>

Student ReadStudentRecFromStream(std::istream& is) {
  while (is.good()) {
    std::string first_name = "";
    std::string last_name = "";
    unsigned int uin = 0;
    float gpa = 0;
    char throw_away = '\0';
    is >> first_name >> throw_away >> last_name >> throw_away >> uin >> throw_away >> gpa;
    if (is.fail()) {
      return Student{};
    }
    return Student{(first_name + " " + last_name), uin, gpa};
  }
  return Student{};
}
