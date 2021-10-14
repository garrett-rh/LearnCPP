#include <iostream>

int getInput()
{
    std::cout << "Enter a number from 0 to 255: ";
    int user_input{};
    std::cin >> user_input;
    return user_input;
}

int decrementOne(int user_input, int pow)
{
    std::cout << '1';
    return (user_input - pow);
}

int decrementBit(int user_input, int pow)
{
    if (user_input >= pow)
        return decrementOne(user_input, pow);

    std::cout << '0';
    return user_input;
}

int main()
{
    int user_input {getInput()};
    user_input = decrementBit(user_input, 128);
    user_input = decrementBit(user_input, 64);
    user_input = decrementBit(user_input, 32);
    user_input = decrementBit(user_input, 16);
    user_input = decrementBit(user_input, 8);
    user_input = decrementBit(user_input, 4);
    user_input = decrementBit(user_input, 2);
    user_input = decrementBit(user_input, 1);

    std::cout << '\n';

    return 0;
}