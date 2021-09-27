#include <iostream>
#include <string>

int main ()
{
    std::cout << "Enter your full name: ";
    std::string full_name{};
    std::getline(std::cin >> std::ws, full_name);

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    int name_length = static_cast<int>(full_name.length());

    std::cout << "Your age + length of your name is: " << name_length + age << '\n';

    return 0;
}
