#include <iostream>


// <data-type> name(type0 arg0, type1 arg1, ...)
void say_hello()
{
    std::cout << "Hola\n";
    return;
}

int sumi(int a, int b) // *args, **kargs
{
    return a + b;
}

float sumf(float a, float b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    // num: int
    int result, num;

    say_hello();

    std::cout << sumi(10, 10) << std::endl;

    result = sumi(20, 30);
    std::cout << result << std::endl;

    std::cout << num << std::endl;

    std::cout << sumf(2.0, 2.0) << std::endl;

    return 0;
}
