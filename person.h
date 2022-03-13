#ifndef PERSON
#define PERSON

class Person 
{
    private:
        std::string m_name;
        int m_bday,m_bmonth,m_byear; // birth date
        int m_dday,m_dmonth,m_dyear; // death date
    public:
        Person();
        Person(std::string name, int b_day, int b_month, int b_year);
        Person(std::string name, int b_day, int b_month, int b_year, int d_day, int d_month, int d_year);
        std::string getName();
        int getBDay();
        int getBMonth();
        int getBYear();
        int getDDay();
        int getDMonth();
        int getDYear();
        void printInfoPerson(Person& persona);
};

#endif // PERSON