#include <iostream>
#include "add.h"

//int add(int x, int y);
//Can be removed because of the include file taking care of the forward declaration

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3,4) << '\n';
    return 0;
}
