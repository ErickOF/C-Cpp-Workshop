#include "person.h"


int main(int argc, char const *argv[])
{
    /*
    Person p("Erick", "Obregon", 22);
    std::cout << p.get_name() << std::endl;
    */

    Person *p = new Person("Erick", "Obregon", 22);
    std::cout << p->get_name() << std::endl;

    p->set_name("Andres");
    std::cout << p->get_name() << std::endl;

    delete p;

    return 0;
}
