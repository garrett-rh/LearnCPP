#include <iostream>

int main () {

    std::cout << "Enter two numbers seperated by a space: ";
    
    int x{};
    int y{};

    std::cin >> x >> y;
    std::cout << "You entered " << x << " and " << y << '\n';

}
