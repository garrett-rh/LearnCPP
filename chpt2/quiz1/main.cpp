#include <iostream>
#include "io.h"
//Get two ints from user, add them together, output the answer
//Three functions:
//  readNumber - get and return a single int from the user
//  writeAnswer - output the answer via single parameter & return nothing
//  main() for glue

//Part of question 1 & 2 solution
//int readNumber();
//void writeAnswer(int input);

int main ()
{

    int total{ 0 };
    for (int i = 0; i<2; ++i)
    {
        total += readNumber();
    }
    writeAnswer(total);
    return 0;

}

//Part of question 1 solution
//int readNumber()
//{
//
//    std::cout << "Enter a number: ";
//    int number{};
//    std::cin >> number;
//    return number;
//}
//
//void writeAnswer(int input)
//{
//
//    std::cout << "The sum of both inputs is " << input << '\n';
//
//}
