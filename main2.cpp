#include<iostream>
#include <string>

void swap(int* number1, int* number2)
{
    *number1 = *number1 + *number2;
    *number2 = *number1 - *number2;
    *number1 = *number1 - *number2;
}

int main(int argc, char** argv)
{
    int a{ 5 };
    int b{ 8 };
    std::cout << "a = " << a << ", b = " << b << '\n';
    swap(&a, &b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    return 0;
}