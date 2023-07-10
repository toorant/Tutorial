#include <iostream>
#include <string>
#include <ctime>
// arrays size can be defined by []
//  variables are inilizied using: =, (),{}

int main()
{
    int array1[3]{1, 2, 3};
    int array2[]{1, 2, 3};
    // in the std library there is function size which can calculate the size of array
    int size2 = std::size(array2);
    // funtion sizeof(int) is calculate the size of int
    // sizeof(size2)
    // Function size is used for array size(number of array element), (c++17)
    // Function sizeof is used for memory of size of variable
    /*int array3[]{1, 2, 3};
     int b = sizeof(array3) / sizeof(array3[0]);
     int c = std::size(array3);
     std::cout << "b = " << b << std::endl;
     std::cout << "c = " << c << std::endl;
     std::cout << array3 << std::endl; // pritns garbage value
    */

    char array5[3]{'t', 'm', 'l'};
    std::cout << array5 << std::endl; // print garbage
    char array6[]{'t', 'm', 'l'};
    std::cout << array6 << std::endl; // print garbage
                                      // for strings need to print out correctly, they need to be null-terminated.
                                      // null terminated should have \0
    char array4[4]{'t', 'm', 'l'};    // null terminated is added by compiler
    std::cout << array4 << std::endl;
    char array7[4]{'t', 'm', 'l', '\0'};
    std::cout << array7 << std::endl; // correct print
    std::cout << array6 << std::endl; // print garbage
    array6[1] = 'g';                  // we can change the array
    std::cout << array6 << std::endl; // print garbage
    char array8[]{"tooran"};
    std::cout << array8 << std::endl; // print garbage
    std::cout << std::size(array8) << std::endl;
    char array9[]{"h i"};
    std::cout << array9 << std::endl;
    std::cout << std::size(array9) << std::endl;

    //********* random number
    int random = std::rand(); // it generates number between o and randmax
    // randmax is varied ine each compiler
    std::cout << "what is randmax in this compiler?" << RAND_MAX << std::endl;
    // reach random number between 0-specific  number, we use % function
    int random2 = std::rand() % 11;                         // the value is between 0 -10
    std::cout << "what is random2" << random2 << std::endl; // it gives you same sequence each time you run
                                                            // you can solve this problem using seed
                                                            // seed is a thing that tell program to give you differrent numbers.
    int timee = std::time(0);
    std::srand(timee); // give us the different random number// or we can write as below
    // std::srand(std::time(0))
    int random3 = std::rand();
    std::cout << "what is random3 " << random3 << std::endl;

    return 0;
}