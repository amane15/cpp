class Fraction {
   private:
    int m_numberator{};
    int m_denominator{};

   public:
    Fraction(int numerator = 0, int denominator = 1)
        : m_numberator{numerator}, m_denominator{denominator} {}
    
};