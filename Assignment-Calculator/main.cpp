#include <iostream>
#include <ctime>

int main()
{

    char welcome[]{" Welcome to the gretest calcultor on Earth!"};
    std::cout << welcome << std::endl;
    int random1;
    int random2;
    int result;
    bool end = false;
    char answer;
    std::srand(time(0));
    while (!end)
    {
        random1 = std::rand() % 200;
        random2 = std::rand() % 200;
        char operation[][90]{"+", "-", "*"};
        int a = std::rand() % (std::size(operation));
        switch (a)
        {
        case 0:
            result = random1 + random2;
            break;
        case 1:
            result = random1 - random2;
            break;
        case 2:
            result = random1 * random2;
            break;
        };
        int resultUser;
        std::cout << "what is the result of " << random1 << " " << operation[a] << " " << random2 << std::endl;
        std::cin >> resultUser;
        if (resultUser == result)
        {
            std::cout << "congratulation you got the result " << result << " "
                      << "right!" << std::endl;
        }

        else
        {

            std::cout << "Naa the correct result is " << result << std::endl;
        }
        std::cout << "Do you want me to try again? (Y|N)" << std::endl;
        std::cin >> answer;
        end = ((answer == 'y') || (answer == 'Y')) ? false : true;
    }

    return 0;
}