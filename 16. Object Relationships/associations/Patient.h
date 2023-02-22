#ifndef PATIENT_H
#define PATIENT_H

#include <functional>
#include <string>
#include <vector>

#include "Doctor.h"

class Patient {
   private:
    std::string m_name{};
    std::vector<std::reference_wrapper<const Doctor>> m_doctor{};

    void addDoctor(const Doctor& doctor) {
        m_doctor.push_back(doctor);
    }

   public:
    Patient(const std::string& name) : m_name{name} {}

    friend std::ostream& operator<<(std::ostream& out, const Patient& patient) {}
    const std::string& getName() const { return m_name; }
    friend void Doctor::addPatient(Patient& patient) {
    }
};

#endif