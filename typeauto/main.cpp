#include <iostream>
int main()
{
    // we can set auto type to variables. Then compiler can
    // distingush the type of variable. For example, here
    // ompiler set integer type to a.
    auto a = 3;
    // if we assign not integer value to a, sometimes compiler does not show
    // error but it put garbage value for the a or some edited value.
    a = 3.3;
    std::cout << "a =" << a << std::endl;
    auto b = 3u; // put unsigned integer for the b
    b = -3.3;    // compiler put some garbage value for the b
    std::cout << "b =" << b << std::endl;

    return 0;
}