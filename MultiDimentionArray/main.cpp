#include <iostream>

int main()
{
    int array1[10]; // one dimention array with 10 integer
    int array3[]{1, 2, 3};
    int array4[][3]{{1, 2}, {1}, {1}};                                                       // the aize of first dimention can be omitted
                                                                                             // int array4[3][]{{1, 2}, {1}, {1}};       // Error
    int array5[][2][3]{{{1, 2, 3}, {4, 5}}, {{1, 2, 3}, {3, 2, 2}}, {{1, 2, 4}, {3, 6, 7}}}; //
    int array2[3][2]{{1, 2}, {3, 4}, {5, 6}};                                                // 2D array it is array of array, we can store 12 integer numbers

    std::cout << array2[0][1] << std::endl;
    std::cout << array2[0] << std::endl; // garbage value but we can do it for character array
    // print out elemnent of array
    // hardcode loop
    for (size_t i{0}; i < 3; ++i)
    {
        for (size_t j{0}; j < 2; ++j)
        {
            std::cout << "array2[" << i << "]"
                      << "[" << j << "]= " << array2[i][j] << std::endl;
        }
    }
    // write a loop not in har code
    for (size_t i{0}; i < std::size(array2); ++i)
    {
        for (size_t j{0}; j < std::size(array2[i]); ++j)
        {
            std::cout << "array2[" << i << "]"
                      << "[" << j << "]= " << array2[i][j] << std::endl;
        }
    }
    for (size_t i{0}; i < std::size(array5); ++i)
    {
        for (size_t j{0}; j < std::size(array5[i]); ++j)
        {
            for (size_t k{0}; k < std::size(array5[i][j]); ++k)
                std::cout << array5[i][j][k] << std::endl;
        }
    }
    // multi dimention array of char
    char array35[][9]{{'t', 'o'}, {'y', 'u', 't'}};
    // it better to put value for array as below:
    char array36[][9]{"to", "yu"};
    char array37[]{"too"};
    std::cout << array35[0] << std::endl; // for the case of int array it produce garbage value
    for (size_t i{0}; i < std::size(array35); ++i)
        std::cout << array35[i] << std::endl; // for the  case of int array it produce garbage value

    return 0;
}