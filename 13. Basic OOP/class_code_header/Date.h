#ifndef DATE_H
#define DATE_H
class Date {
   private:
    int m_day;
    int m_month;
    int m_year;

   public:
    Date(int day, int month, int year);
    void SetDate(int day, int month, int year);
    int getYear() const { return m_year; }
    int getMonth() const { return m_month; }
    int getDay() const { return m_day; }
};
#endif