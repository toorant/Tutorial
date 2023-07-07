#include <iostream>
int main()
{
    int age = 40;
    double age1 = 3.4;
    double c = age * age1;
    std::cout << "c" << c << std::endl;
    std::cout << "size of" << sizeof(c) << std::endl;
    std::cout << "size of" << sizeof(age) << std::endl;
    std::cout << "size of" << sizeof(age1) << std::endl;
    // static_asert is to check the constant value at compiler time
    // static_cast is to convert different type of variable//
    // it is an explict cast between data type in c++
    // int sum = static_cast<int>(age1) + static_cast<int>(c);
    float sum = static_cast<int>(age1) + static_cast<int>(c);
    std::cout << "sum" << sum << std::endl;
    // in older verison c++, the transform between variables type can be done by: int x = (int)age1;
    int x = int(age1);
    std::cout << "x = " << x << std::endl;
    x = static_cast<int>(age1);
    std::cout << "x = " << x << std::endl;
    // overflow..when the data is passed the maximum value
    unsigned char overflow = 252; // it is writtten in ASCII Value !
    std::cout << "overflow = " << overflow << std::endl;
    overflow = 356;
    std::cout << "overflow = " << overflow << std::endl; // it is over flow, becuase 356 is greater than the limitation of char variable
    std::cout << "overflow = " << static_cast<int>(overflow) << std::endl;
    // underflow, the data is lower that minimum value
    char var10 = -325;
    std::cout << "var10 = " << static_cast<int>(var10) << std::endl;

    return 0;
}