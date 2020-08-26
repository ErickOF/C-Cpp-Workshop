#include "person.h"


Person::Person(std::string name, std::string lastname, int age)
{
    this->name = name;
    this->lastname = lastname;
    this->age = age;
}

Person::~Person()
{
    std::cout << "Me destruyen\n";
}

std::string Person::get_name()
{
    this->name;
}

void Person::set_name(std::string name)
{
    this->name = name;
}
