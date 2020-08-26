#include <iostream>


int main(int argc, char const *argv[])
{
    int num1 = 10, num2 = 20;

    if (num1 > num2)
    {
        std::cout << "Num1 > Num2" << std::endl;
    } else if (num1 == num2) // Diferente !=
    {
        std::cout << "Num1 == Num2" << std::endl;
    } else {
        std::cout << "Num1 < Num2" << std::endl;
    }

    if (num1 == 10 && num2 == 20) // && and
    {
        std::cout << "Num1 == 10 and Num2 == 20" << std::endl;
    }

    if (num1 == 10 || num2 == 30) // || and
    {
        std::cout << "Num1 == 10 or Num2 == 30" << std::endl;
    }

    if (!(num1 == 20))
    {
        std::cout << "not Num1 == 20" << std::endl;
    }

    return 0;
}
