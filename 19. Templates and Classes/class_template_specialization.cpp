#include <cstdint>
#include <iostream>

template <typename T>
class Storage8 {
   private:
    T m_array[8];

   public:
    void set(int index, const T& value) {
        m_array[index] = value;
    }

    const T& get(int index) const {
        return m_array[index];
    }
};

template <>
class Storage8<bool> {
   private:
    std::uint8_t m_data{};

   public:
    void set(int index, bool value) {
        // Figure out which bit we're setting/unsetting
        // This will put a 1 in the bit we're interested in turning on/off
        auto mask{1 << index};

        if (value)            // If we're setting a bit
            m_data |= mask;   // use bitwise-or to turn that bit on
        else                  // if we're turning a bit off
            m_data &= ~mask;  // bitwise-and the inverse mask to turn that bit off
    }

    bool get(int index) {
        // Figure out which index we are getting
        auto mask{1 << index};
        // bitwise-and to get the value of the bit we're interested in
        // Then implicit cast to boolean
        return (m_data & mask);
    }
};