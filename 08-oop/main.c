#include <stdio.h>
#include <stdlib.h>


struct person
{
    char* name;
    char* last_name;
    short age;
} typedef Person;


void person_constructor(Person* p, char* name, char* lastname, int age)
{
    p->name = "erick";
    p->last_name = "obregon";
    p->age = 22;
}

int main(int argc, char const *argv[])
{
    Person *p = (Person*) malloc(sizeof(Person));
    person_constructor(p, "erick", "obregon", 22);
    printf("Name: %s\nLastname: %s\nAge: %d\n", p->name, p->last_name, p->age);

    return 0;
}
