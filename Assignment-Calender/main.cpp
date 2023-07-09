#include <iostream>
#include <string>

constexpr int Monday{1};
constexpr int Tuesday{2};
constexpr int Wednesday{3};
constexpr int Thursday{4};
constexpr int Friday{5};
constexpr int Saturday{6};
constexpr int Sunday{7};

int main()
{

    int day;
    int var;
    int res;
    int past;

    // Read the day from user
    std::cout << "which day is today? [1: Monday, 2: Tuesday, 3: Wednesday, 4: Thursday, 5: Friday, 6: Saturday, 7: Sunday]"
              << std::endl;

    std::cin >> day;
    if (day > 7 || day < 0)
    {
        std::cout << day << " is not valid day, please enter a day between 1 and 7" << std::endl;
        std::cin >> day;
    }
    std::cout << "how many days have passed up today" << std::endl;
    std::cin >> var;
    res = var % 7;

    if (res <= day)
        past = day - res;
    else
    {
        res = 7 - res;
        past = day + res;
    }
    switch (past)
    {
    case (1):
        std::cout << "today is monday" << std::endl;
        break;
    case (2):
        std::cout << "today is tuesday" << std::endl;
        break;
    case (3):
        std::cout << "today is wednsday" << std::endl;
        break;
    case (4):
        std::cout << "today is thursday" << std::endl;
        break;
    case (5):
        std::cout << "today is friday" << std::endl;
        break;
    case (6):
        std::cout << "today is saturday" << std::endl;
        break;
    case (7):
        std::cout << "today is sunday" << std::endl;
        break;

    default:
        break;
    }
    return 0;
}
