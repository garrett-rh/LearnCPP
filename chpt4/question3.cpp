#include <iostream>

/*User prompted for two values
 * User prompted for a mathematical symbol
 * Compute value1 mathematical symbol value2
 */

double getValue()
{
    std::cout << "Enter in a double: ";
    double value{};
    std::cin >> value;

    return value;
}

char getSymbol()
{
    std::cout << "Enter one of the following: +, -, *, or /: ";
    char symbol{};
    std::cin >> symbol;

    return symbol;
}

int main()
{
    double value1{ getValue() };
    double value2{ getValue() };
    char symbol{ getSymbol() };
    double final_value{};
    switch (symbol)
    {
        case '+':
            final_value = value1 + value2;
            break;
        case '-':
            final_value = value1 - value2;
            break;
        case '*':
            final_value = value1 * value2;
            break;
        case '/':
            final_value = value1 / value2;
            break;
        default:
            return 1;
    }
    std::cout << value1 << ' ' << symbol << ' ' << value2 << " is " << final_value << '\n';

    return 0;
}
