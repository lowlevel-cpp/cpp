#include <iostream>
int main()
{
    int number = 1;
    while (number <= 10)
    {
        std::cout << "Hello there until it ends! " << number << std::endl;
        number = number + 1;
    }
    return 0;
}