#ifndef IO_H
#define IO_H

int readNumber()
{

    std::cout << "Enter a number: ";
    int number{};
    std::cin >> number;
    return number;
}

void writeAnswer(int input)
{

    std::cout << "The sum of both inputs is " << input << '\n';

}

#endif
