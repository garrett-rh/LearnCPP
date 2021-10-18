//Fix the following program

#include <iostream>

int main()
{
	std::cout << "Enter a positive number: ";
	int num{};
	std::cin >> num;
//reads a number from stdin to the num variable

	if (num < 0) //Had to add {} to get this to work due to multiple statements
    {
		std::cout << "Negative number entered.  Making positive.\n";
		num = -num;
    }
	std::cout << "You entered: " << num;

	return 0;
}