#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <functional>
#include <vector>

#include "Teacher.h"

class Department {
   private:
    // const Teacher& m_teacher;
    // for excercise
    std::vector<std::reference_wrapper<const Teacher>> m_teachers{};

   public:
    // Department(const Teacher& teacher) : m_teacher{teacher} {}
    // for exercise
    void add(const Teacher& teacher) {
        m_teachers.push_back(teacher);
    }

    friend std::ostream& operator<<(std::ostream& out, const Department& department) {
        out << "Department: ";

        for (const auto& teacher : department.m_teachers) {
            out << teacher.get().getName() << ' ';
        }

        out << '\n';

        return out;
    }
};

#endif