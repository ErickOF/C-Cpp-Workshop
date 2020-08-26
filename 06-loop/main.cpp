#include <iostream>


void for_loop()
{
    // for i in range(0, 100 + 1, 1)
    for (int i = 0; i <= 100; i += 5)
    {
        std::cout << i << std::endl;
    }
}

void for_loop2()
{
    int i;

    // for i in range(0, 100 + 1, 1)
    for (i = 0; i <= 100; i += 5)
    {
        std::cout << i << std::endl;
    }
}

void for_loop3()
{
    int i = 0;

    // for i in range(0, 100 + 1, 1)
    for (; i <= 100; i += 5)
    {
        std::cout << i << std::endl;
    }
}

void for_loop4()
{
    int i = 0;

    // for i in range(0, 100 + 1, 1)
    for (;;i++)
    {
        std::cout << i << std::endl;
    }
}

void while_loop()
{
    int num = 0;

    while (num < 10)
    {
        std::cout << num << std::endl;

        // num += 1;
        // num--; -> num -= 1;
        num++;
    }
}


int main(int argc, char const *argv[])
{
    while_loop();

    std::cout << std::endl;

    for_loop4();

    return 0;
}
