#include <iostream>
int main()
{
    std::string name;
    int age;
    std::cout << "What is your full name? " << std::endl;
    std::getline(std::cin, name); // getline is built-in function which can get the string input and save it as output
    std::cout << " what is your age? " << std::endl;
    std::cin >> age;
    std::cout << " Hello " << name << " your age is " << age << std::endl;

    return 0;
}