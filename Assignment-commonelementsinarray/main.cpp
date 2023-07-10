
#include <iostream>

int main()
{
    int array1[10];
    int array2[10];
    int common[10];
    int count{0};

    for (unsigned int i{}; i < 10; ++i)
    {
        std::cout << "array1 [" << i << "]" << std::endl;
        std::cin >> array1[i];
        std::cout << "array2 [" << i << "]" << std::endl;
        std::cin >> array2[i];
    };
    for (unsigned int i{}; i < 10; ++i)
    {
        for (unsigned int j{}; j < 10; ++j)
        {
            if (array1[i] == array2[j])
            {

                common[count] = array1[i];
                count = count + 1;
                // std::cout << "count = " << count << std::endl;
            }
        }
    }
    char nothing[]{"there are 0 common elements "};

    if (count == 0)
    {
        std::cout << nothing << std::endl;
    }
    else
    {
        std::cout << "there are " << count << "common elements they are ";
        for (unsigned int i{}; i < count; ++i)
        {
            std::cout << common[i] << " ";
        }
        std::cout << std::endl;
    };

    return 0;
}