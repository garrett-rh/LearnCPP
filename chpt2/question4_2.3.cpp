#include <iostream>

int doubleNumber(int number)
{
    return number * 2;
}


int main ()
{
    std::cout << "Enter a number: ";
    int number {};
    std::cin >> number;
    std::cout << "Double the value of the number: " << doubleNumber(number) << '\n';

    return 0;
}
