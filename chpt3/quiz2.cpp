#include <iostream>

int readNumber()
{
	std::cout << "Please enter a number: ";
	int x {};
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The quotient is: " << x;
}

int main()
{
	int x{ };
	int y{ };
	x = readNumber();
	//x = readNumber(); - Original line, reassigned the x value then divided by y which had a value of 0
	y = readNumber();
	writeAnswer(x/y);

	return 0;
}
