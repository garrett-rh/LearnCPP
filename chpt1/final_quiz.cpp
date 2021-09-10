#include <iostream>

int main ()
{
    std::cout << "Enter an integer: ";
    int first_number{};
    std::cin >> first_number;

    std::cout << "Enter another intger: ";
    int second_number{};
    std::cin >> second_number;

    std::cout << first_number << " + " << second_number << " is " << first_number + second_number << '\n';
    std::cout << first_number << " - " << second_number << " is " << first_number - second_number << '\n';

    return 0;
}
