#include <iostream>
#include <vector>


void change_value(int* ptr_num) 
{
    *ptr_num = 20;
}

void static_mem()
{
    int num = 10;
    int* ptr_num = &num;

    std::cout << "Value num: " << num << std::endl;
    std::cout << "Address num: " << &num << std::endl;

    std::cout << "Value ptr: " << ptr_num << std::endl;
    std::cout << "Address ptr: " << &ptr_num << std::endl;
    std::cout << "Value in ptr: " << *ptr_num << std::endl << std::endl;

    change_value(ptr_num);
    std::cout << "Value num: " << num << std::endl;
    std::cout << "Address num: " << &num << std::endl;

    std::cout << "Value ptr: " << ptr_num << std::endl;
    std::cout << "Address ptr: " << &ptr_num << std::endl;
    std::cout << "Value in ptr: " << *ptr_num << std::endl << std::endl;

    int array[] = {2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(array) / sizeof(int);

    std::cout << size << std::endl;

    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << std::endl;
    }

    std::cout << std::endl;

    // C
    //int *array2 = (int*) malloc(10 * sizeof(int));
    //int *array2 = (int*) calloc(10, sizeof(int));

    // C++
    int *array2 = new int[10];

    for (int i = 0; i < 10; i++)
    {
        // array2[i] = i * i;
        *(array2 + i) = i * i;
        std::cout << *(array2 + i) << std::endl;
    }

    // C
    //free(array2);

    // C++
    delete[] array2;
}

void dynamic_mem()
{
    std::vector<int> v1;
    v1.push_back(10);
    v1.push_back(100);
    v1.push_back(1000);
    v1.pop_back();

    for (int i = 0; i < v1.size(); i++)
    {
        std::cout << v1[i] << std::endl;
    }
}


int main(int argc, char const *argv[])
{
    dynamic_mem();
    return 0;
}
