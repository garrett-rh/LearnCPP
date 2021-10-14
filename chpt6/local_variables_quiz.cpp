#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int smaller {};
    std::cin >> smaller;

    std::cout << "Enter a larger integer: ";
    int larger {};
    std::cin >> larger;

    if (larger < smaller) //swapping values because user input wrong variables
    {
        int temp { smaller };
        smaller = larger;
        larger = temp;
        std::cout << "Swapping smaller & larger numbers.\n";
    } //temp is now destroyed

    std::cout << "The smaller value is " << smaller << '\n';
    std::cout << "The larger value is " << larger << '\n';

    return 0;
} //larger & smaller are now destroyed