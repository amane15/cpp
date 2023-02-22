#ifndef DOCTOR_H
#define DOCTOR_H

#include <functional>
#include <string>

#include "Patient.h"

class Doctor {
   private:
    std::string m_name{};
    std::vector<std::reference_wrapper<const Patient>> m_patient{};

   public:
    Doctor(const std::string& name) : m_name{name} {}

    void addPatient(Patient& patient) {
        m_patient.push_back(patient);
        patient.addDoctor(*this);
    }

    friend std::ostream& operator<<(std::ostream& out, const Doctor& doctor) {}

    const std::string& getName() const { return m_name; }
};

#endif