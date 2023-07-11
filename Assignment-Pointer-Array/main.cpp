#include <iostream>

int main()
{

        int *pr;

    int data[10];

    for (unsigned int i{0}; i < 10; ++i)
    {
        std::cout << "enter data[" << i << "]?" << std::endl;
        std::cin >> data[i];
    }

    int max = data[0];
    for (unsigned int i{0}; i < 10; ++i)
    {
        if (data[i] > max)
            max = data[i];
        pr = &data[i];
    }

    std::cout << " the maximum element is " << max << std::endl;
    std::cout << "the location of max element of data array in memory is = " << pr << std ::endl;
    return 0;
}