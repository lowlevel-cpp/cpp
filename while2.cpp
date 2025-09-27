#include <iostream>

int main()
{
    int count = 1, sum = 0;
    while (count <= 10)
    {
        sum += count;
        count++;
    }
    std::cout << "Sum of 1 to 10 is " << sum <<std::endl;
    return 0;
}