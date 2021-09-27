#include <iostream>

//Looks for a prime number
//First usage of if statements

bool isPrime(int x)
{
    if (x == 2 || x == 3 || x == 5 || x == 7)
        return true;
    else
        return false;

    //Could also use switch case
    //switch (x)
    //{
    //  case 2:
    //  case 3:
    //  case 5:
    //  case 7:
    //      return true;
    //}
    //
    //return false;
}

int main()
{
    std::cout << "Enter a single digit number: ";
    int x{};
    std::cin >> x;

    if (isPrime(x))
        std::cout << x << " is a prime number\n";
    else
        std::cout << x << " is not a prime number\n";

    return 0;
}
