#include <iostream>

// First it is required to define function
// The function can be called in main.
int sum(int a, int b)
{
    int result = a + b;
    return result;
}
int multiply(int a, int b)
{
    int c = a * b;
    return c;
}

int main()
{

    int First_Variable{2};
    int Second_Variable = 3;

    // int sum = First_Variable + Second_Variable; instead of this it is better to define Function then Call the Funtion
    // Call Function
    int addNumber = sum(First_Variable, Second_Variable);
    std::cout << "sum is " << addNumber << std::endl;
    // The function "sum" can be called several times.
    std::cout << "sum is " << sum(10, 2) << std::endl;
    // call multiply function
    std::cout << "Multyply is " << multiply(2, 3);
    return 0;
}