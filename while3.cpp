#include <iostream>

int main()
{
    int raqam = 1, yigindi = 0, val;
    std::cout << "Enter the number till which the sum has to be calculated";
    std::cin>>val;
    while (raqam <=val) {
        yigindi = yigindi + raqam;
        raqam = raqam + 1;
    }
    std::cout << "Sum of 1 to " << val << "is" << yigindi;
    return 0; 

}