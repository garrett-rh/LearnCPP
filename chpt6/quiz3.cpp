//Write a passOrFail() function which will return true for the first 3 & false after w/o changing main
#include <iostream>

//This is bad practice as mentioned in 6.10 but good for practice I guess
bool passOrFail()
{
    static int s_tracker { 0 };

    if (s_tracker < 3)
    {
        ++s_tracker;
        return true;
    }
    else
    {
        ++s_tracker;
        return false;
    }
}

int main()
{
	std::cout << "User #1: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #2: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #3: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #4: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #5: " << (passOrFail() ? "Pass\n" : "Fail\n");

	return 0;
}