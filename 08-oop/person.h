#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string.h>

#include "math.h"


class Person
{
private:
    std::string name;
    std::string lastname;
    int age;
public:
    std::string get_name();
    void set_name(std::string name);
    Person(std::string name, std::string lastname, int age);
    ~Person();
};

#endif /* PERSON_H */
