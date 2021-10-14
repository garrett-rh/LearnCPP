#include <iostream>

int getNumber()
{
  int input{};
  std::cout << "Enter an integer: ";
  std::cin >> input;
  return input;
}

bool isEven(int input)
{
  if (input % 2 == 0)
  {
    return true;
  }
  else
  {
    return false;
  } 
}

int main()
{
  int input {getNumber()};
  bool output{ isEven(input) };
  if (output) 
  {
    std::cout << input << " is even.\n";
  }
  else
  {
    std::cout << input << " is odd.\n";
  }
  return 0;
}