#include <iostream>
#include <ctime>

int main()
{

    std::cout << "what is your name?" << std::endl;
    const int Name_Length{15};
    char name[Name_Length];
    std::cin.getline(name, Name_Length);
    std::cout << "Hello " << name << std ::endl;
    std::srand(time(0));
    char prediction[][90]{"you will buy a house", "you will mary", " you will go travel", "you will buy a car", "you will change your city", "you will find the new job"};
    bool end = false;
    char go_on;
    while (!end)
    {

        std::cout << prediction[std::rand() % (std::size(prediction))] << std::endl;
        std::cout << " do you want to continue ? (y|N)" << std::endl;
        std::cin >> go_on;
        end = ((go_on == 'y') || (go_on == 'Y')) ? false : true;
    }
    return 0;
}