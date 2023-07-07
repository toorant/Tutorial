#include <iostream>
#include <string>
// const, constexper, constinit
//********* constinit is applied on only global variables not local variables
const constinit int var10 = 11;
constinit int age26 = 45;
int age27 = 100;
// constinit int age28{age26}; /constinit variables should be declared using constant variables.
constinit int age30{var10};
const constinit int age28{30};
constinit int age29{age28};

int main()
{
    int age{36};
    double age1{36.0};

    //*******  const variables ********
    //  const age3; // const variable must be initilized otherwise it causes error.
    const int age4 = 36; // do not forget to identify the type of variable.
    const int age5{age}; // const variables can be initilized by non-const variables
    age = 37;            // this changes does not effect on age5 variable
    std::cout << "age5" << age5 << std::endl;

    //********** constexp
    // constexperession is evaluated when your application is being compiled. (the computation is done at compiler stage)
    // The idea is to move some heavy application into compile time. It needs to done just one time.
    // we have three different times including: IDE, compile time, and run time.

    // IDE time: when we type in our IDE
    //  compile time: when the program is compiling
    //  run time: when the executable file is running.
    // constexp must be initlized with const variables and it cannot inilized by non-const run time variables.
    // constexp cannot be inilized with const variables inilizing with non-conont runtime variables such as varaible: age5 here.

    constexpr int age6 = 56;
    constexpr int age7{67};
    // constexpr int age8 = age; // constexpr cannot declar with run-time variable
    constexpr int age8 = age4; // const variables which declare with literal it can be used to initilized the constexpr var
    // constexpr int age9 = age5; // ages5 is initilized by non-constant variable we can use it for initilizing the constexp var
    const int age10 = age4;
    constexpr int age11 = age10;
    constexpr double age12{age11 * 5};

    //************** static_assert allow us to check constant variables at compiler condition// we cannot use run time variable
    // inside the static_assert
    // static_assert(age12 == 180); this is not correct so we have compiler error
    static_assert(age12 == 180);
    // static_assert(age == 36); Error/ because age is not ccompiler time variable
    static_assert(age4 == 36);

    //************* constint can only apply on variables on static or thread local storage ...it means out of main function
    ///  constint ..... variable needs to declar and initilized at compiler time
    // it solve the problems that may come up before the main function
    /// constint ... does not apply constantness
    // constinit int age26 = 45; it shows error becuase constinit is not used to clarify global variables.

    return 0;
}