#include <iostream>

/*
 * Program is supposed to add two numbers but does not work correctly
 * Use a debugger to step through and watch the x value
 * Then fix
 */

int readNumber()
    //Also removed the passed in value and defined a local variable
{
    int x{};
	std::cout << "Please enter a number: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The sum is: " << x;
}

int main()
{
	int x { readNumber() };
//readNumber(x); - Original line, doesn't assign this value to anything. Fix is above
	x = x + readNumber();
	writeAnswer(x);

	return 0;
}
