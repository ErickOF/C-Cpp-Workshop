#include <iostream>


int main(int argc, char const *argv[])
{
    try
    {
        std::cout << 20 << std::endl;
        throw "Me cai";
        std::cout << 30 << std::endl;
    }
    catch(const char* e)
    {
        std::cerr << e << '\n';
    }

    return 0;
}
