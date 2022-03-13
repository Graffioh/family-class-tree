#include <iostream>
#include <string>
#include "person.h"

Person::Person()
: m_name("N/A"), m_bday(0), m_bmonth(0), m_byear(0), m_dday(0), m_dmonth(0), m_dyear(0) //its called member list initialization
{
}

// To initialize created objects without death date
Person::Person(std::string name, int b_day, int b_month, int b_year)
: m_name(name), m_bday(b_day), m_bmonth(b_month), m_byear(b_year), m_dday(0), m_dmonth(0), m_dyear(0)
{
}

// To initialize created object with death date
Person::Person(std::string name, int b_day, int b_month, int b_year, int d_day, int d_month, int d_year)
: m_name(name), m_bday(b_day), m_bmonth(b_month), m_byear(b_year), m_dday(d_day), m_dmonth(d_month), m_dyear(d_year)
{
}
    

// Accessers (Getters)
std::string Person::getName()
{
    return m_name;
}

int Person::getBDay()
{
    return m_bday;
}

int Person::getBMonth()
{
    return m_bmonth;
}

int Person::getBYear()
{
    return m_byear;
}

int Person::getDDay()
{
    return m_dday;
}

int Person::getDMonth()
{
    return m_dmonth;
}

int Person::getDYear()
{
    return m_dyear;
}

// Various void functions
void Person::printInfoPerson(Person& persona)
{
    std::cout << "The name is: " << m_name << std::endl;
    std::cout << "The date of birth is: " << m_bday << "/" << m_bmonth << "/" << m_byear << std::endl;
    std::cout << "The date of decease is: " << m_dday << "/" << m_dmonth << "/" << m_dyear << std::endl;
}
