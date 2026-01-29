#include<iostream>
#include <string>

void print(int* numbers, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << numbers[i];
        std::cout << (i < size - 1 ? ' ' : '\n');
    }
    std::cout << std::endl;
}

void reverse(int* p_arr, int size)
{
    int number;
    for (int i = 0; i < size / 2; i++)
    {
        number = p_arr[i];
        p_arr[i] = p_arr[size - i - 1];
        p_arr[size - i - 1] = number;
    }
}

int main(int argc, char** argv)
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    std::cout << "До функции reverse: ";
    print(arr, 8);
    reverse(arr, 8);
    std::cout << "После функции reverse: ";
    print(arr, 8);
    return 0;
}