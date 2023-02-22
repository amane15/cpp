#ifndef TEACHER_H
#define TEACHER_H

#include <string>

class Teacher {
   private:
    std::string m_name{};

   public:
    Teacher(const std::string& name) : m_name{name} {}

    const std::string& getName() const {
        return m_name;
    }
};

#endif